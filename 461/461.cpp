class Solution {
public:
    int hammingDistance(int x, int y) {
         bitset<sizeof(x) * 8> s(x);
         bitset<sizeof(y) * 8> b(y);
        int count=0;
        for(int i=0;i<32;i++){
            if(s[i]!=b[i])count++;
        }
        return count;
    }
};