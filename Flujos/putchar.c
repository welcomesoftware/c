// demuestra el uso de putchar()
#include <stdio.h>

int main() {
	int count;
	for(count = 65; count <= 90; ) 
		putchar(count++);

	puts("");
	return 0;
}