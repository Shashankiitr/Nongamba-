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
    int n; 
    cin >> n; // Fixed the error here
    map<string, int> m;
    for(int i = 0 ; i < n ; i ++){
        string s;
        cin >>s;
        m[s]++;
    }
    map<string, int>::iterator it1, it2;
    it1 = m.begin();
    it2 = m.end();
    it2--;
    if(it1->second > it2->second){
        cout << it1->first << endl;
    }
    else{
        cout << it2->first << endl;
    }
    return 0;
}