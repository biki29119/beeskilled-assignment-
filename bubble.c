#include<stdio.h>

void Bubblesort(int arr[],int n) {
for (int i = 0; i < n-1; i++)
{
    int flag = 0;
    for (int j = 0; j < n-1-i; j++)
    {
        if (arr[j]>arr[j+1])
        {
           int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;
            flag = 1;
        }
    }
    if (flag == 0)
    {
         break;
    }
    
}
}
void printarray(int arr[],int size){
for (int i = 0; i < size; i++)
{
    printf("%d " ,arr[i]);
}
printf("\n");
}

int main(){
    int arr[] = {2,4,3,6,5,8,7};
    int n = sizeof (arr)/sizeof(arr[0]);

    printf("The unsorted array is:");
    printarray(arr,n);

    Bubblesort(arr,n);

    printf("The sorted array is:");
    printarray(arr,n);
    
    return 0;
}