#include <stdio.h>

//递归在使用时，一定要满足一定的条件，否则会-栈溢出~！
//每次调用递归时，要使其的条件越来越接近限制条件

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	//递归--主要思考方式为：大事化小
	print(num);

	return 0;
}