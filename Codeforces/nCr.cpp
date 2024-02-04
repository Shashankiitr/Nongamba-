#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

long long nCr(long long N, long long R){
    long long a = 1, b = 1;

    if(N - R < R) R = N - R;

    if(R != 0){
        while(R){
            a *= N;
            b *= R;

            long long m = gcd(a, b);

            a /= m;
            b /= m;

            N--;
            R--;
        }
    }
    else{
        return 1;
    }
    return a;
}

int main(){
 cout << nCr(5, 2) << endl;
}