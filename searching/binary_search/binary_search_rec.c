#include <stdio.h>
//recursive implementation of binary search

int a;

int rec(int *input, int n, int first, int last)
{
	//won't work for an array of <5 elements
	int mid = first + (last - first) / 2;
	if (first == last) return -1; else
	if (input[mid] > a) return rec(input, n, first, mid); else
	if(input[mid] < a) return rec(input, n, mid + 1, last);
	return mid;
}
int main()
{
	int input[100];
	int n, i;
	printf("how many numbers to input:\n");
       	scanf("%d", &n);
 	printf("input numbers in ascending order: \n");
    	for(i=0; i<n; i++) scanf("%d", &input[i]);
    	printf("number to search for: \n");
    	scanf("%d", &a);
    	int rez = rec(input, n, 0, n);
	(rez != -1) ? printf("number found at position %d \n", rez + 1)
		      : printf("element not found\n");
	return 0;
}

