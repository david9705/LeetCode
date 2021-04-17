#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
給你一個n，接下來有n個整數，對他們排序使得
(1) 偶數在奇數前面
(2) 偶數遞減排序、奇數遞增排序
然後輸出這個數列

*/

int cmp(void *a, void *b)  //Increase
{
    return *(int *)a > *(int *)b;
}

int cmp_less(void *a, void *b) //Decrease
{
    return *(int *)a < *(int *)b;
}




int main(void)
{
    int a[10] = {2, 13, 546, 1, 44, 7, 59, 23, 32, 21, 4};

    int *odd = malloc(sizeof(int) * 10);
    int *even = malloc(sizeof(int) * 10);
    int odd_index = 0, even_index = 0;


    int i = 0;
    for(i = 0 ; i < 10 ; i ++)
    {
        if(a[i] % 2 == 0)
        {
            even[even_index] = a[i];
            even_index++;
        }
        else
        {
            odd[odd_index] = a[i];
            odd_index++;
        }
    }

    qsort(odd, odd_index, sizeof(int), cmp) ;
    qsort(even, even_index, sizeof(int), cmp_less) ;


    for(i = 0 ; i < 10 ; i ++)
    {
        if(i < even_index)
            a[i] = even[i];
        else
            a[i] = odd[i - even_index];
    }

    for(i = 0 ; i < 10 ; i ++)
    {
        printf("%d \n", a[i]);
    }




}