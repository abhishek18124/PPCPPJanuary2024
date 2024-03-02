#include<iostream>

template <typename T> // template parameter declaration
T max(T a, T b) {
	std::cout << "inside max<T>(T, T) ";
	return a < b ? b : a;
}

int main() {

	std::cout << max<int>(2, 3) << std::endl;
	std::cout << max<double>(1.732, 1.414) << std::endl;

	// template argument deduction

	// std::cout << max<>(2, 3) << std::endl;
	// std::cout << max<>(1.732, 1.414) << std::endl;

	// std::cout << max(2, 3) << std::endl;
	// std::cout << max(1.732, 1.414) << std::endl;

	return 0;
}