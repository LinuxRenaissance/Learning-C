#include <stdio.h>

int main() {
	int loop = 1;
	while (loop < 101) {
	    if (loop % 3 == 0 && loop % 5 == 0) {
		printf("%d FizzBuzz\n", loop);
	    }
	    else if (loop % 3 == 0) {
		printf("%d Fizz\n", loop);
	    }
	    else if (loop % 5 == 0) {
		printf("%d Buzz\n", loop);
	    }
	    else {
		printf("%d\n", loop);
	    }
	    loop++;
	}
	return 0;
}
