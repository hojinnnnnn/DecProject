#include <stdio.h>
#include <stdlib.h>
int main(void) {


	int result = 0; // ������� 0���� ����
	int dec = 0; // ������ dec����
	int i = 0; // ������ i����
	for (i = 0; i <= 100; i++) //100������ �Ҽ����̶� 100���� ���ϴ� �ݺ���
	{
		for (dec = 2; dec < i; dec++) //1�� �Ҽ��� �ƴϹǷ� 2���� ����
		{
			if (i % dec == 0) // i������ dec �� 0�̸� �Ҽ��� �ƴϹǷ� break 
				break;
		}
		if (dec == i)  // i������ dec�� 0�� �ƴϹǷ� result ���� ����
			result += dec;
	}
	printf("1���� 100���� �ڼ��� �� %d\n", result); //����ϴ� ���� �� ��°�
	
	system("pause");

}