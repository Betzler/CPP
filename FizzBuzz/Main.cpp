#include <iostream>

int main()
{
	for (int i = 1; i <= 100; i++)//Basic for loop
	{

		if ((i % 3 == 0) && (i % 5 == 0))//Check to see if there is a remaineder when dividing by both 3 and 5
			std::cout << "FizzBuzz";
		else if (i % 3 == 0)//Check to see if there is a remainder when dividing by 3
			std::cout << "Fizz";
		else if (i % 5 == 0)//Check to see if there is a remainder when dividing by 5
			std::cout << "Buzz";
		else
			std::cout << i;

		std::cout << std::endl;

	}

	return 0;
}
