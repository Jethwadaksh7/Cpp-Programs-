//given a sorted array with duplicate elements… find the first and last occurrence of given number.
#include <iostream>
using namespace std;

int main() {
    int a;
    int min;
    int total=0;
    int max;
    int b;
    cout<<"Enter the number of elements in the array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched in the array: ";
    cin>>a;
    for(int i=0;i<n;i++) {
        if(arr[i]==a) {
            cout<<"element found at position " << i<<endl;
            total++;
        }
    }
    cout<<"Total number of repeated elements in the array is: "<<total<<endl;
    }