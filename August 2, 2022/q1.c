#include <stdio.h>
int main()
{
    int max, min, n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array elements are..\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n");
    printf("\nSmallest element: %d", a[0]);
    printf("\nLargest element: %d", a[n - 1]);
}
