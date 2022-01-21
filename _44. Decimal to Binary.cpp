//Decimal to Binary
#include <bits/stdc++.h>
using namespace std;

long decimalToBinary(int n){
    long ans=0;
    int base=1;
    while(n>0){
        int remainder = n%2;
        ans+=remainder*base;
        n/=2;
        base*=10;
    }
    return ans;
}

int main() {
    
    int n;
    cin >> n;
    cout << decimalToBinary(n);

    return 0;
}
