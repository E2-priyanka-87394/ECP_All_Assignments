/*#include<stdio.h>
void printfabonacci(int n)
{
	int a=0;b=1,next;

	printf("%d",a);

	if(n>1){
		printf("%d",b);
	}

	for(int i=2;i<n;i++){
		next= a + b;
		printf("%d",next);
		a=b;
		b=next;
	}
	printf("\n");

}

int main(){
	int num;
	printf("Enter the no:");
	scanf("%d",&num);
	printfabonacci(num);
	return 0;

}
*/

#include <stdio.h>

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    // Variables to store the first two terms of the Fibonacci series
    int a = 0, b = 1, next;

    // Print the first term
    printf("%d", a);

    if (n > 1) {
        // Print the second term
        printf(" %d", b);
    }

    // Generate and print the rest of the Fibonacci series
    for (int i = 2; i < n; ++i) {
        next = a + b;
        printf(" %d", next);
        a = b;
        b = next;
    }

    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printFibonacci(terms);

    return 0;
}

