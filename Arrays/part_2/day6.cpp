//?⭐⭐⭐⭐ FREQUENCY AND UNORDERED_MAP ⭐⭐⭐⭐//?

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
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {2, 5, 2, 3, 5, 2};

//     unordered_map<int, int> freq;

//     for (int x : arr)
//     {
//         freq[x]++;
//     }

//     for (auto p : freq)
//     {
//         cout << p.first << "->" << p.second << endl;
//     }
//     return 0;
// }

//! Q3) frequency of specific number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {2, 5, 2, 3, 5, 2};

//     unordered_map<int, int> freq;

//     for(int x : arr) freq[x]++;

//     int n;
//     cout<<"Enter element of which frequency is required: ";
//     cin>>n;

//     cout<< "The frequency of " << n << "->" << freq[n] << endl;

//     return 0;

// }

//! Q4) find the first element whose frequency is exactly 1.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {2, 5, 2, 3, 5, 2};

//     unordered_map<int, int> freq;

//     for (int x : arr)
//         freq[x]++;

//     for (auto p : freq)
//     {
//         if (p.second == 1)
//         {
//             cout << p.first;
//             break;
//         }
//     }

//     return 0;
// }

//?Better solution as hashmap is very random if mutiple numbers have frequency = 1 , then it can print any of them not the first one surely...
// our above code might give answer a '8' for this input {4, 7, 4, 8}
// so loopin through array to maintain the sequence
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {4, 7, 4, 8};

//     unordered_map<int, int> freq;

//     for (int x : arr)
//         freq[x]++;

//     for (int x : arr)
//     {
//         if (freq[x] == 1)
//         {
//             cout << x;
//             break;
//         }
//     }

//     return 0;
// }

//! Q5) find the frequency of largest element int the array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {2, 5, 7, 2, 3, 5, 7, 2, 7};

//     unordered_map<int, int> freq;

//     for (int x : arr)
//         freq[x]++;

//     // max_element returns an pointer not an actual number, so accessing it's actual value using '*'
//     // auto automatically detect the datatype so that we don't need to worry about the syntax!
//     auto it = max_element(arr.begin(), arr.end());

//     cout << *it << " occurs " << freq[*it] << " times";
//     return 0;
// }

//! Q6)Find the element with the highest frequency.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> freq;
    vector<int> arr = {2, 5, 7, 2, 3, 5, 7, 2, 7};
    for (int x : arr)
        freq[x]++;
    int max_freq = INT16_MIN;
    int moszt_frequent_element = 0;
    for (auto p : freq)
    {
        if (p.second > max_freq)
        {
            max_freq = p.second;
            moszt_frequent_element = p.first;
        }
    }
    cout << "element with the highest frequency: " << moszt_frequent_element;

    return 0;
}

//! Done leetcode 217✅
//! Done leetcode 242✅

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