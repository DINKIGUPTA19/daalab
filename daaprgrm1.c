// WAP for recursive linear search.  

#include<stdio.h> 

#include<conio.h> 

void main() 

{ 

 int a[10],s,n,i; 

 clrscr(); 

 printf("enter the size of array\n"); 

 scanf("%d",&n); 

 printf("enter the elemnts of array"); 

 for(i=0;i<n;i++) 

 { 

 scanf("%d",&a[i]); 

 } 

 printf("enter the element to be searched\n"); 

 scanf("%d",&s); 

 for(i=0;i<n;i++) 

 { 

  if(a[i]==s) 

   break; 

 

 } 

 if(a[i]==s) 

  printf("The position of the element is %d",i+1); 

 else 

  printf("Element not found"); 

getch(); 

} 