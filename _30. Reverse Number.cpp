#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,reverse=0;
    cin>>n;
    
    while(n>0){
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n/=10;
    }
    
    cout<<reverse;
    
    return 0;
}
