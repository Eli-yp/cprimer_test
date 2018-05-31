#include<iostream>

int main()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	int i = v1;
	while (i <= v2)
	{
		std::cout << i << " ";
		++i;
	}
	std::cout << std::endl;

	return 0;
}
