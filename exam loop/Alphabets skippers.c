#include <stdio.h>

int main() {
    char l = 'a'; 
    
    printf("Alphabet skippers in 3-word  : ");
    
    do {
        printf("%c ", l); 
        l += 4;         
    } 
	
	while (l <= 'z');   
    
    printf("\n");
    
    return 0;
}
