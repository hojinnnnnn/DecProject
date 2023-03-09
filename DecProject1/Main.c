#include <stdio.h>
#include <stdlib.h>
int main(void) {


	int result = 0; // 결과값을 0으로 지정
	int dec = 0; // 변수값 dec생성
	int i = 0; // 변수값 i생성
	for (i = 0; i <= 100; i++) //100까지의 소수값이라서 100까지 더하는 반복문
	{
		for (dec = 2; dec < i; dec++) //1은 소수가 아니므로 2부터 시작
		{
			if (i % dec == 0) // i나누기 dec 가 0이면 소수가 아니므로 break 
				break;
		}
		if (dec == i)  // i나누기 dec가 0이 아니므로 result 값을 증가
			result += dec;
	}
	printf("1부터 100까지 솟수의 합 %d\n", result); //출력하는 문구 밑 출력값
	
	system("pause");

}