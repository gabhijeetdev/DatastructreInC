#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100],n,i,j,min,temp;
    printf("enter the number of element\n");
    scanf("%d",&n);

    printf("enter %d integer\n",n);
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j]) {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    printf("sorted list in ascending order:\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);

    return 0;
}



