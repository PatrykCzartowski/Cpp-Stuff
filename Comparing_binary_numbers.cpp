#include <bits/stdc++.h>

using namespace std;

int main() {

    string num1, num2;

    cout<<"Insert first number: ";
    cin>>num1;
    cout<<"Inrest second number: ";
    cin>>num2;

    if(num1.size() > num2.size())
        cout<<num1<<" is greather.";
    else 
        if(num1.size() < num2.size())
            cout<<num2<<" is greather.";
    else 
        for(int i=num1.size()-1; i>=0; i--) {
            if(num1[i] != num2[i]) {
                if(num1[i] == '1')
                    cout<<num1<<" is greather.";
                else
                    cout<<num2<<" is greather.";
            }
        }
    return 0;
}