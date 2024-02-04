#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> heights(n);
    for(int i=0 ; i<n ; i++){
        cin >> heights[i];
    }
    int prev = 0;
    int prev2 = 0;
    for(int i=1 ; i<n ; i++){
        int left = prev+abs(heights[i] - heights[i-1]);
        int right = INT_MAX;
        if(i>1) right = prev2+abs(heights[i] - heights[i-2]);

        int curi = min(left, right);
        prev2 = prev;
        prev = curi;
    }
    cout << prev << endl;
}

//time complexity : O(n)
//space complexity : O(1) + O(1) (for array)