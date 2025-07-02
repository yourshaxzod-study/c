#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("data.txt", "w");
    if (file != NULL)
    {
        fprintf(file, "Hello, File!\n");
        fprintf(file, "Line 2\n");
        fclose(file);
        printf("File written successfully\n");
    }

    file = fopen("data.txt", "a");
    if (file != NULL)
    {
        fprintf(file, "Appended line\n");
        fclose(file);
        printf("Data appended successfully\n");
    }

    return 0;
}