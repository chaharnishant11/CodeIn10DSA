### Quick Sort

----

It is a sorting technique that uses Divide and conquer method just like merge sort

To understand it better we can take an example of arranging ourselves in lines in assembly where we arrange our self between the person taller and smaller to us and leave the rest of the line to deal with them self, This is exactly what we do here



**4 Ways to decide pivot :**

1. Random

2. Median

3. Start index

4. End index    //This is the one we will use in this session



**Steps :**

1. Base Case :                  startIndex<endIndex

2. Find partition                 //Trickiest part

3. quicksort(start,pivot-1)        

4. quicksort(pivot+1,end)        // swap current element if its smaller than pivot, and increment i
   
   
