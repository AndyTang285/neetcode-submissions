class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    
        vector<pair<int, int>> nums_pair_list; 

        for (int i = 0; i < nums.size(); i++) {
            nums_pair_list.push_back({nums[i], i});
        }

        sort(nums_pair_list.begin(), nums_pair_list.end()); 
        
        int left = 0;
        int right = nums_pair_list.size() - 1; 
    
        while(left < right) {
            int sum = nums_pair_list[left].first + nums_pair_list[right].first;

            if (sum == target) {
                int index1 = nums_pair_list[left].second;
                int index2 = nums_pair_list[right].second;

                return {min(index1, index2), max(index1, index2)};
            }

            else if (sum < target) left++;
            else right--;
        }

        return {};
    }
};
