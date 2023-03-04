#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp1;
    FILE *fp2;
    char temp[1000];
    fp1 = fopen("test1.txt", "r");
    fp2 = fopen("test2.txt", "w");
    while(fgets(temp, 1000, fp1))
    {
        fputs(temp, fp2);
    }
    fclose(fp2);
    fopen("test1.txt", "w");
    fclose(fp1);
}