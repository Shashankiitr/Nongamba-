#include <bits/stdc++.h>
//#define int long long
using namespace std;

int maxm(int a, int b) {
    return (a > b) ? a : b;
}

int minm(int a, int b) {
    return (a < b) ? a : b;
}

void solveTest() {
        int numPairs, maxLength; cin >> numPairs >> maxLength;
        
        vector<pair<int, int>> pairs;
        int result = 0, numPairsCopy = numPairs;
        while(numPairs--) {
            int firstValue, secondValue; 
            cin >> firstValue >> secondValue; 
            pairs.push_back({secondValue, firstValue});
            if (firstValue <= maxLength) 
                result = 1;
        }
        numPairs = numPairsCopy; 
        sort(pairs.begin(), pairs.end());

        int i = 0;
        while (i < numPairs) {
            int j = i - 1;
            while (j >= 0) {
                int remaining = maxLength - (pairs[i].first - pairs[j].first), right = pairs[i].second + pairs[j].second;
                if (pairs[i].first - pairs[j].first + pairs[i].second + pairs[j].second <= maxLength) 
                    result = 2;
                j--;
            }
            i++;
        }

        for (int i = 1; i < numPairs; i++) {
            multiset<pair<int,int>> M, P;
            for(int j = 1; j < i; j++)  
                M.insert({pairs[j].second, j}); 
            int increment = 0, sum = 0;
            int j = 0;
            while (j < i) {
                int X = pairs[i].first - pairs[j].first + pairs[i].second;
                X += pairs[j].second;
                int remaining = maxLength - (X + sum);
                while (M.size() > 0 && remaining >= (*(M.begin())).first) {
                    remaining -= (*(M.begin())).first; increment++; sum += (*(M.begin())).first;
                    auto itr = M.begin(); M.erase(itr);
                }
                if (remaining >= 0) result = maxm(result, 2 + increment);
                auto itr = M.find({pairs[j + 1].second, j + 1});
                if (itr != M.end()) M.erase(itr);
                else {
                    increment--; sum -= (pairs[j + 1].second);
                }
                j++;
            }
        }
        cout << result << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int numTests;
    cin >> numTests;
    while(numTests--) {
        solveTest();
    }
    return 0;
}
