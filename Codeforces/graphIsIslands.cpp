//Islands 

#include<bits/stdc++.h>
using namespace std;

void islandHelper(int** edges, int n, int sv, bool* visited){
    visited[sv] = true;
     for(int i = 0; i< n;i++){
        if(i==sv){
            continue; 
        } 
        if(edges[sv][i]==1 && !visited[i]){
            islandHelper(edges, n, i, visited);
        }
     }
}

int island(int** edges, int n, bool* visited){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        if(!visited[i]){
            count++;
            islandHelper(edges, n, i, visited);
        }
        
    }
    return count;
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
         edges[f][s] = 1;
         edges[s][f] = 1;
    }

    bool* visited = new bool[n];//visited array
    for(int i=0 ; i<n ;i++){
        visited[i] = false;
    }


    cout << island(edges, n, visited) << endl;

    //delete
    delete [] visited;
    for(int i=0 ; i<n ; i++){
        delete [] edges[i];
    }
    delete [] edges;
}