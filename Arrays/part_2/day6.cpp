//! Q1) BruteForce frequency counting in an array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[6] = {2, 5, 2, 3, 5, 2};
//     for (int i = 0; i < 6; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < 6; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         cout << arr[i] << " -> " << count << endl;
//     }
//     return 0;
// }

// not prefered as O(n^2) complexity

//?Learning PAIRS (as map and unordered_map[as each row in the hashtable is a pair])
//-> pairs syntax
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // Syntax: pair<DataType1, DataType2> variableName;
//     pair<int, string> student;

//     // Putting data into the pair
//     student.first = 101;      // The Roll Number
//     student.second = "Rahul"; // The Name

//     // Reading data from the pair
//     cout << "Roll: " << student.first << endl;
//     cout << "Name: " << student.second << endl;

//     return 0;
// }

//??? Pairs WITH unordered_map(key, value)
//* unordered_map creates an hashtable in which each row is a pair can be accesed like(pair.first, pair.second)
// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main()
// {
//     unordered_map<int, int> myMap;
//     myMap[10] = 50;
//     myMap[20] = 60;

//     myMap[10] = 100;

//     // auto here it means automatic type matching. Instead of typing the long, ugly C++ data type for a map row (pair<const int, int>), you just type auto. C++ figures out the data type for you automatically.
//     for (auto row : myMap)
//     {
//         cout << row.first << " is paired with " << row.second << endl;
//     }
//     //* Reason :-
//     // Since hashmaps cannot have duplicate keys, it doesn't create a new row for 10. It simply finds the existing 10 and overwrites its old value (50) with the new value (100).

//     return 0;
// }

//! Q2) Find Frequency of all elemnent using hashmap(unordered_map)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {2, 5, 2, 3, 5, 2};

    unordered_map<int, int> freq;

    for (int x : arr)
    {
        freq[x]++;
    }

    for (auto p : freq)
    {
        cout << p.first << "->" << p.second << endl;
    }
    return 0;
}

//! NOTE:-
// for(int x : arr) {
//         freq[x]++;
//     }
// so using this i am adding the x(key) from arr
// with assigning a value using "++" or "+=1"  to that key in the freq named hashmap
// -for(int x : arr): This loop grabs each number x directly from your array, one by one.
// -freq[x]: This looks up that number x inside your hashmap as the Key. If it is not there yet, C++ automatically creates that key and assigns a starting value of 0.
// -++ or += 1: This immediately targets the Value connected to that key and bumps it up by 1.

//! NOTE
//?How do I access a value?
// Suppose:
// unordered_map<int, int> freq;
// and:
// 2 → 3
// 5 → 2
// 3 → 1
// You can do:
// cout << freq[2];
// Output:
// 3
// Because:
// freq[2]
// means:
// Give me the value associated with key 2.
//?Adding manually
// You can also write:
// freq[10] = 5;
// Now:
// 10 → 5
// Then:
// freq[10]++;
// becomes:
// 10 → 6
//?Very important: [] can CREATE a key
// This is something beginners often misunderstand.
// Suppose:
// unordered_map<int, int> mp;
// It's empty.
// Now:
// cout << mp[100];
// You might think:
// "I'm just checking whether 100 exists."
// No.
// mp[100] can create the key.
// Conceptually:
// 100 → 0
// So for simply checking existence, we have better tools.

//! NOTE
//? 🧠 Confusion breaker
// Remember these three:
// freq[x]
// → Give me the value associated with x.
// freq.find(x)
// → Find whether key x exists.
// freq.count(x)
// → Tell me whether key x exists (0 or 1 for an unordered_map).

//! NOTE
// Need counting? → map