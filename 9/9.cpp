class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;        
        if(x<10)return true;
        int i = 1;
        while(i*10<=x){
            i*=10;
            if(i == 1000000000)break;
        }
        
        while(i>=10){
            int h = x/i;
            int t = x%10;
            if(h!=t)return false;
            x%=i;
            i/=10;
            if(i==0)break;
            x/=10;
            i/=10;
            if(i==0)break;                    
        }

        return true;
    }
};