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
//* NOTE :- duplicate is when frequency -> 1

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
