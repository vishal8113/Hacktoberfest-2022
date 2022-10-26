//The following code is for finding largest square area in a given matrix
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solveSO(vector<vector<int>> &mat,int &maxi){

  int row=mat.size();
  int col=mat[0].size();

  vector<int> curr(col+1,0);
  vector<int> next(col+1,0);
  
  
 for(int i=row-1;i>=0;i--){
   for(int j=col-1;j>=0;j--){
     int right=curr[j+1];
     int diagonal=next[j+1];
      int down=next[j];

   if(mat[i][j]==1){
     curr[j]=1+min(right,min(diagonal,down));
     maxi=max(maxi,curr[j]);
   }
   else{
     curr[j]=0;
   }
  }
   next=curr;
 }
return next[0]; 
}

int maxSquare(int n,int m,vector<vector<int>> mat){
  int maxi=0;
  return solveSO(mat,maxi);
  return maxi;
}

int main() {

  vector<vector<int>> mat={{1,0,1,0,0},{1,0,1,1,1},{1,1,1,1,1},{1,0,0,0,0}};
  int n=4;
  int m=5;
  cout<<maxSquare(n,m,mat)<<endl;
  return 0;
}
