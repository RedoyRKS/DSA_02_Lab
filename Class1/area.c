#include <stdio.h>
#include <conio.h>

main()
{
float PI=3.14,radius,area;
printf ( "\nEnter the radius of the circle :" );
scanf ( "%f",&radius);
area = PI*radius*radius;
printf ( "\nThe area of circle is : %.2f",area );
return 0;
}