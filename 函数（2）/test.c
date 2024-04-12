//写一个函数可以找出两个整数中的最大值

#include <stdio.h>
//函数返回类型的地方写出：void,表示这个函数不返回任何值，也不需要返回
void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	//写一个函数 - 交换2个整变量的值
	
	printf("交换前：a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}

//int main()
//{
//	int a = 10;//4个字节的空间
//
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//
//	printf("%d\n", a);
//	return 0;
//}