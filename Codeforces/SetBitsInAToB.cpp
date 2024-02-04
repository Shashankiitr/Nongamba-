#include <iostream>
using namespace std;

int countSetBits(int n){
    int count = 0;
    while(n){
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main(){
    int A = 10, B = 15;
    int ans = 0;
    for(int i = A ; i < B ; i++){
        if(i & 1){
            ans += countSetBits(i);
        }
        else{
            ans += 2*countSetBits(i) + 1;
            i++;
        }
    }
    cout << ans << endl;
}