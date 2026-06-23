class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int k = 0; k <n; k++){
            if (k > 0 && nums[k] == nums[k - 1]) continue; // Skip duplicate k
            int i = k +1,j = n-1;

            while(i<j){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0){
                    ans.push_back({nums[i],nums[j],nums[k]});

                    while(i<j && nums[i] == nums[i+1]) i++;
                    while(i<j && nums[j] == nums[j-1]) j--;

                    i++;
                    j--;
                }else if(sum<0){
                    i++;
                }else{
                    j--;
                }
            }
          
        }

return ans;
    }
};
