#include <stdio.h>

void shellsort(int arr[],int n)
{
    int i,j,gap,temp;

    for(gap=n/2;gap>=1;gap=gap/2)
    {
        for(j=gap;j<n;j++)
        {
            for(i=j-gap;i>=0;i=i-gap)
            {
                if(arr[i+gap]<arr[i])
                {
                    temp=arr[i+gap];
                    arr[i+gap]=arr[i];
                    arr[i]=temp;
                }
                else
                    break;
            }
        }
    }
}

void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int i,arr[8];
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("\n enter a arry element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n before sorting:\n");
    print(arr,n);
    shellsort(arr,n);
    printf("\n after sorting:\n");
    print(arr,n);

    return 0;

}