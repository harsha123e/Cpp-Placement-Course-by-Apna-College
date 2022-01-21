//Decimal to HexaDecimal
#include <bits/stdc++.h>
using namespace std;

string decimalToHexaDecimal(int n){
    string ans="";
    while(n>0){
        int remainder = n%16;
        n/=16;
        char ch;
        if(remainder>=0 && remainder<=9)
            ch = char(remainder)+'0';
        else
            ch = remainder+'A'-10;
        ans.insert(0,1,ch);
    }
    return ans;
}

int main() {
    
    int n;
    cin >> n;
    cout << decimalToHexaDecimal(n);

    return 0;
}
