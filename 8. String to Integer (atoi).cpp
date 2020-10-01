class Solution {
public:
    int myAtoi(string str) {
        int i=0, ans=0,val, sign=1;
        while(i<str.length() && str[i]==' ') i++;
        if(i<str.length() && (str[i]=='+' || str[i]=='-'))
            sign = str[i++]=='-' ? -1:1;
        
        for(;i<str.length();i++)
        {
            if(!isdigit(str[i])) break;
            val = str[i]-'0';
            if(ans>INT_MAX/10 || (ans==INT_MAX/10 && val>7))
                return sign==1 ? INT_MAX:INT_MIN;
            
            ans = ans*10 + val;
        }
        str.clear();
        ans*=sign;
        return ans;
    }
};