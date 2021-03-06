#include<stdio.h>
#include<conio.h>

int binarysearch(int arr[],int si,int ei,int k)
{
    int mid = 0;
    if (si > ei) // Not found
    {
        return -1;
    }
    mid=(si+ei)/2;
    printf("--------\n");
    printf("Starting index : %d\n",si);
    printf("Ending index : %d\n",ei);
    printf("Midle index : %d\n",mid);
    printf("--------\n");
    
    if(arr[mid] == k)
    {
        return mid;
    }
    else if(arr[mid]>k)
    {
        return binarysearch(arr,si,mid-1,k);
    }
    else 
    { 
        return binarysearch(arr,mid+1,ei,k);
    }
  
}
void main()
{
    int n,i;
    int arr[10];
    int k;
    int res;
    printf("Enter array length");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Element to search");
    scanf("%d",&k);
     
    res = binarysearch(arr,0,n,k);

    if(res == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element is found at %d",res);
    }
    getch();
}
