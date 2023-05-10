
# Dynamic memory Allocation [DMA]:

-   It is way to allocate memory to a data structure during the runtime.

-   We need some functions to allocate & free memory dynamically.


## Functions for DMA:

1) malloc()
2) calloc()
3) free()
4) realloc()

## 1. malloc()-
-   takes number of bytes to be allocated & returns a pointer of type void.

-   ptr= (int*)malloc(5*size of(int));

## 2. calloc()-
-   initializes with 0
-   ptr=(*int) calloc(5, size of(int));

## 3. free()-
-   We use it to free memory that is allocated using malloc & calloc.
-   free(ptr);

## 4. realloc()-
-   reallocate (increase or decrease) memory using the same pointer & size.
-   ptr= realloc(ptr, newSize);