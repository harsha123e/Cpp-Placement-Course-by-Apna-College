//Pascal Triangle

#include <iostream>

using namespace std;

int fact(int n){
    return (n==1||n==0)?1:n*fact(n-1);
}

int main() {
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
