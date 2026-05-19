//?  DAY 1   //?

//! 1]Print all elements of array
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i] << " ";
//     }
//     return 0;
// }

//! 2]Print array in reverse
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"The reversed array is :\n";
//     for(int i=n-1; i>=0; i--){
//         cout<<arr[i] << " ";
//     }
//     return 0;
// }

//! 3]Find sum of all elements
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int sum = 0;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     cout<<"The sum of all elements of array is : "<< sum;
//     return 0;
// }

//! 4]Find maximum element
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int max = INT_MIN;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     cout<<"The maximum element of array is : "<< max;
//     return 0;
// }

//! 5]Find minimum element
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int min = INT_MAX;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of  the array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i] < min){
//             min = arr[i];
//         }
//     }
//     cout<<"The minimum element of array is : "<< min;
//     return 0;
// }

//! 6]Count even and odd numbers
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int evenC = 0, oddC = 0;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i] % 2 == 0 ) evenC++;
//         else oddC++;
//     }
//     cout<<"There are " << evenC << " Even numbers in the array\n";
//     cout<<"There are " << oddC << " Odd numbers in the array";
//     return 0;
// }

//! 7]Search an element (Linear Search)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int X;
//    int arr[8] = {3, 54, 23, 55, 78, 45, 90, 32};    //* Indexing starts from 0
//     cout << "Enter X the element to be searched: ";
//     cin >> X;
//     for(int i=0; i<7; i++){
//         if(arr[i] == X){
//             cout << "The X = " << X << " is at " << i+1 << "th index";
//         }
//     }
//     return 0;
// }

//! 8]Count positive, negative, zero
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[10] = {-1, 3, 4, -2, 2, 0, 6, -90, 0, 77};
//     int pC = 0, nC = 0, zC = 0;
//     for(int i=0; i<10; i++){
//         if(arr[i] > 0) pC++;
//         else if (arr[i] < 0) nC++;
//         else zC++;
//     }
//     cout << "+ve count: "  << pC << endl;
//     cout << "-ve count: "  << nC << endl;
//     cout << "Zero count: "  << zC << endl;
//     return 0;
// }

//! 9]Copy one array into 
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr1[5] = {1,2, 3, 4, 5};
//     int arr2[5] = {6, 7, 8, 9, 10};
//     for(int i=0; i<5; i++){
//         arr1[i] = arr2[i];
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr2[i]<<" ";
//     }
// }


//! 10]Print elements at even indices and odd indices
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         if(i%2==0){
//             cout<<arr[i]<<" ";
//         }
//     }
// }

//// 12]Find average of array      "VERY EASY QUESTION"


//! 13]Find second largest element
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // int arr[5] = {1, 5, 3, 9, 2};
//     int arr[5] = {10, 2, 3, 4, 5};
//     // int arr[5] = {1, 2, 3, 4, 10};
//     // int arr[5] = {7, 7, 7, 7};
//     int max = INT_MIN;
//     int max2 = INT_MIN;
//     for (int i = 0; i < 5; i++)
//     {
//         if(arr[i] > max){
//             max2 = max;
//             max = arr[i];
//         }
//         else if(arr[i] > max2 && arr[i]!=max){
//             max2 = arr[i];
//         }
//     }
//     cout<<max2;
    
//     return 0;
// }

//// 14]Find second smallest element     "SAME AS SECOND LARGEST JUST CHANGE INEQUALITIES"


//! 15]Check if array is sorted (for ascending order)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[6] = {32, 43, 54, 65, 76, 90};
//     int sortFlag = 0;
//     for(int i=1; i<6; i++){
//         if(arr[i-1] > arr[i]){
//          sortFlag++;
//          break;
//         }
//     }
//     if(sortFlag > 0) cout<< "Not Sorted";
//     else cout<< "Sorted";
//     return 0;
// }

//// 16]Count frequency of a number and Count duplicates also        "VERY EASY QUESTION"
//* NOTE :- duplicate is when frequency > 1

//! 18]Find largest among first and last
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int max;
//     if(arr[0] > arr[4]) max = arr[0];
//     else max = arr[4];
//     cout<< "The maximum  among first and last element is : "<< max;
//     return 0;
// }

//// 19]Swap first and last element  "VERY EASY QUESTION"

//! 20]Reverse array using two pointers  [IMP]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 4;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0; i<5; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}