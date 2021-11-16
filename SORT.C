#include<stdio.h>
#include<conio.h>
void selection_sort(int arr[]);
void main(void)
{
  int i , A[10];
  clrscr();
  printf("Enter 10 numbers:\n");
  for(i = 0; i < 10; i++) scanf("%d",&A[i]);
  printf("\nBefore sorting: ");
  for(i = 0 ; i < 10; i++) printf("%d, ",A[i]);
  selection_sort(A);
  printf("\n\nAfter sorting: ");
  for(i = 0; i < 10; i++) printf("%d , ",A[i]);
  getch();
}
void selection_sort(int arr[])
{
  int temp, i, j;
  for(i = 0; i < 10; i++)
  {
	for(j = i+1; j < 10; j++)
	{
	    if(arr[i] > arr[j])
	    {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	    }
	}
  }
}