#include <stdio.h>

int main()
{

    int rows;

    printf("Enter the number of rows:\n");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf("  ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}