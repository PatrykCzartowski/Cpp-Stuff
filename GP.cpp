#include <bits/stdc++.h>

using namespace std;

void GenPerm (int P[],int N,int pom=0) {
    if(pom == N) {
        for(int i=0; i<N; i++)
            cout<<P[i]<<" ";
        cout<<endl;
    }
    else {
        for(int i=pom; i<N; i++) {
            swap(P[i], P[pom]);
            GenPerm(P, N, pom+1);
            swap(P[i], P[pom]);
        }
    }
}

int main() {
    int N;
    cout<<"Podaj N: ";
    cin>>N;
    int P[N];
    for(int i=0; i<N; i++)
        P[i] = i+1;
    GenPerm(P, N);
    system("pause");
    return 0;
    
}