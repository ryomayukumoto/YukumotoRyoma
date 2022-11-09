#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[10];
    int val = 0;
    int MAX = 10;

    while(val < MAX)
    {
        int num = rand() % 10;
        array[val] = num;
        printf("%d\n",array[val]);
        val++;
    }
    return 0;

}