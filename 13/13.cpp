class Solution {
public:
    int romanToInt(string x) {
        int l=x.length();
        int i = 0;
        int sum = 0;
        while(i<l){
            if(x[i]=='I'){
                if(x[i+1]=='V'){
                    sum+=4;
                    i=i+2;
                }else if(x[i+1]=='X'){
                    sum+=9;
                    i=i+2;
                }else{
                    sum+=1;
                    i++;
                } 
            }
            if(x[i]=='X'){
                if(x[i+1]=='L'){
                    sum+=40;
                    i=i+2;
                }else if(x[i+1]=='C'){
                    sum+=90;
                    i=i+2;
                }else{
                    sum+=10;
                    i++;
                } 
            }
            if(x[i]=='C'){
                if(x[i+1]=='D'){
                    sum+=400;
                    i=i+2;
                }else if(x[i+1]=='M'){
                    sum+=900;
                    i=i+2;
                }else{
                    sum+=100;
                    i++;
                } 
            }
            if(x[i]=='V'){
                sum+=5;
                i++;
            }
            if(x[i]=='L'){
                sum+=50;
                i++;
            }
            if(x[i]=='D'){
                sum+=500;
                i++;
            }
                
            if(x[i]=='M'){
                sum+=1000;
                i++;
            }
            
        }
        return sum;
    }
};