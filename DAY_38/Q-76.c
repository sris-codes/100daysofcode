#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a[10][10];
    int n, i, j;
    bool symmetric = true;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetric
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric == true)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}