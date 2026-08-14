//! 20]Reverse array using two pointers  [IMP]
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int start = 0;
//     int end = 4;
//     while(start < end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     for(int i=0; i<5; i++){
//         cout<< arr[i] << " ";
//     }
//     return 0;
// }

//! 21] Left rotate array by 1

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int temp = arr[0];
//     for(int i=1; i<5; i++){
//         arr[i-1] = arr[i];
//     }
//     arr[4] = temp;
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//! 22]Right rotate array by 1
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int temp = arr[4];
//     for(int i=3; i>=0; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[0] = temp;
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//! 23] Left rotate by K places
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n;
//     cout<< "Enter n: ";
//     cin>>n;
//     n = n % 5;
//     for(int k=0; k<n; k++){
//         int temp = arr[0];
//         for(int i=1; i<5; i++){
//             arr[i-1] = arr[i];
//         }
//         arr[4] = temp;
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//! 24]Right rotate by K places
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     n = n%5;
//     for(int k=0; k<n; k++){
//         int temp = arr[4];
//         for(int i=3; i>=0; i--){
//         arr[i+1] = arr[i];
//         }
//     arr[0] = temp;
//     }
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
//     return 0;
// }

//! LEETCODE 283
//! 25]Move all zeros to end
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[6] = {0, 1, 2, 0, 3, 0};
//     int k = 0;
//     for(int i=0; i<6; i++){
//         if(arr[i] != 0){
//             arr[k] = arr[i];
//             k++;
//         }
//         if(i!=k){
//             arr[i] = 0;
//         }
//     }
//     for(int i=0; i<6; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//! 25] Move all zeros to beginning
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[6] = {0, 1, 2, 0, 3, 0};
//     int k = 5;
//     for(int i=5; i>=0; i--){
//         if(arr[i]!=0){
//             arr[k] = arr[i];
//             k--;
//         }
//         if(i!=k){
//             arr[i] = 0;
//         }
//     }
//     for(int i=0; i<6; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//*NOTE:-
//* for such left things :- left -> right  traversing
//* for such right things :- right -> left traversing

