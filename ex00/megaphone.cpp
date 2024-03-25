#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j=1; j < argc; j++)
		{
			for (long unsigned int i=0; i < strlen(argv[j]); i++)
			{
				if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
					std::cout << (char)toupper(argv[j][i]);
				else
					std::cout << (argv[j][i]);
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
