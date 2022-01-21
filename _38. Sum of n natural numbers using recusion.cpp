//Sum of n natural numbers using recursion function
#include <iostream>

using namespace std;

int sum(int n){
    if(n<=1) return n;
    return n+sum(n-1);
}

int main() {
    
    int n;
    cin>>n;
    
    cout<<"Sum of "<<n << " natural numbers is " << sum(n);

    return 0;
}
