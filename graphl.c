#include<stdio.h>
#include<malloc.h>
#include"graphl.h"

void main()
{
    void createmat();
    void displaymat();
    void calculatedegree();
    void create_list();
    void displaylist();


    printf("create adjacency matrix");
    createmat(a,n);
    printf("the created matrix is:\n");
    displaymat(a,n);
    printf("the adjacency list is:\n");
    create_list(a,n);
    displaylist(n);
}