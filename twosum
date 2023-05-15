class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>twosum; // unordered for hash table or map
        vector<int> answer; // vector for answer
        for (int i = 0; i < nums.size(); i++ ){  // for loop to go through nums
             int dif = target - nums[i]; // 7, 2, -2, -6 // get difference for each num
            if (twosum.find(dif) != twosum.end()// if you can find dif without going past the end
             && twosum.find(dif)->second != i)  // make sure that we do not get the diff we are using
            {
                answer.push_back(twosum.find(dif)->second); // add the diff value to the end 
                answer.push_back(i);// add i value to vector answer at the end
                
            }
            
            twosum[nums[i]] = i; // add number and place to map 
            
        }
        return answer; // answer to the problem
    } 
   
};
