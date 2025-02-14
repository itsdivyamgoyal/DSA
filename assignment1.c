#include<stdio.h>
#include<math.h>
typedef struct 
{
	float x;
	float y;
}cartesian_structs;

float distance (cartesian_structs a, cartesian_structs b)
{
	float dist = sqrt ( (a.x - b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) ) ;
	return dist;
}
cartesian_structs midpt (cartesian_structs a, cartesian_structs b)
{
	cartesian_structs mid_pt;
	mid_pt.x = (a.x+b.x)/2;
	mid_pt.y = (a.y+b.y)/2;
	return mid_pt;
}

float calcArea (cartesian_structs a, cartesian_structs b, cartesian_structs c)
{
	float area= ( (a.x*(b.y-c.y) ) + (b.x*(c.y-a.y)) + (c.x*(a.y-b.y)) )/2;
	if (area>=0)
	{
		return area;
	}
	else
	{
		return -area;
	}
}
int main ()
{
	cartesian_structs pt1, pt2;
	printf("Enter X- coordinate of point 1:");
	scanf ("%f", &pt1.x);
	printf("Enter Y- coordinate of point 1:");
	scanf ("%f", &pt1.y);
	printf("Enter X- coordinate of point 2:");
	scanf ("%f", &pt2.x);
	printf("Enter Y- coordinate of point 2");
	scanf ("%f", &pt2.y);
	//Distance between two given points – Part 1
	printf("The distance between the given points is %f\n", distance(pt1, pt2));
	//Mid-Point – Part 2
	cartesian_structs mid_pt= midpt(pt1, pt2);
	printf("The midpoint of the line joining the two given points is (%f, %f)\n", mid_pt.x, mid_pt.y );
	//Triangle – Part 3
	printf ("Please enter the three vertices of the triangle\n");
	cartesian_structs v1,v2,v3;
	printf ("First point :-\n");
	scanf("%f%f", &v1.x, &v1.y);
	printf ("Second point :-\n");
	scanf("%f%f", &v2.x, &v2.y);
	printf ("Third point :-\n");
	scanf("%f%f", &v3.x, &v3.y);

	printf ("The area of the triangle is %f\n", calcArea(v1, v2, v3));
	return 0;
}
