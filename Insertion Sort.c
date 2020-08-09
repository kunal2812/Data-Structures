#include<stdio.h>
int insertion(int arr[],int n)
{
    int temp;
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[10]={12,34,2,65,34,55,66,90,87,5};
    insertion(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}
