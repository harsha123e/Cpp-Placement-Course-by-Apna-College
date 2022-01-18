#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    int originalN=n;
    while(n>0){
        int lastDigit = n%10;
        sum += pow(lastDigit,3);
        n/=10;
    }
    
    if(sum==originalN)
        cout<<"Armstrong Number\n";
    else
        cout<<"Not armstrong number\n";
    
    return 0;
}
