#include<stdio.h>
int main()
{
  int arr[10],n,i,j,swap;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n",n);
  for (i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for (i=0;i<n;i++)
  {
      for (j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
  }

  printf("Sorted list in ascending order:\n");

  for (i=0;i<n;i++)
  {
      printf("%d\n",arr[i]);
  }

  return 0;
}
