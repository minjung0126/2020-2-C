#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input = 0, result = 0, dight = 0;
	int devider = 100;

	printf("양의 정수[100~999] 입력 :");
	scanf("%d", &input);
	result = input;
	do
	{
		dight = result / devider;
		result %= devider;
		printf("%3d단위 출력: %d\n", devider, dight);
		devider /= 10;
	} while (devider >= 1);

	return 0;
}