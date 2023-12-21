#include <stdio.h>
#include <conio.h>

int main() {
	int x;
	for(x = 0; x <= 255; x++) {
		printf("%d, %c\n", x, x);
	}
	getch();
}
