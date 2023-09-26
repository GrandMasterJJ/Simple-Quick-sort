#include<stdio.h>

void Swap();
int Partition();
void Quick_sort();

int main()
{
    int array_1[] = {7,5,4,3,8,10,9,1,2};
    int array_1_size = sizeof(array_1) / sizeof(array_1[0]);

    Quick_sort(array_1, 0, array_1_size - 1);
/*
    for (int i = 0; i < array_1_size; i++)
    {
        printf("%d ", array_1[i]);
    }
*/
    return 0;
}

void Swap(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

int Partition(int array[], int low, int high)
{
    int pivot = array[low]; // select the first element as the pivot
    int left = low;
    int right = high;

    while (1)
    {
        if (left <= right && array[left] <= pivot)
        {
            left++;
        }

        if (array[right] >= pivot && right >= left)
        {
            right--;
        }

        if (right < left)
        {
            break;
        }
            
        
        Swap(&array[left], &array[right]);
    }

    Swap(&array[low], &array[right]);

    return right;
}

void Quick_sort(int array[], int low, int high)
{
    for (int i = 0; i < 9; i++)
        {
            printf("%d ", array[i]);
        }
    printf("\n");
    
    if (low < high)
    {
        

        int pivot_index = Partition(array, low, high);
        
        Quick_sort(array, low, pivot_index - 1);
        
        Quick_sort(array, pivot_index + 1, high);
    }
}