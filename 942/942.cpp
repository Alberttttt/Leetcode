class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> ans;
        int min=0;
        int max=S.length();
        for(int i=0;i<=S.length();i++){
            if(S[i]=='I'){
                ans.push_back(min);
                min++;
            }else{
                ans.push_back(max);
                max--;
            }
        }
        return ans;
    }
};