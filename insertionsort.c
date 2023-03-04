#include <stdio.h>
#include <stdlib.h>

struct person
{
    int id;
    char *name;
    int age;
    int height;
    int weight;
};

void insertionSort(struct person b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j>=0 && b[j + 1].height < b[j].height)
        {
            struct person temp = b[j+1];
            b[j+1] = b[j];
            b[j] = temp;
            j--;
        }
    }
}

int main()
{
    struct person a[5];
    a[0].id = 1;
    (a[0].name) = "Sokka";
    a[0].age = 15;
    a[0].height = 150;
    a[0].weight = 45;
    a[1].id = 2;
    (a[1].name) = "Aang";
    a[1].age = 112;
    a[1].height = 137;
    a[1].weight = 35;
    a[2].id = 3;
    (a[2].name) = "Zuko";
    a[2].age = 16;
    a[2].height = 160;
    a[2].weight = 50;
    a[3].id = 4;
    (a[3].name) = "Katara";
    a[3].age = 14;
    a[3].height = 145;
    a[3].weight = 38;
    a[4].id = 5;
    (a[4].name) = "Toph";
    a[4].age = 12;
    a[4].height = 113;
    a[4].weight = 30;
    insertionSort(a, 5);
    for (int i = 0; i <= 5; i++)
    {
        printf("%d %s %d %d %d\n", a[i].id, a[i].name, a[i].age, a[i].height, a[i].weight);
    }
    return 0;
}