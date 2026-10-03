#include <bits/stdc++.h>
using namespace std;

int main(){
    int num[5];
    for(int i = 0; i <= 4; i++){
        cin >> num[i];
        cout << num[i] << endl;
    }
    //last element = size - 1
    // first element = 0
    cout << num[5 - 1];
    
    return 0;
}