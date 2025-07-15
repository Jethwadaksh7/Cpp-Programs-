#include <iostream>
using namespace std;

 int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position where you want to change: ";
    int pos;
    cin>>pos;
    cout<<"Enter the number ";
    int num;
    cin>>num;
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    cout<<"The new array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}