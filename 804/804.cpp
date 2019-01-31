class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mor{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            string tmp="";
            for(int j=0;j<words[i].size();j++){
                tmp+=mor[(int)(words[i][j]-97)];
            }
            ans.push_back(tmp);
        }
        sort(ans.begin(),ans.end());
        vector<string>::iterator it;
        it=unique(ans.begin(), ans.end());
        ans.resize( std::distance(ans.begin(),it) );
        return ans.size();
    }
};