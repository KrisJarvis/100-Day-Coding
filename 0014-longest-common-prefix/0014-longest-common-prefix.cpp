class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
string first = strs[0];
string last = strs[strs.size() - 1];
int idx = 0;
while(idx < first.length() && idx < last.length()){
if(first.at(idx) == last.at(idx)){
idx++;
}else{
break;
}
}
return first.substr(0, idx);
    }
};