#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a,b;
int distance(int x, int y, int a, int b)
		{
		int a1=(x-a)*(x-a)+(y-b)*(y-b);
		int a2= (int)sqrt(a1);
		return a2;
		}

int swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("%d\n",*a);
	printf("%d\n",*b);
}

int main()
{
	int i;
	int cluster1[5][3]={{1,1,1},    // 1st and 2nd index of every row is x and y co-ordinate respectively
						{2,2,2},
						{3,3,3},
						{4,4,4},
						{5,5,5}
						};
	int cluster2[5][3]={{6,6,6},
						{7,7,7},
						{8,8,8},
						{9,9,9},
						{10,10,10}
						};
	int random_computer=rand()%5;
	int worst_computer=cluster1[random_computer][0];
	printf("%d\n",random_computer);
	printf("worst computer that is for transaction is %d \n",worst_computer);
	int n=0;
	int e=0;
	int new_array[5];
	int x=cluster1[random_computer][1];
	int y=cluster1[random_computer][2];

	for(e;e<5;e++)
	{
		int a = cluster2[e][1];
		int b = cluster2[e][2];
		int dist = distance(x,y,a,b);
		new_array[e]=dist;
		printf("the %d element of array is %d\n",e+1,new_array[e]);
	}

	int s;
	int smallest=new_array[0];
	for(s=0;s<5;s++)
	{
		if(new_array[s]<smallest)
			smallest=new_array[s];
	}

	printf("the smallest distance from worst computer to another computer of 2nd cluster is %d\n",smallest);

	for(s=0;s<5;s++)
	{
		if(new_array[s]==smallest)
		{
			printf("position of computer from 2nd cluster is %d\n",s);
			printf("% d computer is best for transaction\n",s+1);
			break;
		}
	}

	int x1,y1;

	for(x1=0;x1<5;x1++)
	{
		for(y1=0;y1<3;y1++)
			printf("%d ",cluster1[x1][y1]);
	printf("\n");
	}

	for(x1=0;x1<5;x1++)
	{
		for(y1=0;y1<3;y1++)
			printf("%d ",cluster2[x1][y1]);
	printf("\n");
	}

int a=cluster1[random_computer][0];
int b=cluster2[s][0];
printf("a=%d \nb=%d \n",a,b);
swap(&a,&b);
printf("a=%d \nb=%d \n",a,b);
cluster1[random_computer][0]=a;
cluster2[s][0]=b;
printf("%d\n%d\n",cluster1[random_computer][0],cluster2[s][0]);




	for(x1=0;x1<5;x1++)
	{
		for(y1=0;y1<3;y1++)
			printf("%d ",cluster1[x1][y1]);
	printf("\n");
	}

	for(x1=0;x1<5;x1++)
	{
		for(y1=0;y1<3;y1++)
			printf("%d ",cluster2[x1][y1]);
	printf("\n");
	}

	return 0;
}
