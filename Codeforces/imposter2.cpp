#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> A = {1, 1, 2, 3, 2, 5, 3, 5, 100, 90};
    int XOR1 = 0;
    for(auto &a : A){
        XOR1 ^= a;
    }

    int setBit = 0;
    int a = XOR1;
    while(a){
        if(a & 1){
            break;
        }
        setBit++;
        a = a >> 1;
    }

    int XOR2 = 0;

    for(auto &a : A){
        if(a & (1 << setBit))
            XOR2 ^= a;
    }

    int c = XOR2;
    int b = XOR2 ^ XOR1;

    cout << c << " " << b;
}