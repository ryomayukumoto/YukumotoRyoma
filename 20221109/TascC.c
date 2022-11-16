#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int comp(const void *c1, const void *c2);

int main()
{
    int target = 50;
    int numMax = 100;
    int arr[numMax];
    int* result;
    

    srand(time(NULL));

    for(int i = 0; i < numMax; i++)
    {
        arr[i] = rand() % 100;
        printf("%d\n", arr[i]);
    }

    qsort(arr, numMax,sizeof(int),comp);

    for(int i = 0; i < numMax; i++)
    {
        printf("%d\n", arr[i]);
    }

    result = (int*)bsearch(&target,arr,numMax,sizeof(int),comp);

    if(result == NULL)
        printf("%dは見つかりませんでした\n", target);
    else
        printf("%dが%d番目の要素としてみつかりました\n",target,result-arr);
    return 0;
}

int comp(const void *c1, const void *c2)
{
    int tmp1 = *(int*)c1;
    int tmp2 = *(int*)c2;

    if(tmp1 < tmp2)return -1;
    if(tmp1 == tmp2)return 0;
    if(tmp1 > tmp2)return 1;
}
