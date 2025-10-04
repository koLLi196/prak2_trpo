

#include <iostream>
struct Complex {
	double r, i;

	Complex add(Complex b) {
		return { r + b.r, i + b.i };
	}
	Complex sub(Complex b) {
		return { r - b.r, i - b.i };
	}
	Complex mul(Complex b) {
		return { r * b.i + i * b.r, r * b.r - i * b.i };
	}

	void print() {
		std::cout << r << " + " << i << "i\n";
	}
};
int main()
{
	Complex a = { 2, -4 };
	Complex b = { 3, -1 };

	std::cout << "a = "; a.print();
	std::cout << "b = "; b.print();

	std::cout << "a + b = "; a.add(b).print();
	std::cout << "a - b = "; a.sub(b).print();
	std::cout << "a * b = "; a.mul(b).print();

	return 0;
}
