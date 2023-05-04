# Structures:

-   A collection of values of different data types.

-   E.g- name(string), roll no(integer), cgpa(float)

## Syntax:

struct student{
    char name[100];
    int roll;
    float cgpa;
};

---
## Structures in Memory:

-   Structures are stored in contiguous memory location.
----

## Array of structures:

1) struct student ECE[100];
2) struct student COE[100];
3)struct student IT[100];

//ACCESS:
-   IT[0].roll=200;
-   IT[0].cgpa=7.6;
---

## Pointers to structures:
-  struct student s1;
struct student *ptr;
ptr= &s1;
---

## Arrow operator:
(*ptr).code <======> ptr->code

---
## Passing structure to function:

-   void printInfo(struct student S1);


## typedef keyword:
 -   used to create alias(alternative name) for data type.

