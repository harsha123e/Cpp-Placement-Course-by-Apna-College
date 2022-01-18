#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    if(n>10)
        cout<<"More than 10\n";
    else if(n<10)
        cout<<"Less than 10\n";
    else
        cout<<"Equal to 10\n";
    
    return 0;
}
