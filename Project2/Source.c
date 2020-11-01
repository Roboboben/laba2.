#include <stdio.h>      // Enter a string and display it word-by-word on the screen
int main()
{
	char arr[1000];
	printf("Input string: \n");
	fgets(arr, sizeof(arr), stdin); 
	int len = 0; 
	int i = 0;
	
	while (arr[len] != '\0')
		len++;
	
	while ((!(arr[len] >= 'A') && (arr[len] <= 'Z')) || (!(arr[len] >= 'a') && (arr[len] <= 'z'))) {
		len--;
	}
	
	while (i <= len) {
		while ((!(arr[i] >= 'A') && (arr[i] <= 'Z')) || (!(arr[i] >= 'a') && (arr[i] <= 'z'))) {
			i++;
		}
		while ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) { 
			printf("%c", arr[i]);
			i++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
