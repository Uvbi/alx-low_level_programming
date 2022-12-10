#include <stdio.h>
/**
 * main - print 3 digit combination numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int m = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (m <= '9')
			{
				if (i < j && j < m)
				{
					putchar(i);
					putchar(j);
					putchar(m);
					if (!(i == '7' && j == '8' && m == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				m++;
			}
			m = '0';
			j++;
		}
		j = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
