#include<bits/stdc++.h>
using namespace std;

class Edge{  //created Edge class to store the input of edges
    public:
    int source;
    int dest;
    int weight;
};

bool compare(Edge e1, Edge e2){
    return e1.weight < e2.weight; //return true if weight of e1 is less than e2
}

//function to find the parent of a vertex v
int findParent(int v, int*parent){
    //basecase, if parent of v is v itself
    if(parent[v]==v){
        return v;
    }
    //otherwise recursive call on parent[v]
    return findParent(parent[v], parent);
}

void kruskals(Edge* input, int n, int E){
    sort(input, input+E, compare); //sort the input array according to their weights
                                   //increasing order of their weights
    
    Edge* output = new Edge[n-1]; //output array of size n-1 to store the final MST
    
    int* parent = new int[n]; //parent array to store the parent of each vertex
    
    for(int i=0 ; i<n ; i++){ //initialised with their vertex number
        parent[i] = i;
    }

    int count = 0; // count variable to count the number of edges in the MST, finally count will be equal to n-1
    int i = 0; // i is the index to traverse over the input array

    while(count<n-1){
        Edge currentEdge = input[i]; //currentEdge is the edge with the minimum weight
        int sourceParent = findParent(currentEdge.source, parent); //find the parent of source vertex
        int destParent = findParent(currentEdge.dest, parent); //find the parent of destination vertex

        // if the parents are not equal then add the currentEdge to output
        if(sourceParent!=destParent){
            output[i] = currentEdge;
            count++;
            parent[sourceParent] = destParent; //update the parent of source vertex
        }
        i++;
    }

    //printing the MST
    for(int i=0 ; i<n-1 ;i++){
        if(output[i].source<output[i].dest){
            cout << output[i].source << " " << output[i].dest <<  " " <<  output[i].weight << endl;       
        }
        else{
            cout << output[i].dest << " " << output[i].source <<  " " <<  output[i].weight << endl;
        }
    }
}

int main(){
    int n, E; //n = vertices, E = edges
    cin >> n >> E;

    Edge* input = new Edge[E]; //array of type Edge and size = E

    //taking input of Edges array
    for(int i=0 ; i<E ; i++){
        int s, d, w;
        cin >> s >> d >> w;
        input[i].source = s;
        input[i].dest = d;
        input[i].weight = w;
    }

    //function call
    kruskals(input, n, E);
    return 0;
}

