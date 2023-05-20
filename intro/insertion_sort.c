#include <stdio.h>

void swap(char *px, char *py);
void insertion_sort(char s[], int n);

void insertion_sort(char s[], int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		j = i;
		while ((j > 0) && (s[j] < s[j-1])) {
			swap(&s[j], &s[j-1]);
			j--;
		}
	}
}

void swap(char *px, char *py) {
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}

int main() {
	int i;
	char s[] = "insertionsort";
	int n = 13;

	insertion_sort(s, n);
	
	for (i = 0; i < n; i++)
		printf("%c ", s[i]);
	printf("\n");
	
	return 0;
}

