#include <stdio.h>

int main()
 {
    int array[20];
    int n, i;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &array[i]);
    }

    
    printf("Squares of the array elements:\n");
    for (i = 0; i < n; i++)
	{
        int square = array[i] * array[i];
        printf("%d ", square);
    }
    printf("\n");

    return 0;
}

