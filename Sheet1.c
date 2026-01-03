
1
#include <stdio.h>
int main() {
	int x, y, sum, diff, prod, quo; 
	printf ("Enter any two numbers: ");
	scanf("%d %d", &x, &y);
	sum =x+y;
	diff = x-y; 
	prod = x*y; 
	quo = x/y;
	printf("Sum = %d\n", sum); 
	printf("Difference = %d\n", diff); 
	printf ("Product = %d\n", prod); 
	printf("Quotient = %d\n", quo);
	return 0;
}

2
#include <stdio.h>
int main(){
	int l,a;
	printf("Enter length of cube: "); 
	scanf("%d", &l);
	a = 6*(l*l);
	printf("Surface area of cube: %d", a);
	return 0;
}

3
#include <stdio.h>
int main(){
	int r,a,c;
	printf("Enter radius of circle: "); 
	scanf("%d", &r);
	a= (22/7)*r*r;
	c = 2*(22/7)*r;
	printf(" Area = %d\n", a);
	printf ("Circumference = %d\n", c);
	return 0;
}
4
#include <stdio.h>
int main() {
	int l,b,a,p;
	printf("Enter length and breadth: ");
	scanf("%d %d", &l, &b);
	a = l*b;
	p = 2*(l+b);
	printf ("Area = %d\n",a);
	printf ("Perimeter = %d\n", p);
	return 0;
}

5
#include <stdio.h>
int main() {
	int x,y,q,r;
	printf("Enter any 2 integers: ");
	scanf("%d %d", &x, &y);
	q = x/y;
	r = x%y;
	printf("Quotient=%d\n", q);
	printf("Remainder = %d\n", r);
	return 0;
}

6
#include <stdio.h>
int main() {
	long t_sec, hrs, mins, sec;
	printf("Enter total seconds: "); 
	scanf("%ld", & t_sec);
	hrs = t_sec /3600;
	mins = (t_sec%3600)/60;
	sec = (t_sec%3600) % 60;
	printf("Time: %ld:%ld:%ld (HH:MM: SS)", hrs, mins, sec);
	return 0;
}

7
#include <stdio.h>
int main() {
	int t_days, yrs, m, d;
	printf("Enter total days = "); 
	scanf("%d", &t_days);
	yrs = t_days/365;
	m = (t_days % 365)/30; 
	d = (t_days % 365)%30;
	printf ("Time: %dyrs %dmonths %ddays ", yrs, m, d);
	return 0;
}

8
#include <stdio.h>
int main() 
{
	int length, km, m, cm, mm; 
	printf("Enter total length: "); 
	scanf("%d", & length);
	km = length /1000000;
	m = (length % 1000000)/10000;
	cm = ((length % 1000000)%10000)/100;
	mm = ((length % 1000000)%10000)%100;
	printf("Length = %dkm %dm %dcm %dmm", km, m, cm, mm);
	return 0;
}

9
#include <stdio.h>
int main() 
{
	int n,rem, rev;
	printf("Enter a  3 digit number: ");
	scanf("%d", &n);
	while (n!=0)
	{
		rem = n%10;
		rev = (rev*10)+ rem;
		n = n/10;
	}
	printf("Reversed number = %d", rev);
	return 0;
}

10
#include <stdio.h>
int main() 
{
	int s1,s2, s3, s4, s5, a,p;
	printf("Enter marks obtained by student: ");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	a = s1 + s2 + s3 + s4 + s5;
	p= (a/5);
	printf("Aggregate marks = %d\n", a); 
	printf("Percentage marks = %d\n", p);
	return 0;
}

11. 
#include <stdio.h>
int main() 
{
	int c,f;
	printf("Enter temperature in C :"); 
	scanf("%d", &c);
	f=((9*c)/5)+32;
	printf("Temperature in F = %d", f);
	return 0;
}

12
#include <stdio.h>
#include<math.h>
int main() 
{
	double a,b,c,dct, r1, r2, img, real;
	printf("Enter coefficients a, b, c for ax2+bx+c=0: "); 
	scanf ("%lf %lf %lf", &a, &b, &c );
	dct = (b*b)-(4*a*c);
	if (dct >0){
		r1 = (-b+sqrt(dct))/(2*a);
		r2 = (-b-sqrt(dct))/(2*a);
		printf("Root 1 = %lf \n Root 2 = %lf", r1, r2);
	}
	else if (dct == 0) {
			r1 = r2 = -b/(2*a);
			printf("Root 1 = Root 2 = %lf", r1);
	}
	else {
	real = -(b/2*a); 
	img = sqrt(-dct)/(2*a);
	printf ("Root 1 = %lf + %lf \n", real, img); 
	printf ("Root 2 = %1f- %lf", real, img);
	}
	return 0;
}


13
#include <stdio.h>
#include<math.h>
int main() 
{
	int a,b,c,s, area;
	printf("Enter sides of triangle = ");
	scanf("%d %d %d", &a, &b,&c);
	s=(a+b+c)/2;
	area = pow((s*(s-a)*(s-b)*(s-c)),(0.5));
	printf ("Area = %d ", area);
	return 0;
}

14.
#include <stdio.h>
int main() 
{
	int a, b, c=0;
	printf("Enter 2 numbers = ");
	scanf("%d %d",&a, &b);
	c = a; 
	a = b; 
	b = c;
	printf("a = %d \n b= %d", a, b);
	return 0;
}

15.
#include <stdio.h>
int main() 
{
	int num, x, y=0, count=0, num2; 
	printf("Enter a number: "); 
	scanf("%d", &num);
	num2 = num;
	do{
		num2 /= 10; 
		++count; 
	}while(num2!=0);
	if(count == 5){
		while (num!=0) {
		x = num %10;
		y = y+x; 
		num = num/10;
	}
	printf("Sum = %d",y);
	return 0;
}
}

16.
#include <stdio.h>
int main() 
{
	int num1,num2, result=0;
	printf("Enter 2 numbers = ");
	scanf("%d %d", &num1, &num2);
	result = (num1 > num2)?(num1 + num2):(num2 - num1); 
	printf("Result = %d", result);
	return 0;
}

17.
#include <stdio.h>
int main() 
{
	int dec;
	printf("Enter a decimal number = "); 
	scanf("%d", &dec);
	printf("Octal N.S = %o \n", dec); 
	printf("Hexadecimal N.S = %X \n ",dec);
	return 0;
}

18.
#include <stdio.h>
int main() 
{
	float r, vol;
	const float PI = 3.1415;
	printf("Enter radius of sphere: "); 
	scanf("%f", &r);
	vol = (4.0/3.0)*PI*(r*r*r); 
	printf("Volume = %.2f", vol);
	return 0;
}

19
#include <stdio.h>
int main() 
{
	int num, rem;
	printf("Enter a number= "); 
	scanf("%d", &num);
	rem = num % 5;
	printf("Remainder = %d", rem);
	return 0;
}
