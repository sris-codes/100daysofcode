#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char source[50], destination[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    fp1 = fopen(source, "r");

    if (fp1 == NULL)
    {
        printf("Source file not found!");
        return 1;
    }

    fp2 = fopen(destination, "w");

    if (fp2 == NULL)
    {
        printf("Destination file cannot be created!");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully!");

    fclose(fp1);
    fclose(fp2);

    return 0;
}