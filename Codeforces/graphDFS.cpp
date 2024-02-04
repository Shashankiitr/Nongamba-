//DFS : Deapth First Search

#include<bits/stdc++.h>
using namespace std;

//function for printing DFS
void printDFS(int** edges, int n, int sv, bool* visited){
     cout << sv << endl;// printing the starting vertex
     visited[sv] = true;// marking it visited

     // checking for all the vertices connected to sv
     for(int i = 0; i< n;i++){
        if(i==sv){
            continue; 
        } 
        // if connected and not visited then print
        if(edges[sv][i]==1){
            if(visited[i]){
                continue; // checking before printing that it's already printed or not
            }
            printDFS(edges, n, i, visited);// recursive call
        }
     }
}
// function for calling DFS
void DFS(int** edges, int n){
    bool* visited = new bool[n];
    for(int i=0 ; i<n ; i++){
        visited[i] = false;
    }
// calling printDFS for all the vertices
    for(int i=0 ; i<n ; i++){
        if(!visited[i]){
            printDFS(edges, n, i, visited);
        }
    }

    delete [] visited;
}

int main(){
    int n;  //vertices
    int e; //edges
    cin >> n >> e;

    //make 2d array and put all values 0
    int** edges = new int*[n];
    for(int i=0 ; i<n ; i++){
        edges[i] = new int[n];
        for(int j=0 ; j<n ;j++){
            edges[i][j] = 0;
        }
    }

    // taken edges input and assign 1 to them
    for(int i = 0; i<e ; i++){
        int f, s;
        cin >> f >> s;
        // assigning 1 to both the vertices
         edges[f][s] = 1;       
         edges[s][f] = 1;
    }

    DFS(edges, n);

    //deleting the 2d array
    for(int i=0 ; i<n ; i++){
        delete [] edges[i];
    }
    delete [] edges;
}
