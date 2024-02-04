//Get path - BFS

#include <bits/stdc++.h>
using namespace std;

vector<int> getPathBFS(int** edges, int n, int sv, int ev, bool* visited){
    queue<int> q; // queue for storing the vertex to print
    unordered_map<int, int> map;
    q.push(sv);
    visited[sv]=true; 
    while(!q.empty()){
        int front = q.front(); 
        q.pop();
        //cout << front << " ";
        for(int i=0 ; i<n ; i++){
            if(i==front){
                continue;
            }
            if(edges[front][i]==1 && !visited[i]){
                q.push(i);
                map[i]=front;
                visited[i]=true;
                if(i==ev){
                    vector<int> ans;
                    ans.push_back(i);
                    while(map[i]!=sv){
                        int input = map[i];
                        ans.push_back(input);
                        i=input;
                    }
                    ans.push_back(sv);
                    return ans;
                }
            }
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
    vector<int> ans = getPathBFS(edges, n, sv, ev, visited);
    for(int i=0 ; i<ans.size() ; i++){
        cout << ans[i] << " ";
    }

    for(int i=0 ; i<n ; i++){
        delete [] edges[i];
    }
    delete [] edges;
} 