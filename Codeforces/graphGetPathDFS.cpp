//Get Path - DFS
#include<bits/stdc++.h>
using namespace std;

vector<int> getPathDFS(int** edges, int n, int sv, int ev, bool* visited){
    
    visited[sv] = true;

    //basecase
    if(sv==ev){
        vector<int> ans;
        ans.push_back(ev);
        return ans;
    }

    for(int i=0 ; i<n ; i++){
        if(edges[sv][i]==1 && !visited[i]){
            vector<int> x = getPathDFS(edges, n, i, ev, visited);
            if(!x.empty()){
            x.push_back(sv);
            //return x;
            }
            return x;
        }    
    }
    vector<int> y;
    return y;
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

    int sv, ev;//start and end vertex
    cin >> sv >> ev;

    bool* visited = new bool[n];//visited array
    for(int i=0 ; i<n ;i++){
        visited[i] = false;
    }

    //fxn call & print
    vector<int> ans = getPathDFS(edges, n, sv, ev, visited);
    for(int i=0 ; i<ans.size() ; i++){
        cout << ans[i] << " ";
    }

    //delete
    delete [] visited;
    for(int i=0 ; i<n ; i++){
        delete [] edges[i];
    }
    delete [] edges;
}
