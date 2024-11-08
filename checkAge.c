// checkAge.c
#include <stdio.h>

int main(void) {
	int age = 0;

	// 정상적인 나이를 입력할 때까지 반복하기
	while (1) {
		printf("Input age : ");
		// scanf 함수는 실행에 실패하면 0을 반환함
		if (!scanf_s("%d", &age)) {
			rewind(stdin); // 없으면 무한 반복될 수 있다
			printf("Only digits allowed!\n");
		}
		else {
			// 0~130까지 숫자만 정상적인 나이로 인정함
			if (age > 0 && age < 130) {
				break;
			}
			else { 
				printf("Incorrect age! Try again!\n");

			}
		}
	}
	printf("Your age : %d\n", age);

	return 0;
}