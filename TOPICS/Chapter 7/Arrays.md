# Array:

-   Collection of similar data types stored at continuous memory location.

---
## Syntax:
1) int marks [3];
2) char name [10];
3) float price [2];

----


## Input & Output:

1) Input:  scanf("%d", &marks[0]);

2) Output:   printf("%d", marks[0]);

---

## Pointer Arithmetic:
-   Pointer can be incremented & decremented.
-   We can also subtract one pointer from another.
-   We can also compare 2 pointers.


1) Case 1: int age=22; int *ptr = & age; ptr++;

2) Case 2: float price =20.00; float *ptr = & price; ptr++;

3) Case 3: char star='*'; char *ptr= & star; ptr++;

---
## Array is a Pointer:
1) int *ptr= & arr[0];

2) int *ptr = arr;


## Multidimensional Arrays:
2D Arrays

int arr[][]={{1,2},{3,4}};   
