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
}
