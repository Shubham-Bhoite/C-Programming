
# Strings:

-   A character array terminated by a '\0' (null character).

-   Null character denoted string termination.

-  E.g==> char name[]={'S','H','U','B','H','A','M','\0'};


## Initialising Strings:
1) char name[]={'S','H','U','B','H','A','M','\0'};

   char name[]="SHUBHAM";
---
   ## String format specifier:
   -   "%S" ==> string

   ## Important:
   -   scanf() cannot input multi-word string with spaces.
   -   here, gets() & puts() come into picture.
   ---
   ## String Functions:

   1) gets(str): input string
   2) puts(str): output string
   3) fgets(str, n, stdin): stops when n-1 chars input or new line is entered.
   ---

   ## String using Pointers:

   1) char *str = "Hello World";

   2) char *str = "Hello World";

   3) char str[] ="Hello World";
   ---

   ## Standard Library Functions:

   1) strlen (str):
   -   count number of characters excluding '\0'.

   2) strcpy(newStr, oldStr):
   -   copies value of old string to new string.

   3) strcat(firstStr, secStr):
   -   concatenates first string with second string.

   4) strCmp(firstStr, secStr):
   -   compares 2 strings & return a value.