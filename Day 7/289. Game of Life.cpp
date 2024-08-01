#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>temp = board;
        int n = board.size();
        int m = board[0].size();

        int nr[] = {-1,-1,0,1,1,1,0,-1};
        int nc[] = {0,1,1,1,0,-1,-1,-1};
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ;j++){

                if(temp[i][j] == 1){
                    int cnt = 0;
                    for(int k = 0 ; k < 8 ;k++){
                        int nrow = i + nr[k];
                        int ncol = j + nc[k];
                        if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && temp[nrow][ncol] == 1){
                            cnt++;
                        }
                    }

                    if(cnt == 2 || cnt== 3) board[i][j] = 1;
                    else board[i][j] = 0;
                }

                else{
                    int cnt = 0;
                    for(int k = 0 ; k < 8 ;k++){
                        int nrow = i + nr[k];
                        int ncol = j + nc[k];
                        if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && temp[nrow][ncol] == 1){
                            cnt++;
                        }
                    }

                    if(cnt== 3) board[i][j] = 1;
                    else board[i][j] = 0;
                }
            }
        }
    }
};