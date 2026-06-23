class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int n = numbers.size();
        int j = n-1;
        vector<int> res;

        while(i<=j){
            if(numbers[i]+numbers[j] == target){
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }else if(numbers[i]+numbers[j]<target){
                i++;
            }else{
                j--;
            }
        }
    }
};
