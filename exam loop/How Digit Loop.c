#include <stdio.h>

int main() {
    int num, count ;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        count++;
        num /= 10; 
    } 
	
	while (num != 0);

    printf("Total number of digits: %d\n", count);

    return 0;
}
