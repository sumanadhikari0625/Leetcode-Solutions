class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh=0;
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh==0){
            return 0;
        }
        int ans=0;

        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int time=q.front().second;
            q.pop();
            int drow[]={-1,0,0,1};
            int dcol[]={0,-1,1,0};
            for(int i=0;i<4;i++){
                int trow=row+drow[i];
                int tcol=col+dcol[i];
                if(trow>=0 && trow<m && tcol>=0 && tcol<n && grid[trow][tcol]==1){
                    q.push({{trow,tcol},time+1});
                    grid[trow][tcol]=2;
                    ans=time+1;
                    fresh--;
                }

            }
        }
        if(fresh>0){
            return -1;
        }
        return ans;
    }
};