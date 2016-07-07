#include <stdio.h>

void insertionSort(int *arr, int n);

int main(void) {
	/* 아래 freopen 함수는 input.txt를 read only 형식으로 열고, 표준입력(키보드) 대신 input.txt 로 부터 읽어오겠다는 의미의 코드입니다.
	만약 본인 PC 에서 테스트 할 때는, 입력값을 input.txt에 저장한 후 freopen 함수를 사용하면
	그 아래에서 scanf 함수를 사용하여 표준입력 대신 input.txt 파일로 부터 입력값을 읽어 올 수 있습니다.
	또한, 본인 PC에서 freopen 함수를 사용하지 않고 표준입력을 사용하여 테스트하셔도 무방합니다.
	단, Codeground 시스템에서 "제출하기" 할 때에는 반드시 freopen 함수를 지우거나 주석(//) 처리 하셔야만 합니다. */
	freopen("input_selection.txt", "r", stdin);

	/* setbuf 함수를 사용하지 않으면, 본인의 프로그램이 제한 '시간 초과'로 강제 종료 되었을 때,
	printf로 출력한 내용이 채점되지 않고 '0점'이 될 수도 있습니다.
	시간 초과 전까지 실행된 결과 점수를 받고자 하신다면 "setbuf(stdout, NULL);" 를 사용하시기 바랍니다. */
	setbuf(stdout, NULL);

	int T;
	int test_case;
	int arr[10];



	scanf("%d", &T);
	for (test_case = 1; test_case <= T; test_case++) {
		// 이 부분에서 알고리즘 프로그램을 작성하십시오. 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.


		for (int i = 0; i < 10; i++) {
			scanf("%d", &arr[i]);

		}

		insertionSort(arr, 10);


		// 이 부분에서 정답을 출력하십시오.
		printf("Case #%d\n", test_case);

		for (int i = 0; i < 10; i++) {
			printf("%d\n", arr[i]);

		}

	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}

void insertionSort(int *arr, int n) {
	int i, j, key, temp;
	for (i = 1; i < n; i++) {
		key = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (j >= 0 && key < arr[j])
				arr[j + 1] = arr[j];
			else
				break;

		}
		arr[j + 1] = key;
	}

}