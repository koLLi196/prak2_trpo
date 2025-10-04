#include <iostream>


struct Movie {
	char title[100];
	char director[100];
	float year;
};
int main()
{
	Movie film;

	std::cout << "entry name film: ";
	std::cin.getline(film.title, 100);

	std::cout << "entry name director: ";
	std::cin.getline(film.director, 100);

	std::cout << "entry year release: ";
	std::cin >> film.year;

	if (film.year < 2000) {
		std::cout << "\n" << film.title << " " << film.director << "" << " - this film is classic" << std::endl;
	}
	else {
		std::cout << "\n " << film.title << " " << film.director << "" << " - this film is not classic" << std::endl;
	}

	return 0;
}

