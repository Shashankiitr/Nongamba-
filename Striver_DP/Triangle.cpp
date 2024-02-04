class Solution {
public:

    int f(int i, int j, vector<vector<int>>& triangle){
        if(i==triangle.size()-1) return triangle[i][j];

        int down = triangle[i][j] + f(i+1, j, triangle);
        int diagonal = triangle[i][j] + f(i+1, j+1, triangle);

        return min(down, diagonal);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        return f(0, 0, triangle);
    }
};