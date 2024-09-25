#include <stdio.h>
#include <locale.h>
int main()
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	setlocale(LC_ALL, "RUS");
	printf("%c\n%d\n%5.f\n%.9lf", c, i, f, d);
	printf("d%\n.9lf\n",(int)f, f-(int)f);
	printf("%x\n%d\n",(int)c,(int)c);
	printf("%d\n", 1/1);
	int a = 11;
	int b = 3;
	int x = a / b;
	float y = a / b;
	double z = a / b;
	printf("%d\n%3.f\n%.7lf\n", x, y, z);
	printf("%.3f\n%.7lf\n", (float)a / b, (double)a / b);
	int n;
	printf("Введите целое трехзначное число\n");
	scanf_s("%d", &n);
	printf("Последняя цифра - %d\n", n % 10);
	printf("Первая цифра - % d\n", n / 100);
	printf("Сумма цифр - %d\n", (n / 100) + (n % 10) + (n% 100 - (n %10))/10);
	int k;
	printf("Введите целое трехзначное число\n");
	scanf_s("%d", &k);
	printf("Наоборот = %d%d%d\n", k%10, (k % 100 - (k % 10)) / 10, k/100);

	return;
}