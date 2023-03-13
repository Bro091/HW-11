#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	/*std::cout << "Задача №1.\n";
    for (int i = 2; i <= 100; i++) {
        int counter = 0;

        for (int j = 2; j <= i; j++) {

            if (i % j == 0) {
                counter++;
            }
        }
        if (counter <= 2)
            std::cout << i << ' ';
    }*/
	

    std::cout << "Задача №2.\n";
    n = 7;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
            /*   if (i == j)
                   std::cout << "* ";
                    else
                       if (i + j == n -1)
                     std::cout << "* ";
                        else
                            if (i == n / 2)
                                std::cout << "* ";
                              else
                                if (j == n - 1)
                                    std::cout << "* ";
                                    else
                        std::cout << ' ';*/
                if (i == j || i + j == n - 1 || i == n / 2 || j == n - 4)
                    std::cout << "* ";
                else
                    std::cout << "  ";

        std::cout << "\n";
    } 
    
return 0;
}
