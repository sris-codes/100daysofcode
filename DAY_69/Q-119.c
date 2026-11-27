#include <stdio.h>

int main()
{
    int a[100], freq[100] = {0};
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (freq[a[i]] == 1)
        {
            printf("Repeated element = %d", a[i]);
            return 0;
        }

        freq[a[i]]++;
    }

    return 0;
}