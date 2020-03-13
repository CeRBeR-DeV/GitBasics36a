#include <iostream>

const int ROWS = 10;
const int COLS = 10;

void fill_rand_array(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void fill_rand_array(double Arr[ROWS][COLS], const int ROWS, const int COLS);

void sort_array(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void sort_array(double Arr[ROWS][COLS], const int ROWS, const int COLS);

void printf_array(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void printf_array(double Arr[ROWS][COLS], const int ROWS, const int COLS);

double sum_array(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double sum_array(double Arr[ROWS][COLS], const int ROWS, const int COLS);

double average_array(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double average_array(double Arr[ROWS][COLS], const int ROWS, const int COLS);

double min_element_array(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double min_element_array(double Arr[ROWS][COLS], const int ROWS, const int COLS);

double max_element_array(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double max_element_array(double Arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	int Arr[ROWS][COLS];
	double Brr[ROWS][COLS];
	double rez;
	std::cout << "Заполение масивов случайными значениями:" << std::endl;
	fill_rand_array(Arr, ROWS, COLS);
	fill_rand_array(Brr, ROWS, COLS);
	printf_array(Arr, ROWS, COLS);
	std::cout << std::endl;
	printf_array(Brr, ROWS, COLS);
	std::cout << std::endl;
	sort_array(Arr, ROWS, COLS);
	sort_array(Brr, ROWS, COLS);
	std::cout << "Отсортированые массивы : " << std::endl;
	printf_array(Arr, ROWS, COLS);
	std::cout << std::endl;
	printf_array(Brr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Суммы елементов массивов : " << std::endl;
	rez = sum_array(Arr, ROWS, COLS);
	std::cout << rez << std::endl;
	rez = sum_array(Brr, ROWS, COLS);
	std::cout << rez << std::endl;
	std::cout << "Средние арифметические елементов массивов :" << std::endl;
	rez = average_array(Arr, ROWS, COLS);
	std::cout << rez << std::endl;
	rez = average_array(Brr, ROWS, COLS);
	std::cout << rez << std::endl;
	std::cout << "Минимальные елементы масивов :" << std::endl;
	rez = min_element_array(Arr, ROWS, COLS);
	std::cout << rez << std::endl;
	rez = min_element_array(Brr, ROWS, COLS);
	std::cout << rez << std::endl;
	std::cout << "Максимальные елементы масивов :" << std::endl;
	rez = max_element_array(Arr, ROWS, COLS);
	std::cout << rez << std::endl;
	rez = max_element_array(Brr, ROWS, COLS);
	std::cout << rez << std::endl;
}
void fill_rand_array(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 99;
		}
	}
}
void sort_array(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;

				if (k == i)
				{
					l = j + 1;
				}
				else
				{
					l = 0;
				}
				for (; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						int buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void printf_array(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << Arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}
double sum_array(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}
double average_array(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			avg += Arr[i][j];
		}
	}
	avg = avg / (ROWS*COLS);
	return avg;
}
double min_element_array(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min_element = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min_element)
			{
				min_element = Arr[i][j];
			}
		}
	}
	return min_element;
}
double max_element_array(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max_element = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max_element)
			{
				max_element = Arr[i][j];
			}
		}
	}
	return max_element;
}
void fill_rand_array(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = double(rand() % 99) / 10;
		}
	}
}
void sort_array(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;

				if (k == i)
				{
					l = j + 1;
				}
				else
				{
					l = 0;
				}
				for (; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						double buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void printf_array(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << Arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}
double sum_array(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}
double average_array(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			avg += Arr[i][j];
		}
	}
	avg = avg / (ROWS*COLS);
	return avg;
}
double min_element_array(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min_element = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min_element)
			{
				min_element = Arr[i][j];
			}
		}
	}
	return min_element;
}
double max_element_array(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max_element = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max_element)
			{
				max_element = Arr[i][j];
			}
		}
	}
	return max_element;
}