#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	std::cout << "Çàäà÷à ¹1.\n";
    for (int i = 2; i <= 100; i++) {
        int counter = 0;

        for (int j = 2; j <= i; j++) {

            if (i % j == 0) {
                counter++;
            }
        }
        if (counter <= 2)
            std::cout << i << ' ';
    }
	

    std::cout << "Çàäà÷à ¹2.\n";
    n = 7;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
           
                if (i == j || i + j == n - 1 || i == n / 2 || j == n - 4)
                    std::cout << "* ";
                else
                    std::cout << "  ";

        std::cout << "\n";
    } 
    
return 0;
}
