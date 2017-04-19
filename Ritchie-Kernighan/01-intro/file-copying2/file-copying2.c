#include <stdio.h>

/*copy input */
main(){
	int c;

	c = getchar();
	while ((c = getchar() != EOF)){
		putchar(c);
	}
}
