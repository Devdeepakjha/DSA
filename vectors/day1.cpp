#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Empty vector, size=0
    vector<int> v1;

    // Initialize with values
    // vector<int> v2 = {1, 2, 3, 4, 5}
    vector<int> v2{1, 2, 3, 4, 5};

    // Of paticular size
    vector<int> v3(5);
    // cout << v3.size();

    // create fixed size + same initial value
    vector<int> v4(5, 10);
    for (int x : v4)
        cout << x << " ";
    cout << endl;
    // capcity vs size
    vector<int> v5;

    v5.push_back(10);
    v5.push_back(20);
    v5.push_back(30);

    cout << v5.size() << endl;
    cout << v5.capacity();

    // pushback -> It adds an element at the end.
    // pop_back() -> removes the last element -> takes no argument
    // front() -> returns first element
    // back() -> returns last element
    // at(index) -> it accesses the elemnent at index
    // empty() -> Returns whether vector contains zero elements
    // clear() -> removes all elements(then also may not release the allocated memory)

    //? 2D Vectors
    // syntax
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //* Creating a matrix of zeroes
    // 3 rows, 4 columns, every element is 0
    vector<vector<int>> matrix(3, vector<int>(4, 0));

    // Jagged vectors
    // Unlike a normal rectangular array, each row can have a different size.
        // Example:
        // vector<vector<int>> v;
        // v.push_back({1, 2});
        // v.push_back({3, 4, 5});
        // v.push_back({6});
        // Result:
        // 1 2 
        // 3 4 5 
        // 6
    

    

    

return 0;
}

//! NOTE:-
//? Range-Based for Loop in C++
// for(data_type variable : container)
// {
//     // code
// }
//! ⚠️ Important C++ trap
// Compare:
// vector<int> a(5, 2);
// with:
// vector<int> b{5, 2};
// First:
// a = [2,2,2,2,2]
// Second:
// b = [5,2]
// This distinction becomes important later.
//! Three versions you MUST understand
//? Copy
// void f(vector<int> v)
// Meaning:
// Make a copy
//? Reference
// void f(vector<int>& v)
// Meaning:
// Use original vector and allow modification
//? Const reference
// void f(const vector<int>& v)
// Meaning:
// ->Use original vector
// ->Don't copy
// ->Don't modify
// For DSA:
// const vector<int>& is usually the best parameter when you're only reading a vector.

//! Important vector functions — DSA checklist
