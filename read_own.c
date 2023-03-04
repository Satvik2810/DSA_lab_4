#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char line[1000];
    fp = fopen("read_own.c", "r");
    while (fgets(line, 1000, fp))
    {
        printf("%s", line);
    }
    printf("\n");
    fclose(fp);
}