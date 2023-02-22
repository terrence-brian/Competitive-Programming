class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> pos; //declare a map to store position of values
        int maxl = 0; //declare longest number of non-repeating characters in the string
        for(int i=0, j=0; j < s.size(); j++){
            pos[s[j]]++;//position move up the string
            while(pos[s[j]] > 1) pos[s[i++]]--; //move down the string for second position
            maxl = max(maxl, j-i+1); //get value of length of longest unrepeating characters
        }
        return maxl;
    }
};
