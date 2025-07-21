#include <iostream>
using namespace std;

int main() {

    cout << endl;
    cout << "eneter element to be searched: ";
    int searched;
    cin >> searched;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == searched) {
            found = true;
            s=i;
        }

    }
    if (found == true) {
        cout <<"element found at position " << s << endl;
    }
    else
        cout << "element not found." << endl;
    return 0;
}