class Solution {
public:
bool canplace(int row,int col,vector<string> &cu){
    for(int i=row-1;i>=0;i--)
    {
        if(cu[i][col]=='Q')
        return false;
    }
    for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
        if(cu[i][j]=='Q')
        return false;
    }
     for(int i=row-1,j=col+1;i>=0&&j<cu.size();i--,j++){
        if(cu[i][j]=='Q')
        return false;
    }
    return true;

}
void backtr(int row,vector<vector<string>> &res, vector<string> &cu)
{
    if(cu.size()==row)
    {
        res.push_back(cu);
        return ;
    }
    for(int i=0;i<cu.size();i++)
    {
        if(canplace(row,i,cu)){
            cu[row][i]='Q';
            backtr(row+1,res,cu);
            cu[row][i]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>> res;
         vector<string> cu(n,string(n,'.'));
         backtr(0,res,cu);
         return res;
    }
};