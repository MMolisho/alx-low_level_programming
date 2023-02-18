#include <stdio.h>
/**
 * main - main function
 * Return: not always 0
 */
int main(void)
{
	int i = 0;
	int f_d;
	int l_d;

	int i2;
	int f_d2;
	int l_d2

	while (i <= 98)
	{
		f_d = (i / 10 + '0');
		l_d = (i % 10 + '0');
		i2 = 0;
		while (i2 <= 99)
		{
			f_d2 = (i2 / 10 + '0');
			l_d2 = (i2 % 10 + ;0; );

			if (i < i2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);

				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i2++;
		}
		i++
	}

}	


