#include <stdio.h>
#include <stdlib.h>

static int array[]={0};

void array_print (int *arr,unsigned int size ) /* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
{
    unsigned int i ;
    for (i = 0; i<size; i++)
        printf("%d  ",arr[i]); /* you can write that arr[i] or this *(arr+i)*/

}

void Merge_two_arrays(int *arr1,int size1,int *arr2,int size2)
{
    int i,j,temp,help;
    for (i=0;i<size1;i++)
    {
        temp =arr1[i];
        arr1[i] = array[i];
        array[i] = temp;
    }
    for (j=0;j<size2;j++)
    {
        help = arr2[j];
        arr2[j]=array[j+size1];
        array[j+size1] = help;

    }

}
int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    Merge_two_arrays(arr1,5,arr2,5);

    array_print(array,10);
	array_print(arr1,5);

    return 0;
}