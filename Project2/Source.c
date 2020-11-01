#include <stdio.h>      // Ввести строку, вывести пословно на экран
int main()
{
	char arr[1000];
	printf("Input string: \n");
	fgets(arr, sizeof(arr), stdin); //Ввод массива (Записывает строку до Enter)
	int len = 0; 
	int i = 0;
	//Подсчет кол-во символов
	while (arr[len] != '\0')
		len++;
	// Защита от дурака
	while ((!(arr[len] >= 'A') && (arr[len] <= 'Z')) || (!(arr[len] >= 'a') && (arr[len] <= 'z'))) {// символы 
		len--;
	}
	//
	while (i <= len) {
		while ((!(arr[i] >= 'A') && (arr[i] <= 'Z')) || (!(arr[i] >= 'a') && (arr[i] <= 'z'))) { //символы
			i++;
		}
		while ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) { // буква
			printf("%c", arr[i]);
			i++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
