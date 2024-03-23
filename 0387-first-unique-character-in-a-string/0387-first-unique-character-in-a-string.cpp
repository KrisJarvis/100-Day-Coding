class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            map[ch]++;
        }
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(map[ch] == 1) return i;
        }
        return -1;
    }
};