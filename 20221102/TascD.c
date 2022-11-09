#include <stdio.h>

int main()
{
    int val = 1;
    int MAX = 100;

    while(val <= MAX)
    {
        if(val % 15 == 0)
        {
            printf("FIZZBUZZ\n");
        }
        else if(val % 3 == 0)
        {
            printf("FIZZ\n");
        }
        else if(val % 5 == 0)
        {
            printf("BUZZ\n");
        }
        val++;
    }
    return 0;
}