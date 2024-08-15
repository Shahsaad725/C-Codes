#include <stdio.h>

int main() {
    int x = 0, i = 0, j = 0, k = 0, temp = 0;

    printf("\nEnter the number of integers to store in array: ");
    scanf("%d", &x);

    int array[x];

    printf("\nEnter the unsorted array: ");
    for (k = 0; k <= x; k++) 
	{
        scanf("%d", &array[k]);
    }

    for (i = 1; i < x; i++) {
        temp = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }

    printf("\nThe sorted array is: ");
    for (i = 0; i < x; i++) {
        printf("%d  ", array[i]);
    }

    return 0;
}
