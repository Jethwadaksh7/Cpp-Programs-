/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int sear;
    bool flag = false;
    cout<<"enter the element to be searched: ";
    cin>>sear;
    for(int i=0;i<n;i++) {
        if(arr[i]==sear) {
            cout<<"element found at position "<<i<<endl;
            flag = true;
            break;
        }

    }
    if(flag==false) {
        cout<<"element not found"<<endl;
    }
}*/
/*#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << "Even numbers are "<<even << endl;
    cout << "Odd numbers are "<<odd << endl;
}*/
//WAP to find the maximum and minimum number from the given array
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
                min = arr[i];
        }
        if (arr[i] > max) {
                max = arr[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}*/
//WAP in a array to insert an element at specific position
/*#include <iostream>
using namespace std;

int main() {
    int arr[100]; // array with enough space
    int n;

    // Step 1: Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Step 2: Input the elements
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos, element;

    // Step 3: Input the position and the new element
    cout << "Enter the position to insert (1 to " << n+1 << "): ";
    cin >> pos;

    cout << "Enter the element to insert: ";
    cin >> element;
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 0;
    }
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    n++;
    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/
//Delete first element from an array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Shift all elements one position to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deleting the first element:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

