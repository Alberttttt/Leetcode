class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> h;
        map<int, int>::iterator t;
        vector<int> ans(2);
        
        for(int i=0 ; i<nums.size();i++){
            int x = nums[i];
            t = h.find(target - x);            
            
            if(t == h.end()){
                h[x]=i;
            }else{
                ans[0]=t->second;
                ans[1]=i;
                return ans;
            }
        }
    }
};