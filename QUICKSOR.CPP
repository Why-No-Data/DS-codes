
//QUICKSORT
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void QuickSort(int A[],int start,int end);

int Partition(int A[],int start,int end);

void main()
{
    int A[50],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    QuickSort(A,0,n-1);
    printf("The sorted list is :  ");
    for(i=0;i<n;i++)
	printf("%d  ",A[i]);
    getch();
}

void QuickSort(int A[],int start,int end)
{
    int pIndex;
    if(start<end)
    {
        pIndex=Partition(A,start,end);
        QuickSort(A,start,pIndex-1);
        QuickSort(A,pIndex+1,end);
    }
}

int Partition(int A[],int start,int end)
{
    int pivot,i,pIndex,temp,temp2;
    pivot=A[end];
    pIndex=start;
    for(i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            temp=A[i];
            A[i]=A[pIndex];
            A[pIndex]=temp;
            pIndex=pIndex+1;
        }
    }
    temp2=A[pIndex];
    A[pIndex]=A[end];
    A[end]=temp2;
    return pIndex;
}