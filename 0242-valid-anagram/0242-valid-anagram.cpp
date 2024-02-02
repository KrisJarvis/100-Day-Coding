class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26]={0};
        if(s.size()!=t.size())
            return false;

        for(int i=0; i<s.size(); i++){
            char ch=s[i];
            int index=s[i]-'a';
            freq[index]++;
        }

        for(int i=0; i<t.size(); i++){
            char ch=t[i];
            int index=t[i]-'a';
            freq[index]--;
        }

        for(int i=0; i<26; i++){
            if(freq[i]>0)
                return false;
        }
        return true;
    }
};