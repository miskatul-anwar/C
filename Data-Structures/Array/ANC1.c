#define N 8

int main() 
{
    int arr[8] = {2, 4, 1, 6, 3, 8, 5, 7};
    int temp, gap, j;
    for (gap = N / 2; gap > 0; gap = gap / 2) 
    {
        for (int i = gap; i < N; i++) 
        {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j = j - gap) 
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int n = N; // Initialize n to the size of the array.
    gap = n / 2;
    while (gap > 0)
    {
        // Sort elements at each gap
        for (int i = gap; i <= n - 1; i++) // Perform insertion sort on elements within each gap
        {
            temp = arr[i];
            j = i;
            while (j >= gap && arr[j - gap] > temp) // Shift earlier gap-sorted elements
            {
                arr[j] = arr[j - gap];
                j = j - gap;
            }
            arr[j] = temp; // Place arr[j] in its correct position
        }
        gap = gap / 2;
    }

    return 0;
}
