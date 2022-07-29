//////
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
/////

#include <iostream>
int main() {
	int sumOfSquare(0);
	int squareOfSum(0);
	int sum(0);
	for (int i = 1; i < 101; i++)
		sum += i;
	for (int i = 1; i < 101; i++)
		sumOfSquare += i * i;
	squareOfSum = sum * sum;
	std::cout << squareOfSum - sumOfSquare;
}

//result = 25164150