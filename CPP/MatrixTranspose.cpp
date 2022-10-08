//Transpose code:
#include <iostream>
using namespace std;


//This is effective code for transposing as it does not uses extra space and just swapping one of the triangle 
// with another half triangle and keeping the diagonal elements same
/*
* * * *
* * * *
* * * *
* * * *

one of the triangle means
*
* *
* * *
* * * *
and another means
* * * *
  * * *
    * *
      *
swap all except diagonals
*/

void effTranspose(int **arr, int m, int n)
{
    int temp;
    for(int i=1;i<m;i++){
        for(int j=0;j<i;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


//Naive uses extra space while transposing, it copies the elements into a temp matrix in transpose fashion
void naiveTranspose(int **arr, int m, int n)
{
    int temp[m][n];
    for (int i = 0; i < m; i++)
    {
        //copying rows into columns of temp
        for (int j = 0; j < n; j++)
            temp[i][j] = arr[j][i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //printing the temp matrix
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


int main()
{
    //No of test Cases
    cout<<"Enter the no. of test cases:\t";
    int t;
    cin >> t;
    while (t--)
    {
        // Rows and columns
        cout<<"Enter the rows and columns:\t";
        int n, m;
        cin >> m >> n;

        cout<<"Enter the array:\n";
        //array of pointers
        int *arr[m];
        for (int i = 0; i < m; i++)
        {
            arr[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        cout<<"Initial Matrix:\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout << endl;
        if(n!=m) cout<<"m and n should be equal, hence Transpose is not possible.\n";
        else
        {
            cout<<"Matrix After Transpose:\n";
            //Comment one of them while running code..
            // naiveTranspose(arr, m, n);
            effTranspose(arr,m,n);
        }
    }
}

//This code is contributed by Rajat Dhull

//Sample test case with input and output:
/*
Enter the no. of test cases:    2
Enter the rows and columns:     2 3
Enter the array:
1 2 3
3 4 5
Initial Matrix:
1 2 3 
3 4 5 

m and n should be equal, hence Transpose is not possible.
Enter the rows and columns:     3 3
Enter the array:
1 3 5
2 2 2
4 2 0
Initial Matrix:
1 3 5 
2 2 2 
4 2 0 

Matrix After Transpose:
1 2 4 
3 2 2 
5 2 0 
*/
