#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
}*v[10];

int a[10][10],n,i,j;
struct node *p=NULL,*temp=NULL;

void createmat(int a[][n],int n)
{
    int i,j,x;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i!=j)
            {
                printf("enter the value between %d and %d vertex",i,j);
                scanf("%d",&x);
                if (x>0)
                {
                    a[i][j]=1;
                }
                
            }
            else
            {
                a[i][j]=0;
            }
            
        }
        
    }
    
}

void displaymat(int a[][n],int n)
{
     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void calculatedegree(int a[][n],int n)
{
    int sumi,sumo,i,j,k;
    for ( k = 0; k < n; k++)
    {
        sumi=0;
        for ( i = 0; i < n; i++)
        {
            sumi=sumi+a[i][k];
        }
        sumo=0;
        for ( j = 0; j < n; j++)
        {
            sumo=sumo+a[k][j];
        }
        printf("\n the indegree , outdegree and totaldegree of %d vertex is %d %d %d",k,sumi,sumo,sumi+sumo);
        
        
    }
    
}

void create_list(int a[][n],int n)
{
    int i,j;
    for ( i = 0; i < n; i++)
    {
        v[i]=NULL;
        for ( j = 0; j < n; j++)
        {
            if(a[i][j]!=0)
            {
                p=(struct node*)malloc(sizeof(struct node));
                p->next=NULL;
                p->data=j;

                if (v[i]==NULL)
                {
                    v[i]=temp=p;
                }
                else
                {
                    temp->next=p;
                    temp=p;
                }
            }
        }
    }
}

void displaylist(int n)
{
    struct node *temp;

    for ( i = 0; i < n; i++)
    {
        temp=v[i];
        printf("%d\t",i);
    }
    while (temp !=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}