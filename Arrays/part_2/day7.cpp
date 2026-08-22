//?⭐⭐⭐⭐ PREFIX AND SUFFIX ⭐⭐⭐⭐//?

//! NOTES:-
//! KEY FORMULA:- (remember!)
// prefix[i] = prefix[i-1] + arr[i];
// suffix[i] = suffix[i+1] + arr[i];

// Q1] print prefix sum for the given array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {2, 4, 1, 3, 5};
//     vector<int> prefix(arr.size());

//     prefix[0] = arr[0];

//     for (int i = 1; i < arr.size(); i++)
//     {
//         prefix[i] = prefix[i - 1] + arr[i];
//     }
//     //printing the prefix array
//     for (int i = 0; i < prefix.size(); i++)
//     {
//         cout << prefix[i] << " ";
//     }
// }

// Q2] print suffix sum for the given array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {2, 4, 1, 3, 5};
//     vector<int> suffix(arr.size());

//     int n = arr.size();
//     suffix[n - 1] = arr[n - 1];

//     for (int i = n - 2; i >= 0; i--)
//     {
//         suffix[i] = suffix[i + 1] + arr[i];
//     }
//     // printing the suffix array
//     for (int i = 0; i < suffix.size(); i++)
//     {
//         cout << suffix[i] << " ";
//     }
//     return 0;
// }

// Q3]   Prefix Maximum array for the given array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {4, 2, 7, 1, 6, 3};
//     int n = arr.size();
//     vector<int> prefix_max(n);
//     prefix_max[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         prefix_max[i] = max(prefix_max[i - 1], arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << prefix_max[i] << " ";
//     }
// }

// Q3]   Prefix Maximum array for the given array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {4, 2, 7, 1, 6, 3};
    int n = arr.size();
    vector<int> suffix_max(n);
    suffix_max[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix_max[i] = max(suffix_max[i + 1], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << suffix_max[i] << " ";
    }
    return 0;
}