//Decimal to Octal
#include <bits/stdc++.h>
using namespace std;

long decimalToOctal(int n){
    long ans=0;
    int base=1;
    while(n>0){
        int remainder = n%8;
        ans+=remainder*base;
        n/=8;
        base*=10;
    }
    return ans;
}

int main() {
    
    int n;
    cin >> n;
    cout << decimalToOctal(n);

    return 0;
}
