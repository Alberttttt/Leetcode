class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int len=J.length();
        int count=0;
        for(int i=0;i<len;i++){
            for(int k=0;k<S.length();k++){
                if(J[i]&&S[k]&&J[i]==S[k]){
                    count++;
                }
            }
        }
        return count;
    }
};