#include <bits/stdc++.h>

using namespace std;

int main() {
    int kd=1, kg, n, j;

    cout<<"Insert number: ";
    cin>>n;
    kg=n;
    for(int i=0; i<n; i++) {
        if(kg-kd <= 1) {
            cout<<"There is no root of "<<n<<".";
            break;
        }
        else {
            j=(kg+kd)/2;
            if(j*j == n) {
                cout<<"A root of "<<n<<" equals "<<j<<".";
                break;
            }
            else 
                if(j*j > n) 
                    kg = j;
            else
                kd=j;
        }
    }

    return 0;
}