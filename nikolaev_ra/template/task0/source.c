#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() {
	double x1, y1, x2, y2, radius1, radius2;
	double distanceBetweenCenters;	

	// ��������� �������� �����
	setlocale(LC_ALL, "Russian");

	// ������ ������� scanf ������������ scanf_s �� �������� ����������� Visual Studio 

	printf("������� ���������� � ������ ������ �����: ");
	scanf_s("%lf%lf%lf", &x1, &y1, &radius1);

	printf("������� ���������� � ������ ������ �����: ");
	scanf_s("%lf%lf%lf", &x2, &y2, &radius2);


	// ���������� ����� �������� �����������
	distanceBetweenCenters = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));


	// ���������� �� ����� ����� ����� (2 ��������� ������)
	if (distanceBetweenCenters > (radius1 + radius2))
	{
		printf("���������� �� ����� ����� �����, ��� ���� ���� �� ��� �� ��������� ������ ������");
	};

	if (distanceBetweenCenters < (fabs(radius1 - radius2)))
	{
		printf("���������� �� ����� ����� �����, ��� ���� ���� �� ��� ��������� ������ ������");
	};


	// ���������� ����� ���� ����� ����� (2 ��������� ������)
	if (distanceBetweenCenters == (radius1 + radius2))
	{
		printf("���������� ����� ���� ����� ����� (�������� ������� �������)");
	};
	
	// ����� ������ �������������� �������� �� ��, �� ��������� �� ����������
	if (distanceBetweenCenters == fabs(radius1 - radius2) && ((radius1 != radius2) || (distanceBetweenCenters != 0)))
	{
		printf("���������� ����� ���� ����� ����� (�������� ���������� �������)");
	};


	// ���������� ����� ��� ����� ����� (������������)
	if ((fabs(radius1 - radius2) < distanceBetweenCenters) && (distanceBetweenCenters < (radius1 + radius2)))
	{
		printf("���������� ����� ��� ����� ����� (������������)");
	}


	// ���������� ���������
	if ((distanceBetweenCenters == 0) && (radius1 == radius2))
	{
		printf("���������� ���������");
	}

	// ���������� ������� getch, ����� ������� ����������� �� �����, � ����� ������� �����-������ �������
	_getch();
}