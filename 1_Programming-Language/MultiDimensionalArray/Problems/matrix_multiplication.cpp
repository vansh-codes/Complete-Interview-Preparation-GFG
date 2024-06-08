#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        int rowA = A.size();
        int colA = A[0].size();
        int rowB = B.size();
        int colB = B[0].size();
        // cout<<rowA<<" "<<rowB<<" "<<colA<<" "<<colB<<endl;
        
        vector<vector<int> > result(rowA, vector<int>(colB));
        // vector<vector<int> > result;
        if(colA != rowB){
            result.clear();
            return result;
        }
            
        for(int i=0;i<rowA;i++){
            for(int j=0;j<colB;j++){
                result[i][j]=0;
                for(int k=0;k<colA;k++){
                    result[i][j]  += (A[i][k] * B[k][j]);
                }
            }
        }
        return result;
    }

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int row, col;
        cin >> row >> col;
        vector<vector<int> > A(row);

        for (int i = 0; i < row; i++)
        {
            A[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> A[i][j];
            }
        }

        cin >> row >> col;
        vector<vector<int> > B(row);

        for (int i = 0; i < row; i++)
        {
            B[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> B[i][j];
            }
        }

        vector<vector<int> >result = multiplyMatrix(A, B);
        if (result.size()==0){
            cout<<" -1" ;
        }
        else{
            for (int i = 0; i < result.size(); i++)
            {
                for (int j = 0; j < result[0].size(); j++)
                {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}