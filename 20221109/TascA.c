#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int numMax = 10;
    int val = 0;
    int arr[numMax];
    int target = 5;
    
    

    while(val < numMax)
    {
        arr[val] = val;
        val++;
    }
    int* p = &arr;
    

    shuffle(p,numMax);
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    search(p,numMax, target);
    return 0;
}

int randomIndex()
{
    srand(time(NULL));
    int num = rand() % 10;
    return num;
}

void shuffle(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        int index = randomIndex();
        int tmp = arr[i];
        arr[i] = arr[index];
        arr[index] = tmp;
    }
    
}

void search(int* arr,int size,int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            printf("%d\n", i);
        }
    }
}