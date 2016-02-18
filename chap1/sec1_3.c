#include <stdio.h>

int main(){
	int f;
	
	for(f=0;f<=300;f=f+20) {
		printf("%3d,     %6.2f\n",     f,(5.0/9) * (f - 32));
	}
	return 0;
}