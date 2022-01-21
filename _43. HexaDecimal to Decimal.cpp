//Hexadecimal to Decimal
#include <bits/stdc++.h>
using namespace std;

int hexaToDecimal(string n){
    int ans=0, size=n.size(), base=1;
    
    for(int i=size-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9')
            ans+= (int(n[i])-'0')*base;
        // +10 as A-A or 55-55 = 0 thus we add 10 to make A as 10
        else if(n[i]>='A' && n[i]<='F')
            ans+= (int(n[i])-'A'+10)*base;
        else if(n[i]>='a' && n[i]<='f')
            ans+= (int(n[i])-'a'+10)*base;
        base*=16;
    }
    return ans;
}

int main() {
    
    string n;
    cin >> n;
    cout << hexaToDecimal(n);

    return 0;
}
