#include <stdio.h>

int main() {

	//every loop pattern possible
	int n;

	printf("Enter your input:");
	scanf("%d", &n);
	/*	
		*
		**
		***
		****
		*****
		******
		
		*/
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");

	}

	printf("Enter your input:");
	scanf("%d", &n);

	for (int i = n; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	/*
		******
		*****
		****
		***
		**
		*
		
	*/

	printf("Enter your input:");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 || i == n || j == 0 || j == n) {
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	/*
	
		******
		*    *
		*    *
		*    *
		*    *
		******
	
	*/

	printf("Enter your input:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			printf("*");
		}
		printf("\n");

		/*
		
	*
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
		
		
		*/

	}
	printf("Enter your input:");
	scanf("%d", &n);

	for (int i = n; i >= 1; i--) {
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			printf("*");
		}
		printf("\n");

		/*

		*********
		 *******
		  *****
		   ***
			*

		*/
	}
	printf("Enter your input:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			printf("*");
		}
		printf("\n");

		/*
		
		*
	   ***
	  *****
	 *******
	*********

		*/

	}
	printf("Enter your inptu:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	/*
	
*
**
***
****
*****
****
***
**
*

	*/
	printf("Enter input:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == i || j == n - i + 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	/*
	
*   *
 * * 
  *  
 * * 
*   *

	*/

	printf("Enter your heart:(Enter 6 ):");
	scanf("%d", &n);

	for (int i = n / 2; i <= n; i += 2) {
		for (int j = 1; j < n - i; j += 2) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n; i >= 1; i--) {
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (i * 2 - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
	/*
	
 ***   ***
***** *****
***********
 *********
  *******
   *****
    ***
     *
	
	*/

	return 0;
	
}



