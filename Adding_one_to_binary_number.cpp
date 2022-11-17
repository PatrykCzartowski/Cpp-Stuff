#include <bits/stdc++.h>

using namespace std;

int main() {

    string num;
    cout<<"Insert number: ";
    cin>>num;

    for(int i=num.size(); i>=0; i--) {
        if(num[i-1] == '0') {
            num[i-1] = '1';
            break;
        }
        else if(num[i-1] == '1') {
            num[i-1] = '0';
        }
        else {
            num = '1' + num;            
        }
    }
    cout<<num;
    return 0;
}