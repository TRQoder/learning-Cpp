#include <stdio.h>
int main()
{
    int n=4;
    // printf("Enter no of rows :");
    // scanf("%d", &n);
    for (int i = 1; i <= n; i++)  //loop for row
    {
        int a =1;
        for (int j = 1; j<=n;j++){  //loop for column
        char d = (char)a+64;
            printf("%c ",d);
            a++;
        }
            printf("\n");
    }
    return 0;
}
