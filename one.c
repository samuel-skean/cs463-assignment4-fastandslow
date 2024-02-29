#include<stdio.h>

int main(int argc, char** argv) {
	int count=1;
	for(int i=0;i<1000000000;i++) {
		count*=8; count/=3;
	}
	printf("%d", count);
}
