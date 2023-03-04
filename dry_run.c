#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[] = "Hey there, my name is Satvik. Satvik is a student of Economics and Satvik likes to sing.";
    char b[] = " .,";
    char c[] = "Satvik";
    int count = 0;
    char *p = strtok(a, b);
    while(p != NULL)
    {
        if(*p == *c) count++;
        printf("%s\n", p);
        p = strtok(NULL, b);
    }
    printf("%d", count);
}