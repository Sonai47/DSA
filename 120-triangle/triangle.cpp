class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = 1;i<triangle.size();i++){
            for(int j = 0;j <= i;j++){
                if(j == 0){
                    triangle[i][j] += triangle[i-1][j];
                } else if(j == i){
                    triangle[i][j] += triangle[i-1][j-1];
                } else {
                    int one = triangle[i][j] + triangle[i-1][j-1];
                    int two = triangle[i][j] + triangle[i-1][j];
                    triangle[i][j] = min(one,two);
                }
            }
        }
        int minPath = INT_MAX;
        for(int i = 0;i<triangle.size();i++){
            minPath = min(triangle[triangle.size()-1][i],minPath);
        }
        return minPath;
    }
};