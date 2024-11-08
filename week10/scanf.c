// scanf.c
#include <stdio.h>

int main(void) {
	char char_data;
	int int_data, oct_data, hex_data;
	float float_data;
	char str_data[20];
	
	printf("Enter the following data:\n");
	printf("%c, %d, %o, %x, %f, %s\n");

	scanf_s("%c", &char_data);
	printf("Entered \%c : %c", char_data);

	scanf_s("%d %o %x", &int_data, &oct_data, &hex_data);
	printf("Entered \%d, \%o, \%x : %d %o %x", int_data, oct_data, hex_data);

	scanf_s("%f", &float_data);
	printf("Entered \%f : %f", float_data);

	scanf_s("%s", &str_data); // check
	printf("Entered \%s : %s", str_data);

	return 0;
}