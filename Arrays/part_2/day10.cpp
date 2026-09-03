//?⭐⭐⭐⭐ 2 SUM (Optimal) ⭐⭐⭐⭐//?
//! Why this another approach? -> using hasmap
/*
Two Sum
   ↓
Brute Force
   ↓
2 loops
   ↓
O(n²)
   ↓
TLE
   ↓
"What am I repeatedly searching for?"
   ↓
I need target - current
   ↓
Can I store numbers I've already seen?
   ↓
HashMap
   ↓
O(n)
*/

//? Approach :-
// HashMap / Hashing → O(n) ⭐

// Suppose:

// nums = [2, 7, 11, 15]
// target = 9

// Brute force thinks:

// 2 + 7 = 9 ✅

// But imagine the array is huge.

// Instead, when you're standing at a number, ask:

// "What number do I need to complete the target?"

// For 2:

// target - current
// = 9 - 2
// = 7

// So you need 7.

// Now store numbers you've already seen.

// Think like this:
// current = 2
// need = 7

// Have I seen 7?
// NO

// Store 2

// Next:

// current = 7
// need = 2

// Have I seen 2?
// YES! 🎯

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int need = target - nums[i];

            if (mp.find(need) != mp.end()) {
                return {mp[need], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};