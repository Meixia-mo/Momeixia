#include"stdafx.h"
#include"w32.h"
int factorial(int n) {
	int i = 1;
	int sum = 1;
	for (i = 1; i <= n;i++) {
		sum = sum*i;
	}
	return sum;
};
int F1::GetA() {
	return a + 1;
};
float FAC::convert(float deg) {
	float result = deg / 180;
	return result;
}