//! LEETCODE 136 -> Single Number
//! 26] Find unique element (all repeated twice except one) like [1, 2, 4, 2, 1] ->  ans is 4
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int>vec = {4, 1, 2, 1, 2};
//     int ans = 0;
//     for(int val: vec){
//         ans = ans ^ val;
//     }
//     cout<<ans;
//     return 0;
// }


//! 27]Merge two arrays
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr1[] = {1, 2, 3, 4};
//    int arr2[] = {5, 6, 7, 8};
//     int size1 = 4;
//     int size2 = 4;
//     int merged_array[size1+size2];
//     for(int i=0; i<size1; i++){
//         merged_array[i] = arr1[i];
//     }
//     for(int i=0; i<size2; i++){
//         merged_array[size1+1] = arr2[i];
//     }
//     for(int i=0; i<size1+size2; i++){
//         cout<< merged_array[i] << " ";
//     }
//     return 0;
// }

//FOR VECTORS
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      vector<int> vec1 = {1, 2, 3};
//     vector<int> vec2 = {4, 5, 6};
//     vector<int> merged_vec;
//     for(int val: vec1){
//         merged_vec.push_back(val);
//     }
//     for(int val: vec2){
//         merged_vec.push_back(val);
//     }
//     for(int val: merged_vec){
//         cout<<val<<" ";
//     }
//     return 0;
// }


//! 28]Find intersection of two arrays
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr1[] = {1, 2, 3, 4};
//     int arr2[] = {5, 2, 7, 4};
//     for(int i=0; i<4; i++){
//         for(int j=0; j<4; j++){
//             if(arr1[i] == arr2[j]){
//                 cout<<arr1[i]<<" ";
//             }
//         }
//     }
//     return 0;
// }



//solved move zeroes "leetcode #283"
//solved find number with even didgits "leetcode 289"


//Separate even and odd numbers
//* NOTE:-
// If data is getting lost:
// ✅ either
// use extra storage
// OR
// swap instead of overwrite

