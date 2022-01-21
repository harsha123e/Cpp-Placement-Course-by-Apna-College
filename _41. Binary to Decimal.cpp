#include <iostream>

using namespace std;

int binaryToDecimal(int n){
    int base=1,ans=0; //base = 2^0 =1
    while(n>0){
        // lastDigit = 1 in 101 ...
        int lastDigit=n%10;
        // 1*2^0 + 0*2^1 + ...
        ans+= lastDigit*base;
        base*=2; //increasing 2^1, 2^2 ...
        n/=10;
    }
    return ans;
}

int main() {
    
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);

    return 0;
}
