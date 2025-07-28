#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number of elements in the array: ";
    cin >> a;

    int arr[a];
    cout << "Enter elements in the array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    // ✅ Now start the bubble sort after all input is done
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The elements in the array are: ";
    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}