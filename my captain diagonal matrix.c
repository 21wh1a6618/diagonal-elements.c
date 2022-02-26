//c program to print diagonal elements of matrix//
#include<stdio.h>
int main()
{
    int array1[10][10],i,j,m,n,sum=0;
    
    printf("enter no. of rows ::");
    scanf("%d",&m);
    printf("\n enter no. of column ::");
    scanf("%d",&n);
    printf("\n enter values to matrix :: \n");
    for (i=0;i<m;i++)
{
     for(j=0;j<n;j++)
  {
     printf("\n enter a[%d][%d] value ::",i,j);
     scanf("%d",&array1[i][j]);
  }
}
    printf("\n the diagonal elements of a matrix are :: \n\n");
    //check condition to print diagonals,matrix must be square matrix//
    if(m==n)
{

   //print diagonals//

   for(i=0;i<m;i++)
   {
for(j=0;j<n;j++)
   {
     if(i==j)
     printf("\t%d",array1[i][j]); //print elements//
     else
     printf("\t");   //print space// 
   }  
   printf("/n/n"); //after each row print new line//
}
}
else 
{ 
 printf("\n matrix is not a square matrix.");
 
}
return 0;
}



    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

