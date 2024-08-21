#include<stdio.h>
void main()
{
  int left=0,n,right,x,f=0,mid,i,t=0;
  t=t+2;
  printf("enter the size array");
  t++;
  scanf("%d" ,&n);
  t++;
  int a[n];
  printf("enter the array elements =");
  t++;
  t++;
  for(i=0;i<n;i++)
  {
   t++;
   scanf("%d",&a[i]);
   t++;
  }
  printf("enter the elements to be searched=");
  t++;
  scanf("%d",&x);
  t++;
  right=n-1;
  t++;
  t++;
  while(left<=right)
  {
   t++;
   t++;
   mid=(left+right)/2;
   t++;
   if(x==a[mid])
    {
     f=1;
     break;
     t++;
    }
    else if(x>a[mid])
    {
    left=mid+1l;
    t++;
    }
    else if(x<a[mid])
    {
    right=mid-1;
    t++;
    }
    }t++;
    if(t==0)
    {
    printf("\n the element is not found");
    t++;
    }
    else
    {
    printf("\n the element is found");
    t++;
    }
    t++;
    t++;
    printf("\n the time complexity=%d",t);
    printf("\n he space complexity = %d",(32+n*4));
    }
