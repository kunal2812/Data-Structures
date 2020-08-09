#include<stdio.h>
int main()
{
    int arr[10]={23,72,48,33,32,64,76,89,45,7};
    int i,j,k,temp;
    selection(arr,10);
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}
int selection(int a[], int n)
{
    int i,j,loc,temp,min;
    for(i=0;i<n;i++)
    {
        min=999;
        for(j=i;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
}
