#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int triangle1, triangle2;

		for (triangle1 = 1; triangle1 <= size; triangle1++)
		{
			for (triangle2 = triangle1; triangle2 < size; triangle2++)
			{
				_putchar(' ');
			}
			for (triangle2 = 1; triangle2 <= triangle1; triangle2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
