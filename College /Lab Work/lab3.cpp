#include <iostream>
using namespace std;

int main() {
    int n;
    int s;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The elements in the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

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