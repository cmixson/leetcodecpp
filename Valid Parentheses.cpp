class Solution {
public:
    bool isValid(string s) {
         unordered_map<char, char> pair = {{')','('},{']','['},{'}','{'}}; // create hashmap to check for matching pairs
        stack<char> check; // create a stack to add opening brackets and boot them if you find a matching close bracket
        for(int i = 0; i < s.length();i++){ // loop through the string
            if(pair.find(s[i]) != pair.end()){ // if there is a closing bracket
                if(check.empty() == false && check.top() == pair[s[i]]){ // if the stack is not empty and the top of the stack matches value of the closed bracket we are checking 
                check.pop(); // remove the last opening bracket entered in the stack 
                }
                else{ // if the stack is not empty or the bracket does not match the top opening bracket
                    return false; // answer is false
                } 
            }
            else{ // if it is an opening bracket
                check.push(s[i]); // add opening bracket to top of stack
            }
            
        }
        return check.empty();  // check condition of stack for answer
    }
};

/*int main(){ // to run outside of leetcode
    Solution solution;
    string s = "]";
    solution.isValid(s); // use this just to run the program
           //or
    cout << solution.isValid(s); // to see an answer on command prompt

}*/
