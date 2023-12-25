//Array operations: Write a program to find average, max and min elements from an array of n long integers. 

#include<stdio.h> 
 
int main()
{ 
int n; 
double arr[100];
printf(" please enter how many number :"); 
scanf("%d",&n); 

for(int i=0;i<n;i++)
{ 
    printf(" please enter the number %d  :",i+1); 
    scanf("%lf",&arr[i]); 
} 

for(int i=1;i<n;i++)
{ 
    if(arr[0]<arr[i])
    { 
        arr[0] = arr[i]; 
    } 
} 
double maximum=arr[0]; 
printf(" the value of largest is %.2lf \n ",maximum); 

for(int i=1;i<n;i++)
{ 
    if(arr[0]>arr[i])
    { 
        arr[0] = arr[i]; 
    } 
} 
double minimum=arr[0]; 
printf("the value of smallest is %.2lf  \n ",minimum); 
return 0; 
} 