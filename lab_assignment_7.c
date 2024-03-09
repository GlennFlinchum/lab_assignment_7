#include <stdio.h>

void printArray(int arr[], int size);

void bubbleSort(int arr[], int n)
{
    printf("\nUsing Bubble sort\n\n");

    int i, j,temp;
    int freqArray[] = {};

    for (i = 0; i < n-1; i++)
    {

        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                freqArray[j]++;
                freqArray[j+1]++;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Number of Iterations: %d\n", i);

    //printing freqArray
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;

    printf("\nUsing Selection Sort\n");
 
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    printf("Number of Iterations: %d\n", i);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main () {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    int size = 9;

    printf("Array 1: \n");
    bubbleSort(array1, size);
    selectionSort(array1, size);

    printf("\nArray 2: \n");
    bubbleSort(array2, size);
    selectionSort(array1, size);
    return 0;

}