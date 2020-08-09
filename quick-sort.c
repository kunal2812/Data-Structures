#include<stdio.h>
int main()
{
    int arr[10]={23,72,48,33,32,64,76,89,45,67};
    int i,j,k,temp;
    quicksort(arr,0,9);
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}
int partition(int arr[],int start,int end)
{
    int pivot=arr[end];
    int index=start;
    int i,temp;
    for(i=start;i<end;i++)
    {
        if(arr[i]<pivot)
        {
            temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
            index++;
        }

    }
    arr[end]=arr[index];
    arr[index]=pivot;
    return index;
}
void quicksort(int arr[],int start,int end)
{
    int index;
    if(start<end)
    {
        index=partition(arr,start,end);
        quicksort(arr,start,index-1);
        quicksort(arr,index+1,end);
    }

}

