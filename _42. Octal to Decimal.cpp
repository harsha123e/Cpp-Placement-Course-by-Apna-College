#include <iostream>

using namespace std;

int octalToDecimal(int n){
    int base=1,ans=0;
    while(n>0){
        int lastDigit=n%10;
        ans+= lastDigit*base;
        base*=8; // same as binary just changing base to 8 to increase in powers of 8
        n/=10;
    }
    return ans;
}

int main() {
    
    int n;
    cin>>n;
    cout<<octalToDecimal(n);

    return 0;
}
