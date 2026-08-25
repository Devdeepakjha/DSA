//?⭐⭐⭐⭐ RANGE SUM ⭐⭐⭐⭐//?

// Q1]Brute Force
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    vector<int> arr = {2, 4, 1, 3, 5};
//    int sum = 0;
//    int L,R;
//    cout<<"Enter L and R: ";
//    cin>>L>>R;
//    for(int i = L; i<=R; i++){
//         sum +=arr[i];
//    }
//    cout<<sum;
//    return 0;
// }

// Q2] Range sum using prefix sum!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 2, 7, 3, 1};
    vector<int> prefix(arr.size());
    for (int i = 1; i < arr.size(); i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int L, R, range_sum;
    cout << "Enter L and R: ";
    cin >> L >> R;
    if (L == 0)
        range_sum = prefix[R];
    else
        range_sum = prefix[R] - prefix[L - 1];
    cout << range_sum;
}

//! NOTE1:-
// Range Sum(L, R) = sum of elements from index L through R

//! NOTE2:-
// Now imagine MANY queries
// This is where the problem changes.
// Suppose we have:
// arr = [2,4,1,3,5]
// and queries:
// (1,3)
// (0,2)
// (2,4)
// (1,4)
// For every query, we'd scan the requested range again.
// For example:
// Query 1 → 4+1+3
// Query 2 → 2+4+1
// Query 3 → 1+3+5
// Query 4 → 4+1+3+5
// We're repeatedly adding the same elements.
// This is exactly the kind of repeated work DSA asks us to eliminate.

//! NOTE3:-
// The general formula
// For:
// L = 1
// R = 3
// we used:
// prefix[R] - prefix[L-1]
// Therefore:
// sum(L,R) = prefix[R] - prefix[L-1] ⭐
// BUT there's one special case.
//* What if L = 0?
// Suppose:
// sum(0,3)
// We want:
// 2+4+1+3 = 10
// That's already:
// prefix[3]
// But the formula would say:
// prefix[3] - prefix[-1]
// There is no prefix[-1].
// So:
// ⭐
//? if(L == 0)
//?     sum = prefix[R];
//? else
// ?    sum = prefix[R] - prefix[L-1];
// This is the basic version.