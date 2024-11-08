// getmystring.c
#include <stdio.h>

#define MAX_CH 20
int getMysting(char buffer[], int limit);

int main(void) {
	char input_string[MAX_CH];
	int state; // 사용자에게 최대 MAX_CH까지만 입력 받겠다고 제한함

	state = getMysting(input_string, MAX_CH);

	if (state == 1) printf("input : %s\n", input_string);
	else printf("input : %s -> out of range\n", input_string);
	return 0;
}

int getMysting(char buffer[], int limit) {
	int i = 0;
	for (; i < limit; i++) {
		buffer[i] = getchar();
		if (buffer[i] == '\n') {
			buffer[i] = 0; // [ENTER] 키 위치에 0을 넣어서 문자열을 완성함
			return 1; // 정상적으로 입력이 완성됨
		}
	}
	buffer[i] = 0;
	rewind(stdin);
	return 0; // 입력 초과 현싱이 발생했음을 알림
}


void isCanceled(char input_string[]) {
	// 반환값이 NULL이 아니라면 문자열을 입력
	// 받아서 input_string에 저장됨
	if (NULL != gets(input_string)) {
		// getMystring()
		printf("input : %s\n", input_string);
	}
	else {
		printf("input -> Canceled!\n");
	}
	return 0;
}