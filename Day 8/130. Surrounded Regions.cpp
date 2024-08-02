#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void f(int row,int col,vector<vector<int>>& nonconv,vector<vector<char>>&grid,int n ,int m){
        int delrow[] = {-1, 0, +1, 0}; 
	    int delcol[] = {0, +1, 0, -1}; 
        nonconv[row][col] = 1;
        for(int i = 0 ; i < 4 ; i++){
	             int nrow = row + delrow[i];
	             int ncol = col + delcol[i];
                 if(nrow >=0  && nrow < n && ncol >= 0 &&  ncol < m && grid[nrow][ncol] == 'O' &&  !nonconv[nrow][ncol])     {
                    f(nrow,ncol,nonconv,grid,n,m);
                 }
	         }
        
    }
public:
    void solve(vector<vector<char>>& grid) {
        int n =  grid.size();
	    int m = grid[0].size();
	    vector<vector<int>>nonconv(n,vector<int>(m,0));

	    for(int  i = 0 ; i < n;i++){
	        for(int j = 0 ; j < m ;j++){
	            if(grid[i][j] == 'O' && (i == 0 || i == n-1 || j == 0 || j == m-1)){
                    f(i,j,nonconv,grid,n,m);
	            }
	        }
	    }
	     
	    for(int  i = 0 ; i < n;i++){
	        for(int j = 0 ; j < m ;j++){
	            if(grid[i][j] == 'O' && nonconv[i][j] != 1){
                    grid[i][j] = 'X';
	            }
	        }
	    }
	    
    }
};