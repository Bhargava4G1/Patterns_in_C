#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i; j < n; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
