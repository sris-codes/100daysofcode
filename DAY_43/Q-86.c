#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    // Compare characters
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}