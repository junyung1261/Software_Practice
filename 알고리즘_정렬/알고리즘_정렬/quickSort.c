#include <stdio.h>

void quickSort(int numbers[], int left, int right);


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

		quickSort(arr, 0,9);


		// �� �κп��� ������ ����Ͻʽÿ�.
		printf("Case #%d\n", test_case);

		for (int i = 0; i < 10; i++) {
			printf("%d\n", arr[i]);

		}

	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}


void quickSort(int numbers[], int left, int right)
{
	int pivot, l_hold, r_hold;
	l_hold = left;
	r_hold = right;
	pivot = numbers[left];  // 0��° ���Ҹ� �Ǻ����� ����
	while (left < right)
	{
		// ���� ������ �Ǻ��� ���ų� ũ�ٸ�, �̵��� �ʿ䰡 ����
		while ((numbers[right] >= pivot) && (left < right))
			right--;

		// �׷��� �ʰ� ���� �Ǻ����� �۴ٸ�,
		// �Ǻ��� ��ġ�� ���� ���� �ִ´�.
		if (left != right)
		{
			numbers[left] = numbers[right];
		}
		// ���ʺ��� ���� ��ġ���� ���� �о���̸鼭
		// �Ǻ����� ū ���� �ִٸ�, ���� �̵��Ѵ�.
		while ((numbers[left] <= pivot) && (left < right))
			left++;

		if (left != right)
		{
			numbers[right] = numbers[left];
			right--;
		}
	}

	// ��� ��ĵ�� �����ٸ�, �Ǻ����� ���� ��ġ�� �Է��Ѵ�.
	// ���� �Ǻ��� �������� ���ʿ��� �Ǻ����� �۰ų� ���� ���� ���Ҵ�.
	numbers[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;

	// ���ȣ���� �����Ѵ�.
	if (left < pivot)
		quickSort(numbers, left, pivot - 1);
	if (right > pivot)
		quickSort(numbers, pivot + 1, right);
}