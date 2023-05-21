class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> numeral = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}}; // unordered map to store values 
        int test = 0; // result number 
        for (int i = 0; i < s.length(); i++){ // go through all chars in string
            if (s.length() >= i+1 && numeral[s[i]] >= numeral[s[i + 1]]){ // if length is bigger/ equal to i & the value for the string char is bigger than the next char 
                test += numeral[s[i]];    //add char value to answer
            }
            else {
                test -= numeral[s[i]]; // subtract char value to answer
            }
        }
        
        return test; //return the answer
    }
};

/*int main(){
    Solution solution;
    string s = ""; // s string or skip and just put string in function directly
    solution.romanToInt(s); // just to run the program
            // or
    cout << solution.romanToInt(s); // to print the solution
}*/
