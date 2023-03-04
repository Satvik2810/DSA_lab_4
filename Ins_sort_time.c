#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h> 
#include <string.h>

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
    struct timeval t1_1, t1_2, t2_1, t2_2, t3_1, t3_2, t4_1, t4_2;
    double time_taken_1, time_taken_2, time_taken_3, time_taken_4;
    gettimeofday(&t1_1, NULL);

    FILE *fp1;
    char temp[1000];
    // char test = ",";
    fp1 = fopen("dat1000.csv", "r");
    struct person p1[1000];
    while(fgets(temp, 1000, fp1))
    {
        char *p;
        p = strtok(temp, ",");
        int i = 0;
        p1[i].id = atoi(p);
        p = strtok(NULL, ",");
        p1[i].name = p;
        p = strtok(NULL, ",");
        p1[i].age = atoi(p);
        p = strtok(NULL, ",");
        p1[i].height = atoi(p);
        p = strtok(NULL, ",");
        p1[i].weight = atoi(p);
        i++;
    }
    insertionSort(p1, 1000);    
    
    gettimeofday(&t1_2, NULL);
    time_taken_1 = (t1_2.tv_sec - t1_1.tv_sec) * 1e6;
    time_taken_1 = (time_taken_1 + (t1_2.tv_usec - t1_1.tv_usec)) * 1e-6;
    printf("Task1 took %f seconds to execute\n", time_taken_1);
    //END TASK 1;

    // FILE *fp1;
    // fp1 = fopen("dat1000.csv", "r");
    // struct person p1[1000];
    // for(int i=0; i<1000; i++)
    // {
    //     fscanf(fp1, "%d,%[^,],%d,%d,%d", &p1[i].id, p1[i].name, &p1[i].age, &p1[i].height, &p1[i].weight);
    // }
    // insertionSort(p1, 1000);

    gettimeofday(&t2_1, NULL);
    FILE *fp2;
    fp2 = fopen("dat10000.csv", "r");
    struct person p2[10000];
    char temp2[1000];
    while(fgets(temp2, 1000, fp2))
    {
        char *ptr2;
        ptr2 = strtok(temp2, ",");
        int i = 0;
        p2[i].id = atoi(ptr2);
        ptr2 = strtok(NULL, ",");
        p2[i].name = ptr2;
        ptr2 = strtok(NULL, ",");
        p2[i].age = atoi(ptr2);
        ptr2 = strtok(NULL, ",");
        p2[i].height = atoi(ptr2);
        ptr2 = strtok(NULL, ",");
        p2[i].weight = atoi(ptr2);
        i++;
    }
    insertionSort(p2, 10000);
    gettimeofday(&t2_2, NULL);
    time_taken_2 = (t2_2.tv_sec - t2_1.tv_sec) * 1e6;
    time_taken_2 = (time_taken_2+ (t2_2.tv_usec - t2_1.tv_usec)) * 1e-6;
    printf("Task2 took %f seconds to execute\n", time_taken_2);
    //END TASK 2;


    gettimeofday(&t3_1, NULL);
    FILE *fp3;
    fp3 = fopen("dat100000.csv", "r");
    struct person p3[100000];
    char temp3[1000];
    while(fgets(temp3, 1000, fp3))
    {
        char *ptr2;
        ptr2 = strtok(temp3, ",");
        int i = 0;
        p3[i].id = atoi(ptr2);
        ptr2 = strtok(NULL, ",");
        p3[i].name = ptr2;
        ptr2 = strtok(NULL, ",");
        p3[i].age = atoi(ptr2);
        ptr2 = strtok(NULL, ",");
        p3[i].height = atoi(ptr2);
        ptr2 = strtok(NULL, ",");
        p3[i].weight = atoi(ptr2);
        i++;
    }
    insertionSort(p3, 100000);
    gettimeofday(&t3_2, NULL);
    time_taken_3 = (t3_2.tv_sec - t3_1.tv_sec) * 1e6;
    time_taken_3 = (time_taken_3+ (t3_2.tv_usec - t3_1.tv_usec)) * 1e-6;
    printf("Task3 took %f seconds to execute\n", time_taken_3);
    //END TASK 3;


    // gettimeofday(&t4_1, NULL);
    // FILE *fp4;
    // fp4 = fopen("dat1000000.csv", "r");
    // struct person p4[1000000];
    // char temp4[1000];
    // while(fgets(temp4, 1000, fp4))
    // {
    //     char *ptr2;
    //     ptr2 = strtok(temp4, ",");
    //     int i = 0;
    //     p4[i].id = atoi(ptr2);
    //     ptr2 = strtok(NULL, ",");
    //     p4[i].name = ptr2;
    //     ptr2 = strtok(NULL, ",");
    //     p4[i].age = atoi(ptr2);
    //     ptr2 = strtok(NULL, ",");
    //     p4[i].height = atoi(ptr2);
    //     ptr2 = strtok(NULL, ",");
    //     p4[i].weight = atoi(ptr2);
    //     i++;
    // }
    // insertionSort(p4, 1000000);
    // gettimeofday(&t4_2, NULL);
    // time_taken_4 = (t4_2.tv_sec - t4_1.tv_sec) * 1e6;
    // time_taken_4 = (time_taken_4+ (t4_2.tv_usec - t4_1.tv_usec)) * 1e-6;
    // printf("Task4 took %f seconds to execute\n", time_taken_4);
    return 0;
}