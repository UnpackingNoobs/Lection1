#include <cstdio>
#include <cstring>
#include <iostream>


int main()
{
	char buffer[100] = { 0 };

	printf("Please insert the secret code: ");
	gets_s(&buffer[0], sizeof(buffer));

	if (strcmp(&buffer[0], "123456") == 0)
	{
		printf("\nGood Boy!\n\n");
	}
	else
	{
		printf("\nBad Boy!\n\n");
	}

	system("pause");

	return 0;
}