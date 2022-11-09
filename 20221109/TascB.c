#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
    int numMax = 100;
    int arr[numMax];
    int* p = &arr;
    srand(time(NULL));

    for(int i = 0; i < numMax; i++)
    {
        arr[i] = rand() % 100;;
    }

    sort(p,numMax);
}

void sort(int* arr, int size)
{
    
    for(int i = 0; i < size; i++)
    {
        for(int j = size; j > i; j--)
        {
            if(arr[j - 1] > arr[j])
            {
                int temp;
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}