#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){
    int iniS=0;
    for(int i=0; i<n; i++){
            
            //space
         for(int j=1; j<=n-i; j++){
                cout << "*";
        }
            //stars
        for(int j=1; j<=iniS; j++){
                cout << " ";
        }
        for(int j=1; j<=n-i; j++){
                cout << "*";
        }
            
        iniS +=2;
        cout << endl;
    }

    int iniS=0;
    for(int i=0; i<n; i++){
            
            //space
        for(int j=1; j<=i; j++){
                cout << "*";
        }
            //stars
        for(int j=1; j<=iniS; j++){
                cout << " ";
        }
        for(int j=1; j<=i; j++){
                cout << "*";
        }
            
        iniS -=2;
        cout << endl;
    }

    
}

int main(){
    int n;
    cin >> n;
    pattern1(n);
}