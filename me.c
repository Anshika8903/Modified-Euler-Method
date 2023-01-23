#include<stdio.h>
#include<math.h>
#define F(x,y) (x*x-y*y)
void main()
{
    float x0,xn,y0,yn,yp,yc,h;
    int i,n;
    printf("\nenter the initial value of x: ");
    scanf("%f",&x0);
    printf("\nenter the initial value of y: ");
    scanf("%f",&y0);
    printf("\nenter the final value of x: ");
    scanf("%f",&xn);
    printf("\nenter the value of h: ");
    scanf("%f",&h);
    xn=x0+h;
    yp=y0+h*F(x0,y0);

    for(i=1;i<=7;i++)
    {
        yc=y0+((h/2)*(F(x0,y0)+F(x0+h,yp)));
        yp=yc;
        printf("\nvalue of y when x=%f is %f",xn,yc);

    }

    printf("\n\nfinal value of y when x=%f is %f",xn,yc);

}
