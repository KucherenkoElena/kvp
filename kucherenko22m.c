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
	int arr[] = {11, 21, 114, -211, 1716, 133, -128, 10};
	int N = sizeof(arr) / sizeof(arr[0]);
	findSum(arr, N);
}
