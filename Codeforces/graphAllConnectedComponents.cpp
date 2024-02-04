//Code : All connected components DFS
#include<bits/stdc++.h>
using namespace std;

void AllConnectedComponentsHelper(int** edges, int n, int sv, bool* visited, vector<int>& input){
    visited[sv] = true;
    input.push_back(sv);
     for(int i = 0; i< n;i++){
        if(i==sv){
            continue; 
        } 
        if(edges[sv][i]==1 && !visited[i]){
            AllConnectedComponentsHelper(edges, n, i, visited, input);
        }
     }
}

vector<vector<int>> AllConnectedComponents(int** edges, int n, bool* visited){
    vector<vector<int>> output;
    for(int i=0 ; i<n ; i++){
        if(!visited[i]){
            vector<int> input;
            AllConnectedComponentsHelper(edges, n, i, visited, input);
            output.push_back(input);
        }
        
    }
    return output;
}

// void AllConnectedComponentsHelper(int** edges, int n, int sv, bool* visited, vector<int> input){
//     visited[sv] = true;
//     input.push_back(sv);
//      for(int i = 0; i< n;i++){
//         if(i==sv){
//             continue; 
//         } 
//         if(edges[sv][i]==1 && !visited[i]){
//             AllConnectedComponentsHelper(edges, n, i, visited, input);
//         }
//      }
// }


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

    //fxn call & print
    vector<vector<int>> ans = AllConnectedComponents(edges, n,visited);
    for(int i=0 ; i<ans.size() ; i++){
        vector<int> input = ans[i];
        sort(input.begin(), input.end());
        for(int j=0 ; j<input.size() ; j++){
            cout << input[j] << " ";
        }
        cout << endl;
    }


    //delete
    delete [] visited;
    for(int i=0 ; i<n ; i++){
        delete [] edges[i];
    }
    delete [] edges;
}
