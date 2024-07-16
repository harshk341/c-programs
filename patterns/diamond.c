#include <stdio.h>

int main()
{

    int rows;

    printf("Enter the number of rows:\n");
    scanf("%d", &rows);

    for (int i = 0; i < 2 * rows - 1; i++)
    {
        int comp;
        if (i < rows)
        {
            comp = 2 * (rows - i) - 1;
        }
        else
        {
            comp = 2 * (i - rows + 1) + 1;
        }

        for (int j = 0; j < comp; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * rows - comp; k++)
        {
            printf("* ");
        }
        printf("\n\n");
    }

    return 0;
}