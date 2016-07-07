#include <stdio.h>

void insertionSort(int *arr, int n);

int main(void) {
	/* �Ʒ� freopen �Լ��� input.txt�� read only �������� ����, ǥ���Է�(Ű����) ��� input.txt �� ���� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	���� ���� PC ���� �׽�Ʈ �� ����, �Է°��� input.txt�� ������ �� freopen �Լ��� ����ϸ�
	�� �Ʒ����� scanf �Լ��� ����Ͽ� ǥ���Է� ��� input.txt ���Ϸ� ���� �Է°��� �о� �� �� �ֽ��ϴ�.
	����, ���� PC���� freopen �Լ��� ������� �ʰ� ǥ���Է��� ����Ͽ� �׽�Ʈ�ϼŵ� �����մϴ�.
	��, Codeground �ý��ۿ��� "�����ϱ�" �� ������ �ݵ�� freopen �Լ��� ����ų� �ּ�(//) ó�� �ϼž߸� �մϴ�. */
	freopen("input_selection.txt", "r", stdin);

	/* setbuf �Լ��� ������� ������, ������ ���α׷��� ���� '�ð� �ʰ�'�� ���� ���� �Ǿ��� ��,
	printf�� ����� ������ ä������ �ʰ� '0��'�� �� ���� �ֽ��ϴ�.
	�ð� �ʰ� ������ ����� ��� ������ �ް��� �ϽŴٸ� "setbuf(stdout, NULL);" �� ����Ͻñ� �ٶ��ϴ�. */
	setbuf(stdout, NULL);

	int T;
	int test_case;
	int arr[10];



	scanf("%d", &T);
	for (test_case = 1; test_case <= T; test_case++) {
		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�. �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.


		for (int i = 0; i < 10; i++) {
			scanf("%d", &arr[i]);

		}

		insertionSort(arr, 10);


		// �� �κп��� ������ ����Ͻʽÿ�.
		printf("Case #%d\n", test_case);

		for (int i = 0; i < 10; i++) {
			printf("%d\n", arr[i]);

		}

	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}

void insertionSort(int *arr, int n) {
	int i, j, key, temp;
	for (i = 1; i < n; i++) {
		key = arr[i];
		for (j = i-1; j>=0; j--) {
			if (j >= 0 && key < arr[j])
				arr[j + 1] = arr[j];
			else
				break;
			
		}
		arr[j+1] = key;
	}

}