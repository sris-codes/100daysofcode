#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL)
    {
        printf("Input file not found!");
        return 1;
    }

    if (fp2 == NULL)
    {
        printf("Output file cannot be created!");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Text converted successfully!");

    return 0;
}