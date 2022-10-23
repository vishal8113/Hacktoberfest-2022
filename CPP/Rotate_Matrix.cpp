/*
Problem Statement:
Given a square matrix. Your task is to rotate the matrix 90* in
clockwise direction

Input:
1 2 3
4 5 6
7 8 9

Output:
7 4 1
8 5 2
9 6 3

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &mat){

    int n = mat.size();

    //Step 1: Transpose Matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    //Step 2: Reverse each row of matrix
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(), mat[i].end());
    }
}

void printMatrix(vector<vector<int>> &mat){
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
    solve(mat);
    printMatrix(mat);
    return 0;
}