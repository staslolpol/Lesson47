#include "logic.h"
int count_multiples_3(int number, int multiple) {
	return multiple * (1 + number) * number / 2;
}

//int count_multiples_5(int number) {
//	return 5 * (1 + number) *``` number / 2;
//}
//
//int count_multiples_8(int number) {
//	return 8 * (1 + number) * number / 2;
//}
//
//int count_multiples_3_and_5(int number) {
//	return 15 * (1 + number) * number / 2;
//}

int sum(int number) {
	return count_multiples_3(number, 3) +
		count_multiples_3(number, 5) -
		count_multiples_3(number, 15);
}