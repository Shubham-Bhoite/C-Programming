# File I/0 :

-   Container is storage device to store data.

-   RAM is volatile.
-   Contents are lost when program terminates.
-   Files are used to persist the data.


## Operations on Files :

1) create a file
2) open a file 
3) close a file
4) read from a file
5) write in a file
---

## Types of Files :

1) Text files-
-   textual data
-   e.g==> .txt, .c, .java

2) Binary files-
-   binary data
-   e.g==> .exe, .mp3, .jpg
----

## File Pointer :

-   FILE is a structure that needs to be created for opening a file.

-   A FILE ptr that points to this structure & is used to access the file.

-   SYNTAX==> FILE *fptr;


## Opening a file:

FILE *fptr;

fptr=fopen ("filename", mode);

## Closing a file:

fclose(fptr);

---
## File opening modes :

1) "r"  ==> open to read
2) "rb"  ==> open to read in binary
3) "w"  ==> open to write
4) "wb"  ==> open to write in binary
5) "a"  ==>  open to append
