#include <bits/stdc++.h>
using namespace std;

int main(){
    /* example 1:

    int age;
    cin >> age;

    if(age >= 18){
        cout << "Adult" << endl;
    }
    else if(age < 18 && age >= 10){
        cout << "Teen" << endl;
    }
    else{
       cout << "Child";  */

    //Example 2:

    int marks;
    cin >> marks;

    if(marks >= 90){
        cout << "Grade A" << endl;
    }
    else if(marks >= 70){
        cout << "Grade B" << endl;
    }
    else if(marks >= 50){
        cout << "Grade C" << endl;
    }
    else if(marks >= 35){
        cout <<"Grade D" << endl;

    }
    else{
        cout << "FAIL";
    }
    return 0;
}