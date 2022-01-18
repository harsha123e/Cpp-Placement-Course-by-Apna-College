#include <iostream>

using namespace std;

int main() {
    
    int row,col;
    cin>>row>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
3x5
i=1->*****
     *   *
i=3->*****
     j   j
     1   5
*/
