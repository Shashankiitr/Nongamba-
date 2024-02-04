#include<bits/stdc++.h>
using namespace std;

int findMinVertex(int *weights, bool *visited, int n){
    int minVertex = -1;
    for(int i=0 ; i<n ; i++){
        if(!visited[i] && (minVertex==-1||weights[i]<weights[minVertex])){
            minVertex=i;
        }
    }    
    return minVertex;
}

//explain the above function
//we are passing the weights array, visited array and the number of vertices
//we are initializing the minVertex to -1
//we are traversing through the weights array and checking if the vertex is not visited and the minVertex is -1 or the weight of the vertex is less than the weight of the minVertex
//why we are taking the weight of the vertex is less than the weight of the minVertex?
//because we are finding the minimum weight vertex
//if the above condition is true then we are assigning the minVertex to the vertex
//and finally returning the minVertex

void prims(int**edges, int n){
    
    int*parent = new int[n]; //to store the parent of each vertex
    int*weights = new int[n]; //to store the weight of each vertex
    bool*visited = new bool[n]; //to store whether the vertex is visited or not

    //visited array is assigned to false and weight array is assigned to infinity
    for(int i=0 ; i<n ; i++){
        weights[i] = INT_MAX;
        visited[i] = false;
    }

    //initially parent of 0th vertex to -1 and weight to 0
    parent[0] = -1;
    weights[0] = 0;

    //finding min vertex
    for(int i=0 ; i<n-1 ; i++){
        int minVertex = findMinVertex(weights, visited, n);
        visited[minVertex] = true;

        //explore the unvisited neighbours of minVertex
        for(int j=0 ; j<n ; j++){
            if(edges[minVertex][j]!=0 && !visited[j]){
                if(edges[minVertex][j]<weights[j]){

                    //updating the weight and parent of the vertex
                    weights[j] = edges[minVertex][j];
                    parent[j] = minVertex;
                }
            }
        }
    }

    for(int i=1 ; i<n ; i++){
        if(parent[i]<i){
            cout << parent[i] << " " << i << " " << weights[i] << endl;
        }
        else{
            cout << i << " " << parent[i] << " " << weights[i] << endl;
        }
    }
}

int main(){
    int n, e;
    cin>>n>>e; //n is edges and v is vertices

    int**edges = new int*[n]; //adjacensy matrix to store the graph
    for(int i=0 ; i<n ; i++){
        edges[i] = new int[n];
        for(int j=0 ; j<n ; j++){
            edges[i][j] = 0;
            //initializing all the values to 0
            //means that there is no edge between them
        }
    }

    //taken input of the edges and updated their weights in adjacensy matrix
    for(int i=0 ; i<e ; i++){
        int f, s, weight;
        cin>>f>>s>>weight;
        edges[f][s] = weight;
        edges[s][f] = weight;
    }

    //function call to find the minimum spanning tree
    prims(edges, n);

    //deleted the adjacensy matrix
    for(int i=0 ; i<n ;i++){
        delete [] edges[i];
    }
    delete[]edges;
    return 0;
}
