#include <stdio.h>

void rectange(){
	double area;
	int w,h;
	printf("Enter width: ");
	scanf("%d", &w);
	printf("Enter height: ");
	scanf("%d", &h);
	area = w * h;
	printf("Area of rectangle = %.2f\n", area);
}

int main(){
	rectange();
	return 0;
}
