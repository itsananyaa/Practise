#include <stdio.h>
int main()
{
    int x,l,r,mid,n,s,arr[10];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n", n);
    for (x=0;x<n;x++)
        scanf("%d",&arr[x]);
    printf("Enter value to find\n");
    scanf("%d",&s);
    l=0;
    r=n-1;
    mid=(l+r)/2;
    while(l<=r)
    {
        if( arr[mid]<s)
            l= mid+1;
        else if (arr[mid]==s)
        {
            printf("%d found at location %d.\n",s,mid);
            break;
        }
        else
            r=mid-1;
    }
    if (l>r)
        printf("Not found! %d is not present in the list.\n",s);
    return 0;
}
