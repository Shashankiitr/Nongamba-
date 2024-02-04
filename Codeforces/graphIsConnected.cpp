//Is connected?

#include<bits/stdc++.h>
using namespace std;

int count(int** edges, int n, int sv, bool* visited){
     //cout << sv << endl;
     int count1 = 0;
     visited[sv] = true;
     for(int i = 0; i< n;i++){
        if(i==sv){
            continue; 
        } 
        if(edges[sv][i]==1){
            if(visited[i]){
                continue; // checking before printing that it's already printed or not
            }
            count1+=count(edges, n, i, visited);
        }
     }
     return count1 + 1;
}


bool isConnected(int** edges, int n, bool* visited){
    if(n==0){
        return true;
    }
    int ans = count(edges, n, 0, visited);
    if(ans==n){
        return true;
    }
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

    bool* visited = new bool[n];
    for(int i=0 ; i<n ; i++){
        visited[i] = false;
    }

    if(isConnected(edges, n, visited)){
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
