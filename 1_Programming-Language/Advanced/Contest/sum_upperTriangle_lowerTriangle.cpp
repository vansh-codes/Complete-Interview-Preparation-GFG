// psuedo code:-
#include<bits/stdc++.h>
using namespace std;


vector<int> sumTriangles(const vector<vector<int>> &matrix, int n)
{

    // code here
    int sumUpperTriangle = 0;
    int sumLowerTriangle = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i <= j)
            {
                sumUpperTriangle += matrix[i][j];
            }

            if (i >= j)
            {
                sumLowerTriangle += matrix[1][j];
            }
        }
    }

    // cout<<sumUpperTriangle<<sumLowerTriangle<<endl;

    vector<int> result(2);
    result[0] = sumUpperTriangle;
    result[1] = sumLowerTriangle;

    return result;
}