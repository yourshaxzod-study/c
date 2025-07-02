#include <stdio.h>

int main()
{
    FILE *file;
    char buffer[100];

    file = fopen("data.txt", "r");
    if (file != NULL)
    {
        while (fgets(buffer, sizeof(buffer), file))
        {
            printf("%s", buffer);
        }
        fclose(file);
    }
    else
    {
        printf("Error opening file\n");
    }

    return 0;
}