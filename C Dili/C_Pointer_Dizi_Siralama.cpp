#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int *arr[], int size)
{
    int max_index;
	int i,j;
	
    for (i = 0; i < size - 1; i++) {
        max_index = i;
        for (j = i + 1; j < size; j++) {
            if (*arr[j] > *arr[max_index]) {
                max_index = j;
            }
        }
        int *temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
}

int main() {
	int SIZE=20;	
    int arr[SIZE];
    int *ptr_arr[SIZE];
	int i;
	
    srand(time(NULL));
    printf("Rasgele atanmis sayilar: ");
    for (i=0;i<SIZE;i++) 
	{
        arr[i] = rand()%100;
        ptr_arr[i] = &arr[i];
        printf("%d ", arr[i]);
    }


	selection_sort(ptr_arr, SIZE);

	printf("\n");

    printf("Siralanmis Dizi: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *ptr_arr[i]);
    }

    return 0;
}
