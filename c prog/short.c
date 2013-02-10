#include<stdio.h>

int main() {
	int z=CX(3,5);
	printf("Initial z value :%d\n",z);
	z+=4;
	printf("New z value after adding 4: %d\n",z);
	z+=CX(2,1);
	printf("New z value after adding CX(2,1): %d\n",z);
}
