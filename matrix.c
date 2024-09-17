// Straseen's Matrix Multiplication
// WAP to implement straseen's matrix of order 2*2,
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2];
    int p1, p2, p3, p4, p5, p6, p7;
    printf("Enter First Matrix");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Second Matrix");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("FIRST MATRIX:");
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0;  j< 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
    printf("SECOND MATRIX:");
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }
    p1=a[0][0]*(b[0][1]-b[1][1]);
    p2=(a[0][0]+a[0][1])*b[1][1];
    p3=(a[1][0]+a[1][1])*b[1][1];
    p4=a[1][1]*(b[1][0]-b[0][0]);
    p5=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
    p6=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
    p7=(a[0][0]-a[1][0])*(b[0][0]+b[0][1]);

    int c[2][2];
    c[0][0]=p5+p4-p2+p6;
    c[0][1]=p1+p2;
    c[1][0]=p3+p4;
    c[1][1]=p1+p5-p3-p7;
    printf("\n After *");
    for(int i=0;i<2;i++){
        printf("\n");
        for(int j=0;j<2;j++){
            printf("%d\t",c[i][j]);
        }
    }
    }
