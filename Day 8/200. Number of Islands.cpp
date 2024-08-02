#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void dfs(int row,int col ,int n ,int m , vector<vector<char>>& grid,vector<vector<int>>&vis){
        vis[row][col] = 1;
        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        for(int i = 0 ; i < 4 ;i++){
            int nrow = row + dr[i];
            int ncol = col + dc[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && vis[nrow][ncol] == 0){
                dfs(nrow,ncol,n,m,grid,vis);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));

        int cnt = 0;
         for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    dfs(i,j,n,m,grid,vis);
                    cnt++;
                }
            }
        }

        return cnt;
    }
};