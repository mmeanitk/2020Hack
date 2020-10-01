class Solution {
public:
    int reverse(int x) {
        int val=0,y;
        while(x)
        {
            y = x%10;
            if(val>INT_MAX/10 || (val==INT_MAX/10 && y>7)) return 0;
            else if(val<INT_MIN/10 || (val==INT_MIN/10 && y<-8)) return 0;
            val = val*10 + y;
            x/=10;
        }
        return val;
    }
};