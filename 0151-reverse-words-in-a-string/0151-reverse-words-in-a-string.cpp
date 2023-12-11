class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        istringstream iss (s);
        string res;
        string tmp;
        while(iss>>tmp){
            reverse(tmp.begin(), tmp.end());
            res+=(' '+tmp);
        }
        if (res.size()>0){
            res = res.substr(1);
        }
        return res;
    }
};