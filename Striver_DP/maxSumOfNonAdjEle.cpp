#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &input){
    if(n==0) return input[0];
    if(n<0) return 0;

    int pick = input[n] + f(n-2, input);
    int notPick = 0 + f(n-1, input);

    return max(pick, notPick);
}

int main(){
    int n;
    cin >> n;
    vector<int> input(n);
    for(int i=0 ; i<n ; i++){
        cin >> input[i];
    }
    cout << f(n-1, input) << endl;
}

//time complexity : O(2^n)
//space complexity : O(n)