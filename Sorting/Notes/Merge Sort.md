### Merge Sort

A sorting algorithm that uses Divide and Conquer strategy

Which means that we first break things and then merge them

Sorting means arranging things in an order (ascending or descending), Example students in an assembly are sorted according to their heights

Lets take one more example: 
suppose we have an array [38,7,2,61,50,1,11,5], when sorted it will be [1,2,5,7,11,38,50,61] in ascending order

So for division part we keep on dividing the array into half until individual elements are received (this is our Base Case)

and after this while going backward check which element is smaller and place it in front, and then moving forward we compare the bigger arrays to see which numbers are smaller and place them in sequence and again move up while doing the same thing until we reach the final sorted array



So, the main four steps here are:

1. Find mid (since that's the point where we actually divide the array)

2. MergeSort(start,mid)

3. MergeSort(mid+1,end)

4. Merge(firstHalf, secondHalf);

We will do this by putting these values in a new array, but we can also do a more optimized approach without using any additional space
