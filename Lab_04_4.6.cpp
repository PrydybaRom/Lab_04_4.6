// Lab_04_6.cpp
// <������� ����� ���������>
// ����������� ������ � 4.6
// �����.
// ������ 30

#include <iostream>
#include <cmath>
#include <cmath>
using namespace std;
int main()
{
	double S, SW;
	int i, k;

	//while(�) {� while(�) {�} �}
	S = 0;
	i = 1;
	while (i <= 15)
	{
		SW = 0;
		k = 1;
		while (k <= i)
		{
			SW += cos(1. * i) + sin(1. * k);
			k++;
		}
		S += SW / (1 + SW);
		i++;
	}
	cout << S << endl;

	//do{� do{�} while(�) �} while(�)
	S = 0;
	i = 1;
	do
	{
		SW = 0;
		k = 1;
		do
		{
			SW += cos(1. * i) + sin(1. * k);
			k++;
		} while (k <= i);
		S += SW / (1 + SW);
		i++;
	} while (i <= 15);
	cout << S << endl;

	//for(�; �; i++) {� for(�; �; k++) {�} �}
	S = 0;
	for (i = 1; i <= 15; i++)
	{
		SW = 0;
		for (k = 1; k <= i; k++)
		{
			SW += cos(1. * i) + sin(1. * k);
		}
		S += SW / (1 + SW);
	}
	cout << S << endl;


	//for(�; �; i--) {� for(�; �; k--) {�} �}
	S = 0;
	for (i = 15; i >= 1; i--)
	{
		SW = 0;

		for (k = i; k >= 1; k--)
		{
			SW += cos(1. * i) + sin(1. * k);
	
		}
		S += SW / (1 + SW);
	}
	cout << S << endl;

}
