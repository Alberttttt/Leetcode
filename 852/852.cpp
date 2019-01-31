class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        vector<int> B;
        for(int i=0;i<A.size();i++){
            B.push_back(A[i]);
        }
        sort(B.begin(),B.end());
        int max = B[B.size()-1];
        for(int i=0;;i++){
            if(A[i]==max)return i;
        }
    }
};