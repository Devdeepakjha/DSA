//! Q1) BruteForce frequency counting in an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {2, 5, 2, 3, 5, 2};
    for (int i = 0; i < 6; i++)
    {
        int count = 0;
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        cout << arr[i] << " -> " << count << endl;
    }
    return 0;
}

// not prefered as O(n^2) complexity

//!Learning PAIRS (as map and unordered_map[as each row in the hashtable is a pair])
#include <iostream>
using namespace std;

int main() {
    // Syntax: pair<DataType1, DataType2> variableName;
    pair<int, string> student;

    // Putting data into the pair
    student.first = 101;           // The Roll Number
    student.second = "Rahul";      // The Name

    // Reading data from the pair
    cout << "Roll: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    return 0;
}

//! Connecting Pairs to the Hashmap Table 🗺️
