#include <iostream>

int main()
{
    for (double x = 0.1; x <= 1.05; x = x + 0.05) {
        double sum = 0;
        int i = 0;
        bool flag = true;
        while (flag == true) {
            double dx = (pow(-1, i) * pow(x, (2 * i) + 1)) / ((2 * i) + 1);
            if (abs(dx) < 0.0001) {
                flag = false;
            }
            else {
                sum += dx;
            }
            i += 1;
        }
        std::cout << x << " " << sum << "\n";
    }
}