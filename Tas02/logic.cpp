#include "logic.h"

bool is_perfect_number(int number) {


	/*if (number % 2 == 1) {
		return false;
	}

	int sum = 1;
	int num = number / 2;

	for (int i = 0; i < num; i++)
	{
		if (number % i == 0) {
			sum += i;
		}
	}

	return sum == number;*/

	if (number % 2 == 1) {
		return false;
	}
	int size = 8;
	int array[]{ 6, 28, 8128, 33550336,
		8589569056, 137438691328,
		2305843008139952128 };

	for (int i = 0; i < size; i++)
	{
		if (number == array[i]) {
			return true;
		}
	}

	return false;
}