class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count=0, temp;
        string num_str = to_string(num);
        string window;
        for(int i = 0; i<num_str.length()-k+1; i++){
            window=num_str.substr(i, k);
            temp = stoi(window);
            if(temp == 0) continue;
            if(num%temp == 0) count++;
        }
        return count;
    }
};