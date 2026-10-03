/* #include <bits/stdc++.h>
using namespace std;
void print(){
    cout << "Iam a print function" << endl;
}
int main(){
    cout << "Before print function call" << endl;
    print();
    cout << "After print function call" << endl;
    return 0;
}  */

#include <bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){
    return num1+num2;
}

int main(){
  int result = sum(4,6);
  cout << result << endl;
  return 0;
}
