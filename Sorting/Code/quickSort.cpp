// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
//User function Template for C
void swap(int *nums,int i,int j){
    int temp = nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
}
//Function to sort an array using quick sort algorithm.
void quickSort(int arr[], int start, int end)
{
    // code here
    if (start<end){
        int part = partition(arr,start,end);
        quickSort(arr,start,part-1);
        quickSort(arr,part+1,end);
    }
}
    
int partition (int arr[], int start, int end)
{
   // Your code here
   int pivot = arr[end];
   int i = start-1;
   for(int j=start;j<end;j++){
       if(arr[j]<pivot){
           i++;
           swap(arr,i,j);
       }
   }
   swap(arr,i+1,end);
   return i+1;
}

// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends