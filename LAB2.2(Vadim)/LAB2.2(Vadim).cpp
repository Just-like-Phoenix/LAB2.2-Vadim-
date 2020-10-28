#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define N 6

int main() {
	int massiv_s_chislami[N];
	int choise, num, scaner = 0;

	srand(time(NULL));

	printf("Kakim sposobom zapolnit' massiv?\n1)Sluchajnymi chislami\n2)Ruchnym vvodom\n");
	scanf_s("%d", &choise);

	if (choise == 1)										// заполнение массива случайными числами
	{ 
		for (int i = 0; i < N; i++)
		{
			massiv_s_chislami[i] = -100 + rand() % 200;
		}
	}
	else if (choise == 2)									// ручной ввод
	{ 
		for (int i = 0; i < N; i++)
		{
			printf("massiv_s_chislami[%d] = ", i);
			scanf_s("%d", &num);
			massiv_s_chislami[i] = num;
		}
	}

	for (int i = 0; i < N; i++)								// вывод исходного массива
	{ 
		printf("%d ", massiv_s_chislami[i]);
	}
	printf("\n");

	for (int i = 0; i < N; i++)								// сканирование массива на наличие отрицательных элементов и их последующее зануление
	{
		if (massiv_s_chislami[i] < 0) 
			{
				scaner = 1;
				massiv_s_chislami[i] = 0;
			}
	}
	
	if (scaner == 0)										// вывод изменеённого массива или сообщения о том, что нулевых элеметнов нет
	{
		printf("-----------------------------------------\n");
		printf("---V massive net otricatel'nych chisel---\n");
		printf("-----------------------------------------");
	}
	else if (scaner == 1) 
	{
		for (int i = 0; i < N; i++) 
		{
			printf("%d ", massiv_s_chislami[i]);
		}
	}
}