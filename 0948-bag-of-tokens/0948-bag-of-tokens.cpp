class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0,maxi=0;
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int s=0,e=n-1;
        while(s<=e){
            if(power>=tokens[s]){
                power-=tokens[s];
                score++;
                maxi=score;
                s++;
            }
            else if(score>=1){
                power+=tokens[e];
                score--;
                e--;
            }
            else break;

        }
        maxi=max(maxi,score);

        return maxi;
    }
};