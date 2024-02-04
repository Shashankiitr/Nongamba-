//Has Path

#include <bits/stdc++.h>
using namespace std;

bool HasPath(int** edges, int n, int sv, int ev){
    queue<int> q; // queue for storing the vertex to print
    bool* visited = new bool[n];
    for(int i=0 ; i<n ; i++){
        visited[i] = false;
    }
    q.push(sv);
    visited[sv]=true; 
    while(!q.empty()){
        int front = q.front(); 
        q.pop();
        if(front==ev){
            delete [] visited;
            return true;
        }
        for(int i=0 ; i<n ; i++){
            if(i==front){
                continue;
            }
            if(edges[front][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
    delete [] visited;
    return false;
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

    int sv, ev;
    cin >> sv >> ev;
    
    //BFS(edges, n);

    if(HasPath(edges, n, sv, ev)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    for(int i=0 ; i<n ; i++){
        delete [] edges[i];
    }
    delete [] edges;
} 