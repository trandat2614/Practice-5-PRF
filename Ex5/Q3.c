#include <stdio.h>

int nhapso(int *count, int *sum){
	int n;
	    while (1) {
        printf("\nEnter an integer in [1-10](Press 0 to quit): ");
        scanf("%d", &n);

       
        if (n == 0) {
            break;
        }        
        if (n >= 1 && n <= 10) {
            (*count)++;          
            *sum += n;    
        } else {
            printf("Incorrect input, try again.\n");
        }
    }
}
int main() {
    int count = 0;
    int sum = 0;   
    nhapso(&count,&sum);
    printf("Number of integer entered: %d\n", count);
    printf("Sum: %d\n", sum);

    return 0;
}