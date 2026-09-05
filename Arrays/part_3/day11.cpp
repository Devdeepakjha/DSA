//? 3.1 Hashing intuition
// The core idea:
// Use a data structure that lets us store and retrieve information quickly.

// Typical target:
// Search → O(1) average
// Insert → O(1) average
// Delete → O(1) average
// We'll mainly use:
// unordered_map
// unordered_set

//? 3.2 unordered_set
// This is the next thing you need.
// Map
// unordered_map<int, int> mp;
// Stores:
// KEY → VALUE
// Example:
// 5 → 3
// meaning 5 occurred 3 times.
// Set
// unordered_set<int> st;
// Stores only:
// VALUE
// Example:
// {5, 8, 10}
// It answers:
// "Have I seen this value?"

// Basic syntax
// unordered_set<int> st;

// st.insert(10);
// st.insert(20);
// st.insert(30);
// Check:
// if(st.count(20))
// {
//     cout << "Found";
// }
// Remove:
// st.erase(20);
// Size:
// st.size();
// That's enough for now.

//? 3.3 Set vs Map
// Burn this distinction into your brain:
// Need	Use
// Does value exist?	unordered_set
// How many times?	unordered_map
// Value → some information	unordered_map
// Just unique values	unordered_set
// Example:
// [2, 5, 2, 8, 5]
// Set:
// {2, 5, 8}
// Map:
// 2 → 2
// 5 → 2
// 8 → 1

//? 3.4 set vs unordered_set
// This distinction will matter in interviews.
// unordered_set
// unordered_set<int> st;
// Average:
// insert   O(1)
// search   O(1)
// delete   O(1)
// Order is not sorted.
// set
// set<int> st;
// Maintains sorted order.
// insert   O(log n)
// search   O(log n)
// delete   O(log n)
// Example:
// set<int> st = {5, 2, 8, 1};
// gives logically:
// 1 2 5 8
// So:
// unordered_set → fast, no sorted order
// set           → sorted, O(log n)

// //? 3.5 map vs unordered_map
// Same idea.
// unordered_map
//     ↓
// average O(1)
//     ↓
// no sorted key order
// while:
// map
//     ↓
// O(log n)
//     ↓
// keys sorted
// For now, don't go into tree/hash-table internals. We'll learn those when they actually become useful.

//? 3.6 Hashing patterns you should recognize
// This is the important part.
// When you see:
// "Have we seen this before?"
// Think:
// unordered_set
// "How many times does each value occur?"
// Think:
// unordered_map<int,int>
// "Find duplicates"
// Think:
// unordered_set
// "Find first unique"
// Think:
// unordered_map
// +
// second traversal
// You already did this. ✅
// "Find highest frequency"
// Think:
// unordered_map
// +
// max comparison
// Already done. ✅
// "Store first/last occurrence"
// Think:
// unordered_map<int,int>
// For example:
// value → first index
// or:
// value → last index
// This becomes useful later.

//! 3.7 Important LeetCode practice
// You've already done:
// - 217 — Contains Duplicate ✅
// - 242 — Valid Anagram ✅
// Now we should use a few more to cement hashing.
// Easy
// 349 — Intersection of Two Arrays✅
// Focus:
// set → unique elements
// 1 — Two Sum
// You've done the concept. This is important because it combines:
// hashmap
// +
// complement

// 387 ✅ — First Unique Character in a String
// Focus:
// frequency
// +
// original order


// Medium / thinking
// 49 — Group Anagrams
// This is a very good HashMap pattern.
// You'll learn:
// same signature
//       ↓
// same group
//       ↓
// HashMap

// And later:
// 128 — Longest Consecutive Sequence
// This is one of the most important unordered_set problems.
// It teaches:
// Don't blindly scan from every element. Use the set to identify where a sequence starts.