/* Program treba ispisat 3 razlicita tipa  piramide od brojeva pomocu rekurzije. */


#include<stdio.h>
void funk1(int n);
void funk2(int n);
void funk3(int n);

int main( )
{

    int n;
    printf("Koliko linija da ispise ? ");
    scanf("%d",&n);
    printf("\n------------ Uzorak 1 ----------- \n\n");
        funk1(n);
        printf("\n");
        printf("\n------------ Uzorak 2 ----------- \n\n");
        funk2(n);
        printf("\n");
        printf("\n------------ Uzorak 3 ----------- \n\n");
        funk3(n);

        return 0;

}

void funk1(int n)
{
        int i;
        if(n==0)
                return;
    else
        {
                funk1(n-1);
                for(i=1; i<= n; i++)
                        printf("%d ",i);
        printf("\n");
        }
}

void funk2(int n)
{
        int i;
        if(n==0)
                return;
    else
        {
                for(i=1; i<=n; i++)
                        printf("%d ",i);
        printf("\n");
                funk2(n-1);
        }
}

void funk3(int n)
{
        int i;
        if(n==0)
                return;
    else
        {
                for(i=n; i>=1; i--)
                        printf("%d ",i);
        printf("\n");
                funk3(n-1);
        }
}
