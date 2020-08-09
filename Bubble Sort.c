#include<stdio.h>
int main()
{
    int arr[10]={12,39,22,65,34,55,660,90,87,35};
    bubble(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}
int bubble(int arr[],int n)
{
    int temp;
    for(int i=n;i>=0;i--)
    {
        for(int j=0;j<i;j++)
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
