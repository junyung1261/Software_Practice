#include <stdio.h>

void selectionsort(int *arr, int n);

int main(void) {
	/* �Ʒ� freopen �Լ��� input.txt�� read only �������� ����, ǥ���Է�(Ű����) ��� input.txt �� ���� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	���� ���� pc ���� �׽�Ʈ �� ����, �Է°��� input.txt�� ������ �� freopen �Լ��� ����ϸ�
	�� �Ʒ����� scanf �Լ��� ����Ͽ� ǥ���Է� ��� input.txt ���Ϸ� ���� �Է°��� �о� �� �� �ֽ��ϴ�.
	����, ���� pc���� freopen �Լ��� ������� �ʰ� ǥ���Է��� ����Ͽ� �׽�Ʈ�ϼŵ� �����մϴ�.
	��, codeground �ý��ۿ��� "�����ϱ�" �� ������ �ݵ�� freopen �Լ��� ����ų� �ּ�(//) ó�� �ϼž߸� �մϴ�. */
	freopen("input_selection.txt", "r", stdin);

	/* setbuf �Լ��� ������� ������, ������ ���α׷��� ���� '�ð� �ʰ�'�� ���� ���� �Ǿ��� ��,
	printf�� ����� ������ ä������ �ʰ� '0��'�� �� ���� �ֽ��ϴ�.
	�ð� �ʰ� ������ ����� ��� ������ �ް��� �ϽŴٸ� "setbuf(stdout, null);" �� ����Ͻñ� �ٶ��ϴ�. */
	setbuf(stdout, null);

	int t;
	int test_case;
	int arr[10];



	scanf("%d", &t);
	for (test_case = 1; test_case <= t; test_case++) {
		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�. �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.


		for (int i = 0; i < 10; i++) {
			scanf("%d", &arr[i]);
			
		}
		
		selectionsort(arr, 10);


		// �� �κп��� ������ ����Ͻʽÿ�.
		printf("case #%d\n", test_case);

		for (int i = 0; i < 10; i++) {
			printf("%d\n", arr[i]);

		}

	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}

void selectionsort(int *arr, int n) {
	int i, j, indexmin, temp;
	for (i = 0; i < n - 1; i++) {
		indexmin = i;
		for (j = i + 1; j < n; j++)
			if (arr[indexmin] > arr[j]) indexmin = j;
		temp = arr[indexmin];
		arr[indexmin] = arr[i];
		arr[i] = temp;
	}

}