#include <iostream>

using namespace std;

int main() {
    
    int a,b;
    char op;
    
    cin>>a>>b>>op;
    
    switch(op){
        case '+': cout << a+b;
            break;
        case '-': cout << a-b;
            break;
        case '*': cout << a*b;
            break;
        case '/': cout << a/b;
            break;
        default : cout << "Wrong operator\n";
    }
        
    return 0;
}
