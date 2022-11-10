#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* p, const int size, const int Min, const int Max)
{
	for (int i = 0; i < size; i++)
		p[i] = Min + rand() % (Max - Min + 1);
}
void Vyvid(int* p, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << p[i];
	cout << endl;
}

void Create1(int* p, const int size)
{
	for (int i = 0; i < size; i++)
		if (p[i] % 2 != 0 && i % 13 != 0)
			
			cout << setw(4) << p[i];
			
			
	cout << endl;
}

int Kilkist(int* p, const int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
		if (p[i] % 2 != 0 && i % 13 != 0)
			k++;
		
	return k;
}

int Sum(int* p, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (p[i] % 2 != 0 && i % 13 != 0)
			S += p[i];
	return S;
	cout << endl;
}

void Zamina(int* p, const int size)
{
	for (int i = 0; i < size; i++)
		if (p[i] % 2 != 0 && i % 13 != 0)
			p[i] = 0;

	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int p[n];
	int Min =15;
	int Max =94;

	Create(p, n, Min, Max);
	Vyvid(p, n);
	Create1(p, n);
	
	int k = Kilkist(p, n);
	cout << "Kilkist = " << k << endl;
	cout << "S = " << Sum(p, n) << endl;

	Zamina(p, n);
	Vyvid(p, n);
	
}