#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	int S, H, Vp;
	float T;
	S = 54;
	H = 343;
	Vp = 131;
	T = sqrt(pow(S, 2) + pow(H, 2)) / Vp;
	printf("Результат: %.2f", T);
	return 0;
}