#include<stdio.h>
void main()
{
   int i,j,m=1,r,c;
   printf("Enter the dimension of matrix=");
   scanf("%d%d",&r,&c);
   printf("Enter the matrix elements =");
   int a[r][c],b[20][3];
   for(i=0;i<r;i++)
      {
         for (j=0;j<c;j++)
           { 
             scanf("%d",&a[i][j]);
             
           }
        
      }
      printf("The entered matrix=");
     for(i=0;i<r;i++)
     {
     for(j=0;j<c;j++)
     {
     printf("%d\t",a[i][j]);
     }
     printf("\n");
     }
   b[0][0]=r;
   b[0][1]=c;
   for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
     if(a[i][j]!=0)
     {
       b[m][0]=i;
       b[m][1]=j;
       b[m][2]=a[i][j];
       m++;
     }
   }
  }
  b[0][2]=m-1;
  printf("row column value \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
    
  }
}
