#include <iostream>
#include <vector>
#include <random>

int main()
{
	const int lowerBound = 1;
	const int upperBound = 100;

	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(lowerBound, upperBound);

	int size = distribution(generator);

	std::vector<int> integers;

	for (unsigned int i = 0; i != size; i++)
	{
		integers.push_back(distribution(generator));
	}

	for (unsigned int i = 0; i != size; i++)
	{
		for (unsigned int j = 0; j != size; j++)
		{
			if (integers.at(j) > integers.at(i))
			{
				std::swap(integers[j], integers[i]);
			}
		}
	}

	return 0;
}