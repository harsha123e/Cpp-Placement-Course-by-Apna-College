#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int i;
    for(i=2;i<n/2;i++){
        if(n%i==0){
            cout << "Prime number\n";
            break;
        }
    }
    if(i==n/2){
        cout<<"Prime number";
    }
        
    return 0;
}
