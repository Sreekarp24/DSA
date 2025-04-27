#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int cnt = 0;

    if (num <= 1)
        cout << num << " is Not a Prime";
    else {
        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                cnt++;
        }
        if (cnt > 2)
            cout << num << " is Not Prime";
        else 
            cout << num << " is Prime";
    }

    return 0;
}
