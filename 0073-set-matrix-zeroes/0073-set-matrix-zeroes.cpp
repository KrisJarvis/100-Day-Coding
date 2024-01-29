class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<int>v1;
        vector<int>v2;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    v1.push_back(i);
                    v2.push_back(j);
                }
            }
        }

        for(auto it1 : v1){
            for(int i=0;i<m;i++){
                matrix[it1][i]=0;
            }
        }
        for(auto it2 : v2){
            for(int i=0;i<n;i++){
                matrix[i][it2]=0;
            }
        }
    }
};