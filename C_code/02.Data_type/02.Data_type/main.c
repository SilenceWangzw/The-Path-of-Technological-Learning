#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ���������ͽ���
//�������и��ָ��������ݣ������Ϊ�˽�������е�����
//�����������д���� -- �����������������е�����
//������ֻ��֪�������ݵ����ͣ���֪����ô��������
//C���԰����ͷ�Ϊ����
//1.�������ͣ�C���Ա���;��еģ����ַ��͡����͡������͡���������
//2.�Զ������ͣ��Լ�����ģ������顢�ṹ�塢ö�١�������


//�������� -- ������ʾ���
//ʹ�ò�������Ҫ����ͷ�ļ�stdbool.h
//C�����й涨0��ʾ�٣���0��ʾ��
//#include<stdbool.h>
//int main()
//{
//	_Bool flag1 = true;//д��1
//	bool flag2 = false;//д��2
//	if (flag1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//�����������͵ĳ���
//ÿһ���������Ͷ����Լ��ĳ��ȣ�ʹ�ò�ͬ���������ͣ��ܹ����������Ȳ�ͬ�ı���
//�����ĳ��Ȳ�ͬ���洢�����ݷ�Χ����������
//sizeof��һ���ؼ��֣�Ҳ�ǲ�������������������������ͳ��ȵģ���λ���ֽ�
//sizeof�������Ĳ��������������ͣ�Ҳ�����Ǳ������߱��ʽ
//int main()
//{
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}
//C���Ա�׼�涨��sizeof(long) >= sizeof(int)


//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);//����ŵ��Ǳ��ʽ����������ſ�ʡ�ԣ����Ͳ���ʡ������
//	return 0;
//}


//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%zd\n", sizeof(s = b + 1));//sizeof������ŵ��Ǳ��ʽ�����ʽ������ʵ����
//	printf("%d\n", s);
//	return 0;
//}




//����signed��unsigned
//C������ʹ��signed��unsigned�ؼ��������ַ��ͺ����͵�
//signed�ؼ��֣���ʾһ�����ʹ��������ţ�������ֵ
//unsigned�ؼ��֣���ʾ�����Ͳ����������ţ�ֻ�ܱ�ʾ���������
//int main()
//{
//	//signed int --- �з��ŵ�int
//	signed int num1 = 100;
//	num1 = -200;
//
//	//unsigned int --- �޷��ŵ�int
//	unsigned int num2 = 100;
//	num2 = 1000;
//	return 0;
//}
//char�������з��Ż����޷����أ������ȷ������ȡ���ڱ�������ʵ��
//�󲿷ֱ������� char == signed char


//int == signed int
//�����з��ŵ�������ӡӦ��ʹ��%d
//�����޷��������Ĵ�ӡӦ��ʹ��%u
//int main()
//{
//	int num = -100;
//	printf("%d\n", num);
//	return 0;
//}




//��������
//1.�����Ĵ���
//int main()
//{
//	unsigned int age;//���ͱ���
//	char ch;//�ַ�����
//	float score;//�����ȸ����ͱ���
//	double weight;//˫���ȸ����ͱ���
//	return 0;
//}



//2.�����ĳ�ʼ��
//����������ͬʱ��ֵ���ͽ�����������ʼ��
//���δ��ʼ���������ŵ������ֵ
//int main()
//{
//	unsigned int age = 10;
//	age = 20;//��ֵ
//	printf("%u\n", age);
//
//	char ch = 'q';
//	printf("%c\n", ch);
//
//	float score = 3.14f;//�������f��Ĭ����double����
//	printf("%f\n", score);
//
//	double weight = 4.5;
//	printf("%lf\n", weight);
//
//	return 0;
//}


//3.�����ķ���
//ȫ�ֱ������ڴ������ⲿ����ı�������ȫ�ֱ���
//�ֲ��������ڴ������ڲ�����ı������Ǿֲ�����
//int num = 100;//ȫ�ֱ���
//int main()
//{
//	int num = 10;//�ֲ�����
//	printf("%d\n", num);
//	return 0;
//}
//ע�����ֲ�������ȫ�ֱ���������ͬ���ֲ���������ʹ��




//�ġ�����������
//������Ҳ�������
// +  -  *  /  %
//int main()
//{
//	printf("%d\n", 33 + 42);//  + ��Ϊ��������33��42��Ϊ���������ֱ�Ϊ����������Ҳ����������� + Ҳ��˫Ŀ������
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	printf("%d\n", a + 23);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 33 - 42);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a - b);
//	printf("%d\n", a - 23);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 5 * 5);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a * b);
//	return 0;
//}


//int main()
//{
//	//���ŵ�����������������õ���Ҳ������
//	printf("%d\n", 9 / 3);
//	printf("%d\n", 9 / 4);
//	printf("%d\n", 10 / 4);
//
//	//��������������һ��С�����õ��ľ���С��
//	printf("%f\n", 10 / 4.0);
//	printf("%f\n", 10.0 / 4);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 10 % 3);
//	int n = 0;
//	if (n % 2 == 0)
//	{
//		printf("ż��\n");
//	}
//	return 0;
//}
//ע��ȡģ�����������������С��


//������ģ�Ĺ��򣺽�����������ɵ�һ���������������ž���
//int main()
//{
//	printf("%d\n", 11 % -5);//1
//	printf("%d\n", -11 % -5);//-1
//	printf("%d\n", -11 % 5);//-1
//	return 0;
//}




//�塢��ֵ������
//int main()
//{
//	int a = 0;//��ʼ��
//	a = 10;//��ֵ,  = �Ǹ�ֵ������
//	return 0;
//}


//1.������ֵ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;//������ֵ�������������θ�ֵ --- ���Ƽ�ʹ��
//	return 0;
//}


//2.���ϸ�ֵ
// +=  -=  *=  /=  %=
//int main()
//{
//	int a = 0;
//	a += 10;// �ȼ��� a = a + 10;
//	printf("%d\n", a);
//	return 0;
//}




//������Ŀ������
// ++  --  +(����)  -(����)
//int main()
//{
//	int a = 5;
//	a++;
//	printf("%d\n", a);//6
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = ++a;//ǰ��++  ---  ��++��ʹ��
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a++;//����++  ---  ��ʹ�ú�++
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", +10);//10
//	printf("%d\n", a);//10
//	printf("%d\n", -a);//-10
//	return 0;
//}




//�ߡ�ǿ������ת��
//int main()
//{
//	int a = (int)3.14; //��3.14ǿ��ת����int���ͣ������������֣�С�����ֶ���
//	printf("%d\n", a);
//
//	return 0;
//}




//�ˡ�printf��scanf����
//1.printf
//print -- ��ӡ     f -- format -- ��ʽ
//int main()
//{
//	printf("Hello World\n");
//	printf("abc\ndef");
//	return 0;
//}


//ռλ��
//printf()����������ı���ָ��ռλ��
//��νռλ�����������λ�ÿ���������ֵ����
//%d -- ʮ��������
//int main()
//{
//	printf("There are %d apples\n", 3);
//	return 0;
//}


//%s -- �������һ���ַ���
//int main()
//{
//	printf("%s will come tonight\n", "lisi");
//	printf("%s will come tonight\n", "wangwu");
//	return 0;
//}


//���ռλ��
//int main()
//{
//	printf("%s says it is %d o'clock\n", "lisi", 10);
//	printf("%s says it is %d o'clock\n", "cuihua", 10);
//	return 0;
//}
//printf()������ռλ����һһ��Ӧ��


//%c -- ��ӡ�ַ�
//int main()
//{
//	printf("this is %c\n", 'A');
//	return 0;
//}


//int main()
//{
//	printf("%hd\n", 100);//%hd -- ʮ���ƶ�����
//	printf("%ho\n", 100);//%ho -- �˽��ƶ�����
//	printf("%x\n", 15);//%x -- ʮ������
//}


//�޶����
//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);//%5d -- �������5λ�������򲹿ո�Ĭ�����Ҷ���
//	printf("%5d\n", 123456);//ָ������С��ȣ�������ֱ�Ӵ�ӡ
//	printf("%-5d\n", 123);//�����
//	return 0;
//}


// %f��%lf�ڴ�ӡ��ʱ��С�����Ĭ���Ǵ�ӡ6λ
//int main()
//{
//	printf("%lf\n", 123.45);
//	printf("%12lf\n", 123.45);
//	return 0;
//}


//�޶�������
//int main()
//{
//	printf("%d\n", 123);//+123
//	printf("%d\n", -123);//-123
//
//	printf("%+d\n", 123);
//	printf("%+d\n", -123);
//	return 0;
//}


//�޶�С����λ
//int main()
//{
//	printf("%.2lf\n", 123.45);// %.2lf -- ��ӡ��λ
//	printf("%.3lf\n", 123.45);
//	printf("%.1lf\n", 123.45);
//	return 0;
//}


//���ʹ��
//int main()
//{
//	printf("%12.1lf\n", 123.45); //%12.1lf -- ռ12λ��С�������1λ
//	printf("%*.*lf\n", 12, 1, 123.45);//д��2
//	return 0;
//}


//��������ַ���
//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("%.3s\n", "abcdef");//��ӡǰ3���ַ�
//	return 0;
//}


//2.scanf
//int main()
//{
//	int score = 0;
//	printf("������ɼ�:> ");
//	//& -- ȡ��ַ������
//	scanf("%d", &score);//���������scanf�����У�ռλ���ĺ���Ĳ�����Ҫ���ǵ�ַ
//	printf("�ɼ���:%d\n", score);
//	return 0;
//}


//�����������
//scanf����ռλ��ʱ�����Զ����˿հ��ַ��������ո��Ʊ�������з���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f1 = 0.0;
//	float f2 = 0.0;
//
//	scanf("%d %d %f %f", &a, &b, &f1, &f2);
//	printf("%d %d %f %f\n", a, b, f1, f2);
//	return 0;
//}


//int main()
//{
//	int x;
//	float y;
//
//	//�û�����  -13.45e12# 0
//	scanf("%d", &x);//-13
//	printf("%d\n", x);
//	scanf("%f", &y);//0.45e12  --  ���������ڴ��п����޷���ȷ����
//	printf("%f\n", y);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}


//scanf�ķ���ֵ��һ����������ʾ�ɹ���ȡ��������
//���û�ж�ȡ�κ������ƥ��ʧ�ܣ��򷵻�0
//����ڶ�ȡ�κ�����֮ǰ�������˶�ȡ�������������ȡ��ȡ���ļ���β���򷵻س���EOF(-1)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int ret = scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	printf("%d\n", ret);
//	return 0;
//}


//����%c���⣬�����Զ��������׵Ŀհ��ַ�,%c�����Կհ��ַ�
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);//�����%cǰ����Ͽո񣬾ͻ������հ��ַ�
//	printf("xxxx%cyyyy\n", ch);
//	return 0;
//}


//%s -- ���Ĺ����ǣ��ӵ�ǰ��һ���ǿհ��ַ���ʼ����ֱ�������հ��ַ�
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);//arr�����������������ǵ�ַ
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr[5] = { 0 };
//	scanf("%4s", arr);//��ӡ4����������ַ���������
//	printf("%s\n", arr);
//	return 0;
//}


//��ֵ���Է�
//ֻҪ��*�����κ�ռλ���ٷֺŵĺ��棬��ռλ���Ͳ��᷵��ֵ�������󽫱�����
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d-%d-%d", &year, &month, &day);
//	printf("%d %d %d\n", year, month, day);
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//	printf("%d %d %d\n", year, month, day);
//	return 0;
//}