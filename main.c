#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[]={10,20,30,40,50};
    int i;
    int size = 5;
    int pos = 3;
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;

        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    return 0;
}
