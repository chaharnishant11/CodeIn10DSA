//Function to sort an array using quick sort algorithm.
void swap(int *nums,int i,int j){
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void quickSort(int arr[],int start,int end)
{
    // code here
    if(start < end){
        int part = partition(arr,start,end);
        quickSort(arr,start,part-1);
        quickSort(arr,part+1,end);
    }
}

int partition (int arr[],int start,int end)
{
    // Your code here
    int pivot = arr[end];
    int i=start-1;
    for(int j=start;j<end;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,end);
    return i+1;
}