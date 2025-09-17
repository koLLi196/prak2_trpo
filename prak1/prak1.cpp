// prak1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
long factorial(int n) {
	long res = 1;
	for (int i = 1; i <= n; i++) {
		res = res * i;
	}
	return res;
}
int main()
{
	long number;
	std::cout << "enter number: ";
	std::cin >> number;

	int n = 1;
	long fact = 1;
	long predFact = 1;

	while (fact < number) {
		predFact = fact;
		n = n + 1;
		fact = factorial(n);
	}

	long difMin = number - predFact;
	long difMax = fact - number;


	std::cout << "smaller factorial " << predFact << "(difference = " << difMin << ")\n" << std::endl;
	std::cout << "larger factorial " << fact << "(difference = " << difMax << ")\n" << std::endl;

	if (difMin <= difMax) {
		std::cout << "larger factorial " << predFact << std::endl;
	}
	else {
		std::cout << "larger factorial " << fact << std::endl;
	}
	return 0;

}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
