#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//一、数组的概念
//为了能够存放多个相同类型的数值，就有了数组
//数组是一组相同类型元素的集合




//一维数组的创建和初始化
//1.创建
//int main()
//{
//	int math[20];//数组有20个元素，每个元素的类型是int
//	char ch[5];
//	double arr[6];
//	return 0;
//}


//2.初始化
//在创建数组的同时，给他赋值
//int main()
//{
//	int math1[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int math2[10] = { 1,2,3,4,5 };//不完全初始化，剩下的元素默认初始化为0
//
//	char ch1[5] = { 'a','b' };
//	char ch2[5] = "abc";
//	return 0;
//}


//3.数组的类型
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	double d = 0.0;
//
//	int arr[10] = { 0 };
//	//数组的元素类型是int
//	//数组的类型 -- int[10]
//
//	int arr2[5] = { 0 };
//	//数组的类型 -- int[5]
//
//	return 0;
//}




//三、一维数组的使用
//数组下标是从0开始的
//int main()
//{
//	//这里的10是指定数组元素个数的
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//这里的5是数组元素的下标
//	printf("%d\n", arr[5]);//[] -- 下标引用操作符
//	printf("%d\n", arr[9]);
//
//	return 0;
//}


//打印数组中所有元素
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//给数组中输入值，然后再打印
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//四、一维数组在内存中的存储
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//& -- 取地址操作符，取出变量在内存中的地址
//	}
//	return 0;
//}
//数组在内存中是连续存放的
//随着数组下标的增长，地址也是由小（低）到大（高）变化




//五、sizeof计算数组元素个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zd\n", sizeof(arr));// 40 -- 这里计算的是数组的大小，单位是字节
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//总大小除以一个元素的大小
//	printf("数组元素个数为：%d\n", sz);
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//六、二维数组的创建
//一维数组是整型元素的数组，二维数组是一维数组的数组。
//1.创建
//int main()
//{
//	int arr[3][5];//三行五列的数组，每个元素是整型
//	float score[5][30];
//	return 0;
//}




//七、二维数组的初始化
//int main()
//{
//	int data1[3][5] = { 1,2,3,4,5,6,7,8 };//不完全初始化
//	int data2[3][5] = { 0 };
//	int data3[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//
//	int data4[3][5] = { {1,2},{3,4},{5,6} };//按行初始化
//
//	int data5[][5] = { 1,2,3,4,5,6,7,8 };//二维数组在初始化时，可以省略行，但不能省略列
//	return 0;
//}




//八、二维数组的使用
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	printf("%d\n", arr[1][2]);
//	return 0;
//}


//int main()
//{
//	int arr[3][5] = { 0 };
//	//输入值
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//输入
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//九、二维数组在内存中的存储
//二维数组在内存中也是连续存放的
//int main()
//{
//	int arr[3][5] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//按列打印
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	//1 2 3 4 5
//	//2 3 4 5 6
//	//3 4 5 6 7
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//十、C99中的变长数组
//在C语言的C99标准之前，数组在创建的时候，数组大小的指定只能使用常量
//int main()
//{
//	int n = 10;
//	int arr[n];//err
//	return 0;
//}
//在C99之后，C语言中引入了变长数组的概念，使得数组的大小可以使用变量来指定
//但是VS2022不支持变长数组
//变长数组是不能初始化的




//十一、数组练习
//1.多个字符从两端移动，向中间汇聚
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "hello bit!!!!!!!!!";
//	char arr2[] = "##################";
//	int sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠1000毫秒
//		system("cls");//清理控制台屏幕的信息
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//2.二分查找
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 1;//假设找不到
//	
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	//int avg = (a + b) / 2;
//	int avg = a + (b - a) / 2;
//	printf("%d\n", avg);
//	return 0;
//}