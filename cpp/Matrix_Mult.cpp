#include <iostream>

using namespace std;

int main()
{
    const int sz = 2;

    int mat1[sz][sz] = 
    {
       {1, 2},
       {3, 4}
    };

    int mat2[sz][sz] = 
    {
        {5, 6},
        {7, 8}
    };

    int mat3[sz][sz];

    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            for (int k = 0; k < sz; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }  

    return 0;
}
