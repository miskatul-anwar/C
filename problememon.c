#include <stdio.h>
int main()
{
    int N;
    printf("Enter Number of Rows: ");
    scanf("%d", &N);
    int M[N][N], count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Value At Index[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
        printf("\n");
    }
    int Primary_Diagonal = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                Primary_Diagonal += M[i][j];
            }
        }
    }
    int Secondary_Diagonal = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ((i + j) == (N - 1))
            {
                Secondary_Diagonal += M[i][j];
            }
        }
    }
    if (Primary_Diagonal != Secondary_Diagonal)
    {
        printf("It is Not a Magic Square Matrix!\n");
        return 0;
    }
    int Row_Sum[N], Col_Sum[N];
    for (int i = 0; i < N; i++)
    {
        Row_Sum[i] = 0;
        for (int j = 0; j < N; j++)
        {
            Row_Sum[i] += M[i][j];
        }
        Col_Sum[i] = 0;
        for (int k = 0; k < N; k++)
        {
            Col_Sum[i] += M[k][i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (Row_Sum[i] != Col_Sum[j])
            {
                count = 1;
                break;
            }
        }
    }
    if (count == 1)
    {
        printf("It is Not a Magic Square Matrix!\n");
    }
    else
    {
        printf("It is a Magical Square Matrix!\n");
    }
    return 0;
}