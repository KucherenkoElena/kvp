#include <limits.h>
#include <stdio.h>

// ����஫�� ����� �3    ���������

void findSum(int arr[], int N){
	int s, i = 0;
	for (int i = 0; i < N; i++) {
		s = s + arr[i];
    }
	printf("�㬬� ����⮢ ���ᨢ�:  %d", s);
}
void main(){
	int arr[] = {1, 2, 4, -1, 76, 33, -8, 0};
	int N = sizeof(arr) / sizeof(arr[0]);
	findSum(arr, N);
}