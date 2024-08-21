# include<stdio.h>
void main()
{
 int n,x,i,c=0,time=0;
 time=time+2;
 printf("enter the size of array=");
 time++;
 scanf("%d",&n);
 time ++;
 int a[n];
 printf("enter the array elements");
 time++;
 time++;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  time++;
  time++;
  }
   printf("enter the elements to be searched=");
   time++;
   scanf("%d",&x);
   time++;
   printf("\n");
   time ++;
   time ++;
   for(i=0;i<n;i++)
   {
    time ++;
    if(a[i]==x)
    {
      c++;
      time+2;
      printf("the element is found at %d",i++);
      printf("\n");
    }
    time++;
    }
    printf("\n");
    time ++;
    time ++;
    if(c>0)
    {
    printf("the element is found %d times",c);
    time ++;
    }
    else
    {
    printf("the element is not found");
    time ++;
    }
    printf("\n");
    time++;
    printf("the time complexity = %d",time);
    printf("\n");
    printf("the space complexity =%d",(20+n*4));
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
      
