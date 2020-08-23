#include<stdio.h>
#include<conio.h>
int main() 
{
	int p,d1,d2,c1,c2,c3,c4,b;
	char ask[]="Answer(number)",sa[]="Surface Area",v[]="Volume";
	float ans, w, l, r,s,h;
	
	printf("Start Program?\t1.Yes\t2.No\t%s : ",ask);
	scanf_s("%d", &b);
	while (b==1)
	{
		printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
		printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
		printf("\n\n\t\t\t    *Geometry Formula Program*\n\t\t\t\t      v.3.0.0");
		printf("\n\n\t\t\t1. 2D Dimension\t\t2. 3D Dimension\n%s : ",ask);
		scanf_s("%d", &p);
//2D Dimension
		if (p == 1)
		{
			printf("\n***Choose Your Shape to calculate***\n\n\t\t1.Square\t2.Circle\t3.Rectangle\n%s : ",ask);
			scanf_s("%d", &d1);
			if (d1 == 1 || d1 == 3)
			{
				printf("\n***What your want to calculate***\n\n\t\t1.Perimeter\t2.Area\n%s : ",ask);
				scanf_s("%d", &c1);
//Square
				if (d1 == 1)
				{
					printf("\nSide : ");
					scanf_s("%f", &s);
					if (c1 == 1)
					{
						ans = 4 * s;
						printf("Square Perimeter : %.2f\n", ans);
					}
					if (c1 == 2)
					{
						ans = s * s;
						printf("\nSquare Area : %.2f\n", ans);
					}
				}
//Rectangle
				if (d1 == 3)
				{
					printf("\nWidth : ");
					scanf_s("%f", &w);
					printf("Length : ");
					scanf_s("%f", &l);
					if (c1==1)
					{
						ans = (w + l) * 2;
						printf("\nRectangle Perimeter : %.2f\n", ans);
					}
					if (c1==2) 
					{
						ans = w * l;
						printf("\nRectangle Area : %.2f\n", ans);
					}
				}
			}
//Circle
			if (d1 == 2)
			{
				printf("\n***What your want to calculate***\n\n\t\t1.Circumference\t\t2.Area\n%s : ",ask);
				scanf_s("%d", &c2);
				printf("\nRadius : ");
				scanf_s("%f", &r);

				if (c2 == 1)
				{
					ans = 2 * 3.14 * r;
					printf("\nCircumference : %.2f\n", ans);
				}
				if (c2 == 2)
				{
					ans = 3.14 * r * r;
					printf("\nCircle Area : %.2f\n", ans);
				}
			}
		}
//3D Dimension
		if (p == 2)
		{
			printf("\n***Choose Your Shape to calculate***\n\n\t\t1.Cube\t2.Cylinder\t3.Cone\t4.Sphere\n%s : ",ask);
			scanf_s("%d", &d2);
			printf("\n***What your want to calculate***\n\n\t\t1.Surface Area\t2.Volume\n%s : ",ask);
			scanf_s("%d", &c4);
//Cube
			if (d2 == 1)
			{
				printf("\nSide : ");
				scanf_s("%f", &s);
				if(c4==1)
				{
					ans = 6*s*s;
					printf("Cube %s : %.2f\n",sa, ans);
				}
				if(c4==2){
					ans = s*s*s;
					printf("Cube %s : %.2f\n",v, ans);
				}
				
			}
//Cylinder
			if (d2 == 2)
			{
				printf("\nRadius : ");
				scanf_s("%f", &r);
				printf("Height : ");
				scanf_s("%f", &h);
				if(c4==1)
				{
					ans = (2*3.14*r*h)+(2*3.14*r*r);
					printf("Cylinder %s : %.2f\n",v, ans);
				}
				if(c4==2)
				{
					ans = 3.14*r*r*h;
					printf("Cylinder %s : %.2f\n",v, ans);
				}
			}
//Cone
			if (d2 == 3)
			{
				printf("\nRadius : ");
				scanf_s("%f", &r);
				printf("\nLength : ");
				scanf_s("%f", &l);
				printf("\nHeight : ");
				scanf_s("%f", &h);
				if(c4==1)
				{
					ans = 3.14*r*l;
					printf("\nCone %s : %.2f\n",sa, ans);
				}
				if(c4==2)
				{
					ans = (3.14*r*r*h)/3;
					printf("\nCone %s : %.2f\n",v, ans);
				}
			}
//Sphere
			if (d2 == 4)
			{
				printf("\nRadius : ");
				scanf_s("%f", &r);
				if(c4==1)
				{
					ans = 4*3.14*r*r;
					printf("\nSphere %s : %.2f\n",sa, ans);
				}
				if(c4==2)
				{
						ans = (4*3.14*r*r*r)/3;
					printf("\nSphere %s : %.2f\n",v, ans);
				}
			}
		}
		printf("\nTry again?\t1.Yes\t2.No\t%s : ",ask);
		scanf_s("%d",&b);
		if (b == 2) 
		{
			break; 
		}
	}
	return 0;
}