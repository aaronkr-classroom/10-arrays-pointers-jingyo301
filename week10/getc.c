//getc.c
#include <stdio.h>

int main(void) {
	//입력 문자가 있으면 계속 읽고 출력하는 프로그램
	// @까지 읽을 수 있다
	char ch;

	printf("Enter char to read (@ to stop):\n");

	// 파일을 읽을 떄
	// while (ch = getc(filename)) != 'EOF')
	while ((ch = getc(stdin)) != '@') {
		// 받은 문자를 다시 출력하기
		putchar(ch);

	}

	printf("\nEnd of input:\n");

	return 0;
}