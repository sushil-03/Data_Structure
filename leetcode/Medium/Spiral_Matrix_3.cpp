#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
You start at the cell (rStart, cStart) of an rows x cols grid facing east. The northwest corner is at the first row and column in the grid, and the southeast corner is at the last row and column.

You will walk in a clockwise spiral shape to visit every position in this grid. Whenever you move outside the grid's boundary, we continue our walk outside the grid (but may return to the grid boundary later.). Eventually, we reach all rows * cols spaces of the grid.

Return an array of coordinates representing the positions of the grid in the order you visited them.

Input: rows = 5, cols = 6, rStart = 1, cStart = 4
Output: [[1,4],[1,5],[2,5],[2,4],[2,3],[1,3],[0,3],[0,4],[0,5],[3,5],[3,4],[3,3],[3,2],[2,2],[1,2],[0,2],[4,5],[4,4],[4,3],[4,2],[4,1],[3,1],[2,1],[1,1],[0,1],[4,0],[3,0],[2,0],[1,0],[0,0]]
*/

 vector<vector<int>> spiralMatrixIII(int rows, int cols, int i, int j) {
        vector<vector<int>>res;
        res.push_back({i,j});
        int t=(rows*cols)-1;
        int hi=1,wi=1;//height and width;
        bool flag=true;//for changing direction from (straight and down) to (back and up)
        while(t){
            int fb=hi;//sometime front and sometime back;
            int ud=wi;//sometime up and sometime down;
            while(fb--){
                if(flag){
                    j++;//moving forward;
                }else{
                    j--;//moving backward;
                }
                //checking if this exists
                if(i>=0 and i<rows and j>=0 and j<cols){
                    res.push_back({i,j});
                    t--;//decreasing count
                }
            }
            hi++;
            while(ud--){
                if(flag){
                    i++;//moving downward
                }else{
                    i--;//moving upward
                }
                if(i>=0 and i<rows and j>=0 and j<cols){
                    res.push_back({i,j});
                    t--;//decreasing count
                }
            }
            wi++;
            flag =!flag;
        }
        return res;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif



}