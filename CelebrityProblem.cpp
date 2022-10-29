#include <bits/stdc++.h> 
using namespace std; 
int celebrity_solution(int mat[][4], int n) {
    int in[n];
    int out[n];
    for(int i=0;i<n;i++) {
        in[i] = out[i] = 0;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(mat[i][j] == 1) {
                out[i]++;
                in[j]++;
            }
        }
    }
    for(int i=0;i<n;i++) {
        if(in[i] == n-1 && out[i] == 0) return i;
    }
    return -1;
}
int main() {
    int matrix[][4] = {{0,1,1,0},
                     {0,0,0,0},
                     {0,1,0,0},
                     {1,1,0,0}};
    int res = celebrity_solution(matrix,4);
    if(res == -1) {
        cout<< "There is no celebrity in the party";
    } else {
        cout<< res <<" is the celebrity in the party";
    }
}
