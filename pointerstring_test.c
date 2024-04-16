#include <stdio.h>

int main(){
	char name[7] = "abcdefg";

	for(int i = 0; i < 8; i++){
		printf("Address: %p ,Value : %c\n", &name[i], name[i]);
	}

	return 0;
}
