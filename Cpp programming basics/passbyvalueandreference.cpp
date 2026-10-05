#include <bits/stdc++.h>
using namespace std;
void passbyvalueandrefernce(int &x){
    x = x + 10;
}
int main(){
  int num = 5;
  passbyvalueandrefernce(num);
  cout << num;
  return 0;
}