#include <stdio.h>
#include <unistd.h>

int main(){
	char buffer[16] = {0};
	printf("[buffer] -> [%p]\n", buffer);
	read(0, buffer, 0xFF);
	return 0;
}



