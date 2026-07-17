class Solution {
public:

    string encode(vector<string>& strs) {
        string en ="";
        for(int i = 0;i<strs.size();i++){
            string cur = strs[i];
            for(int i = 0 ;i<cur.size();i++){
                cur[i]+=1;
            }
            en+=cur;
            en+=' ';
        }
        cout<<en<<endl;
        return en;
    }

    vector<string> decode(string strs) {
        vector<string> de ;
        string en= "";

        for(int i = 0 ;i<strs.size();i++){
            char cur = strs[i];
            if(cur == ' '){
                de.push_back(en);
                cout<<en<<" ";
                en ="";
                continue;
            }   
            cur -=(char)1;
            en+=cur;
        }

        return de;
    }
};
