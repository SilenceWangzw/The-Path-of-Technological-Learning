#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//һ����һ��C���Գ���
//int main()
//{
//	printf("Hello World\n");
//	return 0;
//}




//����main��������������
//1.����
//ÿ��C���Դ��벻���ж����У����Ǵ�main������ʼ��main�����ǳ�������
//main����ǰ���int��ʾ����ִ�н�����ʱ��᷵��һ���������͵�ֵ�����������дreturn 0; ����ǰ���Ӧ


//2.main�����Ķ���д��
//�ٹ��ϵ�д�� -- ���Ƽ�
//void main()
//{
//
//}


//��ֻ�ǲ������ֶ���void�������void��ʾmain����û�в���
//int main(void)
//{
//	return 0;
//}


//����ʵmain���������в��������Ĳ�����������������ģ������ʹ��main�����Ĳ����Ǿ�д�ϣ��������ʹ�þͲ�д
//��ʱ����Ҫ�˽�main�����Ĳ���
//int main(int argc, char* argv[])
//{
//	return 0;
//}




//����printf����
//printf������ʹ����Ҫ����stdio.hͷ�ļ�
//std -- standard -- ��׼
//i -- input -- ����
//o -- output -- ���
//int main()
//{
//	printf("%d\n", 100);//%d -- ��ӡ����
//	printf("%c\n", 'q');//%c -- ��ӡ�ַ����������������Ľ��ַ�
//	printf("%f\n", 3.14);//%f -- ��ӡС����Ĭ��С������ӡ6λ
//	printf("%s\n", "Hello World");//%s -- ��ӡ�ַ�����˫�����������Ľ��ַ���
//	return 0;
//}




//�ġ��ַ���ASCII����
//C�����з��ڵ������еĶ����ַ�
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//	return 0;
//}


//��ASCII���Ӧ�������ַ���ӡ����Ļ��
//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//	}
//	return 0;
//}




//�塢�ַ�����\0
//ʹ��˫������������һ���ַ��ͱ���Ϊ�ַ���
//�ַ����Ĵ�ӡ��ʽ������%s��ָ��
//int main()
//{
//	printf("%s\n", "hello c");
//	printf("hello c");
//	return 0;
//}


//�ַ������Դ����ַ�������
//int main()
//{
//	char arr1[] = { 'a','b','c' };//arr1��û��\0
//	char arr2[] = "abc";//arr2�к���\0
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//int main()
//{
//	char arr1[] = { 'a','b','c','\0' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//strlen��һ���⺯�� -- ���ַ������ȣ�ͳ���ַ�����\0֮ǰ���ַ�����
//ʹ��strlen��Ҫ����ͷ�ļ�string.h
//strlen���ص�ֵ��size_t���͵ģ�Ӧ��ʹ��%zd
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//	printf("%zd\n", strlen(arr1));//6
//	printf("%zd\n", strlen(arr2));//���ֵ
//	return 0;
//}




//����ת���ַ�
//ת���ַ�����˼�壺����ת��ԭ����˼���ַ�
//int main()
//{
//	printf("abc\ndef");//  \n -- ����
//	return 0;
//}


//��֧������ĸ�ʵı�������
// ??) --> ]
// ??( --> [
//int main()
//{
//	printf("(are you ok??)");// (are you ok]
//	printf("(are you ok\?\?)");//��ֹ������Ϊ����ĸ��
//	return 0;
//}


//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 'b');
//
//	//��ӡ������
//	printf("%c\n", '\'');
//	return 0;
//}


//int main()
//{
//	printf("c:test\bit");
//	printf("\n");
//	printf("c:\\test\\bit");
//	return 0;
//}


//int main()
//{
//	printf("abcbdef\n");
//	printf("abc\bdef\n"); //  \b -- ������һ���ַ�������ɾ���ַ�
//	return 0;
//}


//int main()
//{
//	printf("a\tbc\tdef");// \t -- ����8���ַ����룬�������8���ַ������ÿո���
//	return 0;
//}


// \ddd --- d d d��ʾ1~3���˽��Ƶ�����
//int main()
//{
//	printf("%c\n", '\130');//�˽���130 --> ʮ����88 --> 88��Ӧ��ASCII��ΪX
//	printf("%c\n", '\77');//�˽���77-- > ʮ����63-- > 63��Ӧ��ACSII��Ϊ��
//	return 0;
//}


// \xdd -- d d��ʾ����ʮ����������
//int main()
//{
//	printf("%c\n", '\x36');// ʮ������36 --> ʮ����54 --> 54��Ӧ��ASCII��Ϊ�ַ�6
//	return 0;
//}


//��ϰ��
//int main()
//{
//	printf("%zd\n", strlen("c:\test\bit\114\test.c")); //16
//	printf("%zd\n", strlen("c:\test\bit\118\test.c")); //17
//	return 0;
//}




//�ߡ�����������
//1.�����
//int main()
//{
//	;//�����
//	return 0;
//}
//�����һ����ֵĵط��ǣ�������Ҫһ����䣬���������䲻��Ҫ���κ��£��Ϳ���дһ�������


//2.���ʽ���
//�ڱ��ʽ�ĺ�����Ϸֺž��Ǳ��ʽ���
//int main()
//{
//	int a = 10;
//	int b = 0;
//	b = a + 10;//���ʽ���
//	return 0;
//}


//3.�����������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//4.�������
//����������һ������飬�ɶ������еĴ���͹���һ�������
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 10 - i;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//5.�������
//C������һ�ֽṹ���ĳ����������
//˳��ṹ
//ѡ��ṹ��if��switch
//ѭ���ṹ��for��while��do while




//�ˡ�ע��
//ע���ǶԴ����˵���������������ע��
//ע���Ǹ�����Ա�Լ���������������Ա����
//ע����������ʽ
//1. /* */ -- ����ע��(����Ƕ��ʹ��)
//int main()
//{
//	/*
//		int a = 10;
//		printf("%d", a);
//	*/
//
//	return 0;
//}


//2. // -- ����ע��
//int main()
//{
//	//int a = 10;
//	//printf("%d\n", a);
//	return 0;
//}
//ע���ڱ���ʱ�ᱻ�滻�ɿո�