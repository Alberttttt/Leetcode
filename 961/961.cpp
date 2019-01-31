class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        vector<int> B;
        sort(A.begin(),A.end());
        for(int i=0;i<A.size();i++){
            B.push_back(A[i]);
        }
        vector<int>::iterator it;
        it = unique(B.begin(),B.end());
        B.resize(distance(B.begin(),it));
        for(int i=0;;i++){
            int k=count(A.begin(),A.end(),B[i]);
            if(k==A.size()/2)return B[i];
        }
        
    }
};