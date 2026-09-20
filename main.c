#include <stdio.h>

int mergeComparisons = 0;
int quickComparisons = 0;
int partitionCount = 0;

/* Function to print an array */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* =========================
   MERGE SORT
   ========================= */

void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;

    int temp[right - left + 1];

    while (i <= mid && j <= right)
    {
        mergeComparisons++;

        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int left, int right, int n)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid, n);
        mergeSort(arr, mid + 1, right, n);

        merge(arr, left, mid, right);

        printf("After merging [%d..%d]: ", left, right);
        printArray(arr, n);
    }
}

/* =========================
   QUICK SORT
   ========================= */

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];

    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        quickComparisons++;

        if (arr[j] < pivot)
        {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    partitionCount++;

    printf("Partition %d: Pivot = %d, Array = ",
           partitionCount, pivot);

    printArray(arr, 8);

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* =========================
   MAIN FUNCTION
   ========================= */

int main()
{
    int data1[] =
    {
        324, 125, 456, 218,
        102, 389, 275, 147
    };

    int data2[] =
    {
        324, 125, 456, 218,
        102, 389, 275, 147
    };

    int n = 8;

    /* MERGE SORT */

    printf("====================================\n");
    printf("           MERGE SORT\n");
    printf("====================================\n");

    printf("Original Array: ");
    printArray(data1, n);

    mergeSort(data1, 0, n - 1, n);

    printf("Final Sorted Array: ");
    printArray(data1, n);

    printf("Merge Sort Comparisons: %d\n",
           mergeComparisons);


    /* QUICK SORT */

    printf("\n====================================\n");
    printf("           QUICK SORT\n");
    printf("====================================\n");

    printf("Original Array: ");
    printArray(data2, n);

    quickSort(data2, 0, n - 1);

    printf("Final Sorted Array: ");
    printArray(data2, n);

    printf("Quick Sort Partitions: %d\n",
           partitionCount);

    printf("Quick Sort Comparisons: %d\n",
           quickComparisons);

    return 0;
}