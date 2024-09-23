class Solution {
public:
    void helper(vector<vector<int>>&image,int color,vector<vector<int>>&vis,int x,int y,int col)
    {
        int m=image.size();
        int n=image[0].size();
        if(x<0 || x>=m || y<0 || y>=n || vis[x][y]!=0 || image[x][y]!=col)
        {
            return;
        }

        vis[x][y]=1;
        helper(image,color,vis,x-1,y,image[x][y]);
        helper(image,color,vis,x,y-1,image[x][y]);
        helper(image,color,vis,x+1,y,image[x][y]);
        helper(image,color,vis,x,y+1,image[x][y]);

        image[x][y]=color;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int col= image[sr][sc];
        vector<vector<int>>vis(n,vector<int>(m,0));
        helper(image,color,vis,sr,sc,col);
        return image;
    }
};