//?⭐⭐⭐⭐ SUBARRAYS ⭐⭐⭐⭐//?
//* Topics :
/*
SUBARRAYS
   ↓
SUBARRAY ENUMERATION
   ↓
SUBARRAY SUM — brute force
   ↓
SUBARRAY SUM — prefix sum
   ↓
MAXIMUM SUBARRAY SUM — brute force
   ↓
KADANE'S ALGORITHM — O(n) 🔥
   ↓
practice + LeetCode
   ↓
PREFIX SUM + HASHMAP

*/

//! 1] Bruteforce subarray giving O(n³) complexity
// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to print all subarrays of a given array
// void printAllSubarrays(const vector<int>& arr) {
//     int n = arr.size();

//     // Loop 1: Pick the starting point
//     for (int i = 0; i < n; i++) {

//         // Loop 2: Pick the ending point
//         for (int j = i; j < n; j++) {

//             //* har ek i to j ke liye!   here K IS JUST FOR PRINTING THAT EACH i TO j SUBARRAY THING...
//             // Loop 3: Print elements from starting point 'i' to ending point 'j'
//             for (int k = i; k <= j; k++) {
//                 cout << arr[k] << " ";
//             }

//             // New line after printing one complete subarray
//             cout << endl;
//         }
//         // Extra spacing for visual clarity between different starting elements
//         cout << endl;
//     }
// }
// int main() {
//     vector<int> arr = {1, 2, 3};

//     cout << "All possible subarrays are:\n" << endl;
//     printAllSubarrays(arr);

//     return 0;
// }

//! Subarray sum
//? M-1 (Bruteforce!) stupid way -> O(n³)
// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to print all subarrays of a given array
// int printSumOfSubarrays(const vector<int> &arr)
// {
//     int n = arr.size();
//     int grandTotal = 0;
//     for (int start = 0; start < n; start++)
//     {
//         for (int end = start; end < n; end++)
//         {
//             int sum = 0;

//             for (int i = start; i <= end; i++)
//             {
//                 sum += arr[i];
//             }
//             grandTotal += sum;
//             cout << "Subarray sum: " << sum << endl; // printing sum for each subarray(without that particular subarray)
//         }
//     }
//     return grandTotal;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3};

//     cout << "The sum of subarrays are:\n"
//          << endl;
//     printSumOfSubarrays(arr);

//     return 0;
// }
//? M-2 more good way, using the prefix sum concept, as the starting is fixed -> O(n²)
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> arr = {1, 2, 3};
//     int n = arr.size();
//     int grandTotal = 0; // The single variable to track the total sum

//     // Using your exact logic with 'i' as start and 'j' as end
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;

//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             grandTotal += sum; // Accumulating each sum into grandTotal

//             cout << sum << endl; // sum of each subarray
//         }
//     }

//     // Printing the final grand total at the very end
//     cout << "\nGrand total: " << grandTotal << endl;

//     return 0;
// }


//! Maximum Subarray sum (Bruteforce)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    int max_sum = INT32_MIN; 

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if(sum > max_sum){
                max_sum = sum;
            }
        }
    }

    // Printing the final grand total at the very end
    cout << "\nmaximum Subarray sum is : " << max_sum << endl;

    return 0;
}

//!leetcode 53 -> with bruteforce (big oh of n square) and kadane's algorithm (big oh of n)