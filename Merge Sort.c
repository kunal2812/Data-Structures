#include<stdio.h>
int mergesort(int L[],int R[],int arr[],int mid, int s)
{
    int i=0,j=0,k=0;
    while(i<mid && j<s)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=R[j];
            k++;
            j++;
        }
    }
    while(i<mid)
    {
        arr[k]=L[i];
        k++;
        i++;
    }
    while(j<s)
    {
        arr[k]=R[j];
        k++;
        j++;
    }
}
void merge(int arr[],int n)
{
    if(n<2)
    {
        return;
    }
    int mid=n/2;
    int L[mid];
    int R[n-mid];
    int s=n-mid;
    int j,i,k;
    for(i=0;i<mid;i++)
    {
        L[i]=arr[i];
    }
    for(i=mid;i<n;i++)
    {
        R[i-mid]=arr[i];
    }
    merge(L,mid);
    merge(R,s);
    mergesort(L,R,arr,mid,s);
}

int main()
{
    int arr[100]={5,8,2,12,14,18,56,20,22,16};
    merge(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}
