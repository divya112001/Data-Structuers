#include<stdio.h>
void main()
{
int ar1[20],ar2[20],ar3[40];
int m,n;
void read_array(int[],int);
void print_array(int[],int);
void merge(int[],int[],int[],int,int);
printf("No.of elements in 1 array [1-20]:");
scanf("%d",&m);
printf("Enter the elements in non decreasing order:");
read_array(ar1,m);
printf("No.of elements in 2 array:");
scanf("%d",&n);
printf("Enter the elements in non decreasing order:");
read_array(ar2,n);
merge(ar1,ar2,ar3,m,n);
printf("Merged array:\n");
print_array(ar3,m+n);
}
void read_array (int x[],int y)
{
int i;
for(i=0;i<y;i++)
scanf("%d",&x[i]);
return;
}
void print_array(int x[],int y)
{
int i;
for(i=0;i<y;i++)
printf("%d, ",x[i]);
return;
}
void merge(int a[],int b[],int c[],int m,int n)
{
int i,j,k;
i=j=k=0;
while(i<m && j<n)
if(a[i]<b[j])
{
c[k]=a[i];
i=i+1;
k=k+1;
}
else
{
c[k]=b[j];
j=j+1;
k=k+1;
}
while(i<m)
c[k++]=a[i++];
while(j<n)
c[k++]=b[j++];
}

