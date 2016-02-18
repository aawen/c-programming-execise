#include <stdio.h>
int main() {
	float f = 0;
	float c;
	printf("huashi,   sheshi\n");
	while (f<=300) {
		c=(5.0/9) * (f - 32);

		printf("%6.2f,        %f\n", f, c);
		f = f +20;


	}

	return 0;
}