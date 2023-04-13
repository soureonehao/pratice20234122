#include<stdio.h>
#include<math.h>
int f(int k, int n) {
	int i, sum = 0;
	for (i = 1; i <= n; i++)
		sum += pow(i, k);
	return sum;
}
void main() {
	int k, n, sum;
	printf("请输入n,k:");
	scanf_s("%d%d", &n, &k);
	
	sum = f(n, k);
	printf("结果为：%d", sum);
}