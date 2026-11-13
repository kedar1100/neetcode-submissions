class Solution {
public:
    bool isPalindrome(string s) {
        string sMod = "";
        for(char c:s){
            if(isalnum(c)){
                sMod+=tolower(c);
            }
        }
        string sRev = sMod;
        reverse(sRev.begin(),sRev.end());
        return (sMod == sRev);
    }
};
