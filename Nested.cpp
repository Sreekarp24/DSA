    #include<iostream>
    using namespace std;

    int main(){
        int age;
        cin >> age;
        if (age < 18){
            cout << "Not Eligible for Job";
        }
        else if (age <= 57){
            cout << "Eligible for Job";
        if (age >=55) {
            cout << "Retirement Soon";
        }
    }
    else {
        cout << "Retirement Age";
    }
    return 0;
    }