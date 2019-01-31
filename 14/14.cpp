class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(!strs.size())return "";
        char* same=(char*)malloc(sizeof(char)*(strs[0].size()+1));
        for(int i=0 ;i<strs[0].size();i++){
            same[i]=strs[0][i];
        }
        same[strs[0].size()]=0;
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(same[j]&&strs[i][j]&&same[j]==strs[i][j])j++;
            //if(j==0)return "";
           /* for(;j<=same.length();j++){
                same[j]=0;
            }*/
            same[j]=0;
        }
        return string(same);
    }
};