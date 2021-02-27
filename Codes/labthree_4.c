#include<stdio.h>
#include<math.h>

int main()
{
   float x1,x2,x3,y1,y2,y3,ab,bc,ac,area,angleA,angleB,angleC;
 
	printf("Enter coordinates of A(x,y):");
	scanf("%f%f",&x1,&y1);
	printf("Enter coordinates of B(x,y):");
	scanf("%f%f",&x2,&y2);
	printf("Enter coordinates of C(x,y):");
	scanf("%f%f",&x3,&y3);  
	
   ab=sqrt(pow(x2-x1,2)+pow(y2-y1,2));	
   bc=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
   ac=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
 
  if ((ab+bc)==ac)
     printf("Points are collinear\n");
  else
  {
	  printf("Points are not collinear\n");
      area=(0.5)*fabs((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
      printf("Area of the triangle is %f\n",area);
       
	  printf("Angles are in radian\n");
	  angleA=acos((pow(ac,2)+pow(ab,2)-pow(bc,2))/(2*ac*ab));
	  printf("Angle A is %f\n",angleA);
	  angleB=acos((pow(bc,2)+pow(ab,2)-pow(ac,2))/(2*bc*ab));
	  printf("Angle B is %f\n",angleB);
	  angleC=acos((pow(ac,2)+pow(bc,2)-pow(ab,2))/(2*bc*ac));
	  printf("Angle C is %f\n",angleC);
  } 
 
 return 0;
}