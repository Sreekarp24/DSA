65
#include<iostream>
using namespace std;
 
int main(){
    int marks;
    cin >> marks;
    if(marks < 20){
        cout << "F";
    }
    else if(marks >=40){
        cout << "E";
    }
    else if(marks >=60){
        cout << "D";
    }
    else if(marks >=80){
        cout << "C";
    }
    else if(marks = 100){
        cout << "A";
    }
       return 0;
}