class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) { 
        string pre = ""; // create prefix string
        for (int i = 0; i < size(strs[0]); i++){ // loop through chars in array strings
            for (int s = 0; s < size(strs); s++ ){ // loop through strings in array
                if (i == strs[s].length() or strs[s][i] != strs[0][i]) 
                  // if letter placement cannot fit in the string (ex: the e placement in racecar is bigger than the length of dog) or if the string char does not equal the first string char  
                    return pre; // return empty prefix
            }  
            pre += strs[0][i]; // add matching prefix char
        }
        return pre; // return prefix
    }
};
