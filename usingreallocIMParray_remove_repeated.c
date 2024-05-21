#include <stdio.h>
#include <stdlib.h>


void array_print (int *arr,unsigned int size ) /* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
{
    unsigned int i ;
    for (i = 0; i<size; i++)
        printf("%d  ",arr[i]); /* you can write that arr[i] or this *(arr+i)*/

        printf("\n\n");
}

int* array_remove_repeted(int *arr,int size,int *newsize)
{
    int i=0,j,m=0;
    int counter = 0;
    int*array =(int*)malloc (size *sizeof(int));
    for (j=0; j<size; j++)
    {
        counter = 0;
        for (i=0; i<j; i++)
        {
            if (arr[j] == arr[i])
            {
                counter = 1;
                break;
            }
            else
                counter =0;

        }
        if (counter==0)
        {
            array[m] = arr[j];
            m++;
        }
    }
    *newsize = m;

    array = realloc(array,m*sizeof(int));

    return array;
}
int main()
{
    int ptr[] = {12,12,25,55,241,25,55,3,58,10,58,10,14,145,25};
    int size;

    array_print(ptr,15);

    int *arr = array_remove_repeted(ptr,15,&size);


    array_print(arr,size);


    return 0;
}
