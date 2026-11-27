#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(i == 0)
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    printf("Sentence Case: %s", str);

    return 0;
}