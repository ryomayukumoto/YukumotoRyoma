#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE  5   // スタックサイズ
#define SUCCESS     1   // 成功したとき
#define FAILURE     0   // 失敗したとき

typedef int data_t;   // スタックの中身のデータ型

data_t stack_data[STACK_SIZE];  // スタック
int stack_num;      // スタック内のデータの数

int main()
{
    int p;
    int element;
    stack_num = 0;
    Push(1);
    stackPrint();
    Push(3);
    stackPrint();
    Push(5);
    stackPrint();
    Push(7);
    stackPrint();
    Push(9);
    stackPrint();
    
    for(int i = 0; i < 2; i++)
    {
        Pop(&p);
        stackPrint();
    }
    return 0;
}

int Push(data_t push_data)
{
    if(stack_num < STACK_SIZE)
    {
        stack_data[stack_num] = push_data;
        stack_num++;
        return SUCCESS;
    }
    else
        return FAILURE;
}

int Pop(data_t *pop_data)
{
    if(stack_num > 0)
    {
        stack_num--;
        *pop_data = stack_data[stack_num];
        return SUCCESS;
    }
    else    
        return FAILURE; 
}

void stackPrint()
{
    printf("stack");
    for(int i = 0; i < stack_num; i++)
    {
        printf("%2d", stack_data[i]);
    }
    printf("\n");
}