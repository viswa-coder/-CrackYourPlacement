#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
   bool dfs(int i ,int j,int k,vector<vector<char>>& board, string word,vector<vector<int>>&vis){

        int n = board.size();
        int m = board[0].size();

        if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] != word[k] || vis[i][j])
            return false;
        
        if(word.size()-1 == k) return true;
        
        vis[i][j] = 1;
        bool ans = (dfs(i + 1, j, k + 1, board, word,vis) ||
                    dfs(i - 1, j, k + 1, board, word,vis) ||
                    dfs(i, j + 1, k + 1, board, word,vis) ||
                    dfs(i, j - 1, k + 1, board, word,vis));
        
        vis[i][j] = 0;

        return ans;
   }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        int k = 0;
        for(int i = 0 ; i < n ;i++){
            for(int j = 0 ; j < m;j++){
                if(dfs(i,j,0,board,word,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};