#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char line[1000];
    int count = 0;
    char test[] = "-.: ?(),!'";
    char H[] = "H";
    char h[] = "h";
    char o[] = "o";
    char b[] = "b";
    char i[] = "i";
    char t[] = "t";
    fp = fopen("LOTR.txt", "r");
    while(fgets(line, 1000, fp))
    {
        char *p = strtok(line, test);
        while(p != NULL)
        {
            if(((*p == *h) || (*p == *H)) && *(p+1) == *o && *(p+2) == *b && *(p+3) == *b && *(p+4) == *i && *(p+5) == *t)  
            {
                printf("%s\n", p);
                count++;
            }
            p = strtok(NULL, test);
        }
    }
    printf("%d", count);
}