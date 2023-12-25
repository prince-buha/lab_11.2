/*
Q.1 Write a Program to find the reverse of a 1D array using a Pointers.
Output:
Enter the Size of Array : 5

Enter the Elements of the Array:
A[0] : 1
A[1] : 2
A[2] : 4
A[3] : 5
A[4] : 7

The Reverse of the Above Array is:
 7  5  4  2  1
*/
#include<stdio.h>
void main(){
	int n,i;
	printf("Enter the Size of Array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the Elements of the Array: ");
	printf("\n");
	for(i=0;i<n;i++){
		printf("A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	int *ptr1=a;
	int *ptr2=a+n-1;
	int x;
	while(ptr1<ptr2){
		x=*ptr1;
		*ptr1=*ptr2;
		*ptr2=x;
		ptr1++;
		ptr2--;
	}
	printf("\nThe Reverse of the Above Array is: ");
	printf("\n");
	for(i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
}
