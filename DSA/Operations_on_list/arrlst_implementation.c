#include<stdio.h>
#include "arrlst_header.h"
void init(ARRLST *pal)
{
    pal->index= -1;
}

int append(ARRLST *pal,int e)
{
    if(pal->index==MAX-1)
        return 0;
    pal->index++;
    pal->a[pal->index]=e;
    return 1;
}

int delLast(ARRLST *pal,int *ele)
{
    if(pal->index==-1) return 0;
    *ele=pal->a[pal->index];
    pal->index--;
    return 1; 
}

void display(ARRLST *pal)
{
    if(pal->index==-1) return;
    for(int i=0;i<=pal->index;i++)
    {
        printf("%d\t",pal->a[i]);
    }
    printf("\n");
}

int prepend(ARRLST *pal,int ele)
{
    if(pal->index==MAX-1) return 0;
    for (int i =pal->index; i>=0; i--)
    {
       pal->a[i+1]=pal->a[i];
    }
    pal->index++;
    pal->a[0]=ele;
    return 1;     
}

int deletefront(ARRLST *pal,int* ele)
{
    if(pal->index==-1) return 0;
    *ele=pal->a[0];
    for(int i=1; i<=pal->index; i--)
    {
        pal->a[i-1]=pal->a[i];
    }
    return 1;
}

int insertposition(ARRLST *pal,int ele,int pos)
{
    if(pal->index==MAX-1) return 0;
    for(int i=pal->index;i>=pos;i--)
    {
        pal->a[i+1]=pal->a[i];
    }
    pal->a[pos]=ele;
    pal->index++;
    return 1;
}


int deleteposition(ARRLST *pal,int ele,int pos)
{
    if(pal->index==-1) return 0;
    ele=pal->a[pos];
    for(int i=pos+1;i<=pal->index;i++)
    {
        pal->a[i-1]=pal->a[i];
    }
    pal->index--;
}

int getter(ARRLST *pal,int pos,int ele)
{
    if(pal->index==-1) return 0;
    ele=pal->a[pos];
    return 1;

}

int setter(ARRLST *pal,int pos,int ele)
{
    if(pal->index==-1) return 0;
    pal->a[pos]=ele;
    return 1;
}



