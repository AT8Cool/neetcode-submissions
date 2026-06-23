class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        ans.insert(ans.end(),nums1.begin(),nums1.end());
        ans.insert(ans.end(),nums2.begin(),nums2.end());

        sort(ans.begin(),ans.end());

        int n = ans.size();
        double med;
        if(n&1){
                 med = ans[n/2];
     
        }else{
        
             med = (ans[n/2-1] + ans[n/2])/2.0;
        }

        return med;
    }
};
