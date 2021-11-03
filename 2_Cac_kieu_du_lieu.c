#include <stdio.h>

int main ()
{
    int a=5;
    printf ("Kieu so nguyen a =%d\n",a);
    const double PI=3.14;
    printf ("hang so Pi =%lf \n",PI);
    float b=1.2;
    printf ("so thuc b =%f \n",b);
    double c=2.4;
    printf ("so thuc c = %lf \n",c);
    char ch;
    printf ("nhap day ky tu:");
    scanf ("%c",&ch);
    printf ("\nky tu ban vua nhap la: %c",ch);
    return 0;
}