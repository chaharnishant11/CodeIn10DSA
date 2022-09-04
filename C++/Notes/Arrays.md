### **Arrays**
---

Arrays are used to declare multiple variables of same type at once because creating a lot of variables one by one is a hectic task to create and manage them (like we need int a,b,c,d,e...z to create 26 variables of type int and then we have to remember all of these to use them). 

Arrays make the code more readable and manageable.

Array objects are of same type, so int array can only store int elements and so on.
(Example : a packet of lays only has chips and not sweets or something else)

Array is a type of Data Structure.


**Declaration :**
`type name[size];`
or
`type name[size] = {values,values,....};`
or
`type name[size] = {0};` // this will create an array where all elements are 0

//If we don't initialize an array then we get garbage values/random values that are currently present at that location in the computer, and these values won't even stay consistent and wll change each time

//Also if we initialize by any number than 0, we will get that number followed by zeros and not an array of that number only

**Accessing via indexes :**
`name[index];`

To pass an array to a function we need its size and name

Array is passed by reference by default (so we are giving the location of the original variable, therefore changes within function affect original)
in other primitive variables we pass the value (so in this we pass a copy so changes made in function don't effect original)

Note : index are distances from origin that's why it starts with zero