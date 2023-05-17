class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) { 
        string pre = ""; // create prefix string
        for (int i = 0; i < strs[0].size(); i++){ // loop through chars in array strings
            for (int s = 0; s < strs.size(); s++ ){ // loop through strings in array
                if (i == strs[s].length() or strs[s][i] != strs[0][i]) 
                  // if letter placement cannot fit in the string (ex: the e placement in racecar is bigger than the length of dog) or if the string char does not equal the first string char  
                    return pre; // return empty prefix
            }  
            pre += strs[0][i]; // add matching prefix char
        }
        return pre; // return prefix
    }
};

/* if you want to run in another platform
int main(){
    Solution solution;
    vector<string> strs = {"flower","flow","flight"};
    
    
    solution.longestCommonPrefix(strs); //use this just to run the program
                 //or 
    string prefix = solution.longestCommonPrefix(strs); // use this if you want to see the answer on command prompt
    cout << prefix; 
} */
