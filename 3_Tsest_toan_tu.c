#include <stdio.h>

int main()
{
    int a=9,b=5,d;
    d=a*b;
    printf (" a*b = %d \n",d);
    d=a/b;
    printf ("a:b = %d\n",d);
    d=a%b;
    printf ("a/b = %d\n",d);
    d = ++a;
    printf ("++a = d = %d\n", d);// d luc nay bang 10//
    d=--a;
    printf ("--a = d = %d\n", d);//luc nay d = 9 do giam di 1 don vi//
    printf ("a=%d\n",a+=b);
    //toan tu quan he//
    //a=9,b=5//
    printf ("%d == %d is %d\n",a,b,a==b); //so sanh ngang bang//    //a=b la sai, tra ve 0//
    printf ("%d > %d is %d\n",a,b,a>b); //so sanh hon //  //a>b la dung, tra ve 1//
    printf ("%d < %d is %d\n",a,b,a<b); //so sanh hon   // //a<b la sai, tra ve 0//
    printf ("%d != %d is %d\n",a,b,a!=b); // so sanh khong bang, khac nhau// //a#b la dung, tra ve 1//
    printf ("%d <= %d is %d\n",a,b,a<=b); //so sanh be hon hoac bang   // //a nho hon hoac bang b la sai, tra ve 0//
    printf ("%d >= %d is %d\n",a,b,a>=b); //so sanh lon hon hoac bang// //a lon hon hoac bang b la dung, tra ve 1//
    
    //toan tu logic//
    //&& (AND) dung ca 2: True, sai 1 trong 2: False//
    //|| (OR) dung 1 trong 2: True, sai ca 2: False//
    // ! (NOT) toan tu phu dinh: Neu bieu thuc True => tra ve False. Neu bieu thuc False => Tra ve True//
    //a=9,b=5,result//
    int result,c=6;
    result = (a==b) && (c>b);
    printf ("(a==b) && (c>b) is %d\n",result); //ve 1 sai, tra ve 0//
    result = (a>b) && (c>b);
    printf ("(a>b) && (c>b) is %d\n",result); //2 ve deu dung, tra ve 1//
    result = (a==b) || (c!=b);
    printf ("(a==b) || (c!=b) is %d\n",result); // ve 2 dung, tra ve 1//
    result = (a<b) || (c<b);
    printf ("(a<b) || (c<b) is %d\n", result); // 2 ve deu sai, tra ve 0//
    result = !(a>b);
    printf (" !(a>b) is %d\n",result); //ve dieu kien dung, tra ve 0//
    result = !(!(a>b));
    printf (" !(!(a>b)) ís %d\n", result); //ve dk sai tra ve 1//
    return 0;   
}

