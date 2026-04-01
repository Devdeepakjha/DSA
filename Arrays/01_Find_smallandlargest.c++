#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<< "Enter no. of elements";
    cin>> n;
    int arr[n];
    cout<< "Enter the elements: "<< endl;
    for(int i=0; i<n; i++){
        cin>>arr[n];
    }

    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < max){
            max = arr[i];
        }
    }
    cout<<"The largest number in the array is: "<< max;
    return 0;
}