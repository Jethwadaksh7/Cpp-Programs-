#include <iostream>
using namespace std;

int main() {
    cout << "Please enter the starting number of stars :" << endl;
    int a;
    cin >> a;
    while (a>0) {
        for (int i = a; i>0; i--) {
            for (int j = 0; j < a; j++) {
                cout<<a;
                a--;
            }
            cout << endl;
        }
    }

}