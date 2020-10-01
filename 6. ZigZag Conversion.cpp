class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        numRows = min(numRows, (int)s.length());
        if(numRows==0) return "";
        else if(numRows==1) return s;
        vector<string> temp(numRows);
        int j=0;
        bool goingDown = false;
        for(int i=0;i<s.length();i++)
        {
            temp[j]+=s[i];
            if(j==0 || j==numRows-1) goingDown = !goingDown;
            j+= goingDown ? 1:-1;
        }
        for(auto i:temp)
            ans+=(i);
        
        s.clear(), temp.clear();
        return ans;
    }
};