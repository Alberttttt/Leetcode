class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            //if(i<10)ans.push_back(i);
            int k=i;
            while(1){
                int tmp=k%10;
                if(tmp==0)break;
                if(i%tmp!=0)break;
                if(k/10>0)k=k/10;
                else {
                    ans.push_back(i);
                    break;
                }
                
            }
        }
        return ans;
    }
};