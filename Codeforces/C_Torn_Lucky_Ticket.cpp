#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <numeric>
using namespace std;

int main(){
        int N;cin>>N;
        vector<string> V(N); for(auto &x : V) cin>>x;
        long long ans=0;
        vector<vector<int>> A(6,vector<int>(46,0));  //A[i][j] = {length}{sum}
        for(int i=0;i<N;i++){
            int sum=0;
            for(char &x : V[i]){
                sum += ((int)x-'0');
            }

            A[V[i].size()][sum]++;
        }
        for(int i=0;i<N;i++){
            int M = V[i].size();
            vector<int> t;
            for(char c : V[i]){
                int p = c-'0';
                t.push_back(p);
            }
            if(M==1){
                ans += A[1][t[0]];
            }
            else if(M==2){
                ans += A[2][(t[0]+t[1])];
            }
            else if(M==3){
                ans += A[3][t[0]+t[1]+t[2]];
                if(t[0]+t[1]>=t[2]) ans += A[1][t[0]+t[1]-t[2]];
                if(t[1]+t[2]>=t[0]) ans += A[1][t[1]+t[2]-t[0]];
            }
            else if(M==4){
                ans += A[4][t[0]+t[1]+t[2]+t[3]];
                if(t[0]+t[1]+t[2]>=t[3]) ans += A[2][t[0]+t[1]+t[2]-t[3]];
                if(t[1]+t[2]+t[3]>=t[0]) ans += A[2][t[1]+t[2]+t[3]-t[0]];
            }
            else if(M==5){
                ans += A[5][t[0]+t[1]+t[2]+t[3]+t[4]];
                if(t[0]+t[1]+t[2]>=t[3]+t[4]) ans += A[1][t[0]+t[1]+t[2]-t[3]-t[4]];
                if(t[2]+t[3]+t[4]>=t[0]+t[1]) ans += A[1][t[2]+t[3]+t[4]-t[0]-t[1]];
                if(t[0]+t[1]+t[2]+t[3]>=t[4]) ans += A[3][t[0]+t[1]+t[2]+t[3]-t[4]];
                if(t[1]+t[2]+t[3]+t[4]>=t[0]) ans += A[3][t[1]+t[2]+t[3]+t[4]-t[0]];
            }
        }
        cout<< ans <<endl;
return 0;
}