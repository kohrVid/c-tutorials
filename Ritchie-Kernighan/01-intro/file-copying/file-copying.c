#include <stdio.h>

/*copy input */
main(){
	int c;

	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
}
