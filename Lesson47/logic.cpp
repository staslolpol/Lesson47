#include "logic.h"

int get_max_digit(int number) {
	int value = number % 10;

	while (number > 0) {
		number /= 10;
		int digit = number % 10;

		if (digit == 9) {
			value == digit;
			break;
		}

		if (digit > value) {
			value = digit;
		}

	}
	return value;
}
int get_min_digit(int number) {
	int value = number % 10;

	while (number > 0) {
		number /= 10;
		int digit = number % 10;

		if (digit == 0) {
			value == digit;
			break;
		}

		if (digit < value) {
			value = digit;
		}

	}
	return value;
}