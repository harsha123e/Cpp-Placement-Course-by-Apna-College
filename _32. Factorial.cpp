#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,fact=1;
    cin>>n;
    for(int i=1;i<=n;i++)
        fact*=i;
    cout<<fact;
    
    return 0;
}
