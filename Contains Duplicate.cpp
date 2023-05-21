class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> dup; // unordered map to store nums as keys value doesnt matter but will be stored as i
        
        for (int i = 0; i < nums.size() ; i++){ // loop through each number in nums
            if (dup.find(nums[i]) != dup.end()){ //if you can find a key in dup that matches a number in nums
                return true; // return true as it is a duplicate
            }
            else { // if the number is not in the table
                dup[nums[i]] = i; // add the number to the table and give it a value, value doesnt matter in this case
            }
        }
        return false; // return false if their is no prior judgement
    }
};

/*int main(){
    Solution solution;
    vector<int> nums = {1,2,3}; // create the vector 
    solution.containsDuplicate(nums); // just to run the program
         // or 
    cout << solution.containsDuplicate(nums); // to print out the answer
}*/
