
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct arr {
  int data;
  int *p;

};

void genArr(void);
void show(int [],int);
void sortit(int [],int);



int main()
{

for(;;)
{
    if(kbhit())
    {

            getch();
               break;
    }
    genArr();
}



}

void show(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");
}


void sortit(int *a,int size)
{
    int temp;
    int sorted =0;

    for(int i=0;i< size-1;i++)
    {


        sorted =1;

        for(int j=0;j<size-i-1;j++)
        {

            if(a[j]>a[j+1])
            {
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                sorted = 0;
            }
        }
        if(sorted)
        {
            return ;
        }

    }
}

void genArr()
{
    struct arr l;
    int k;
      k= rand() % 20;
    l.p = (int *) malloc (k*sizeof(int));




    for(int i= 0 ;i< k;i++)
    {
        l.p[i] = rand() % 2530;
    }

    printf("\nbefore ...\n");
show(l.p,k);
sortit(l.p,k);
printf("\nafter\n");

show(l.p,k);
printf("\n");




}
