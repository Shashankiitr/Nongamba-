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
int n, count1 = 0, count2 = 0, count3 = 0, count4 = 0; cin >> n;
while(n--){
    int x; cin >> x;
    if(x==1) count1++;
    if(x==2) count2++;
    if(x==3) count3++;
    if(x==4) count4++;
}
int taxi = (count2/2) + count4;
if(count2&1){
count2 = 1;
}
else{
    count2 = 0;
}
if(count3 >= count1){
    taxi +=(count3 + count2);
}
else{
    taxi += count3;
    count1 -= count3;
    if(count1 < 3){
        taxi += 1;
    }
    else{
        if(count2){
            taxi += 1;
            count1 -= 2;
        }
        taxi += (count1/4);

        if(count1%4){
            taxi += 1;
            //cout << taxi << endl;
        }
    }
}
cout << taxi ;
return 0;
}