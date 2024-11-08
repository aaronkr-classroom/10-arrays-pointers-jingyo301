//gets.c
#include <stdio.h>

#define MAX_CHAR 50

int main(void) {
	// 문자열은 마지막에 NULL 문자 0을 포함해야 하므로
	// 최대 19개의 문자까지 저장 가능함
	char input_str[MAX_CHAR];

	printf("Enter your English name\n>>");

	//gets(input_str); // 문자열이 길면 버퍼 오버플로우
	//fgets(입력받을 변수, 길이, 입력 스트림)
	fgets(input_str, MAX_CHAR, stdin);

	printf("Name : %s\n", input_str);

	return 0;
}