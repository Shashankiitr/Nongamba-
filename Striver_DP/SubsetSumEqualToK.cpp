#include <bits/stdc++.h> 

bool f(int ind, int target, vector<int> &arr){
    //basecase
    if(target==0) return true;
    if(ind==0) return (arr[0]==target);

    //explore
    bool notInclude = f(ind-1, target, arr);
    bool include = false;
    if(target>=arr[ind]) include = f(ind-1, target-arr[ind], arr);

    return notInclude || include;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    return f(n-1, k, arr);
}