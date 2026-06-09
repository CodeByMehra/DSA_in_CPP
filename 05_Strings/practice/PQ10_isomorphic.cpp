// Q: Given two strings s and t, determine if they are isomorphic. (Leetcode - 205)

// Two strings are isomorphic if: Every character in s maps to exactly one character in t.
// No two characters in s map to the same character in t. The order must remain the same.
// Example 1
// s = "egg"
// t = "add"

// Mapping:

// e → a
// g → d

// Result:

// true
// Example 2
// s = "foo"
// t = "bar"

// Mapping:
// false;

//Solution approach: we will create a special array of 150 size to store value of all possible values, after this, we will subtract each value of same index, if the character repeat and the value at that place is came as new calculated value, then it is isomorphic, else not

//base case: if length of both not equal, then not isomorphic 

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length() != t.length())
            return false;

        vector<int> v(150, 1000);            //initialized vector with 1000 because difference value can reach this

        for(int i = 0; i < s.length(); i++) {   // checking from the perspective of s

            int idx = (int)s[i];

            if(v[idx] == 1000)
                v[idx] = s[i] - t[i];

            else if(v[idx] != (s[i] - t[i]))
                return false;
        }

        // resetting the vector

        for(int i = 0; i < 150; i++)            
            v[i] = 1000;

        for(int i = 0; i < s.length(); i++) {      // checking from perspective of t

            int idx = (int)t[i];

            if(v[idx] == 1000)
                v[idx] = t[i] - s[i];

            else if(v[idx] != (t[i] - s[i]))
                return false;
        }

        return true;
    }
};