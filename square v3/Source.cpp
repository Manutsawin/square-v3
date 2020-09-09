#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int num, size, loop1, loop2, loop3;
    scanf("%d", &num);
    scanf("%d", &size);
    for (loop1 = 0; loop1 < num; loop1++)
    {
        for (loop2 = 0; loop2 < size; loop2++)
        {
            for (loop3 = 0; loop3 < size; loop3++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n\n");
    }

    return 0;
}
