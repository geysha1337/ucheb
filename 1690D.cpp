#include <iostream>
#include <string>
#include <array>

int main() {
	int t(0);
	std::cin >> t;
	for (int i(0);i < t;++i) {
		int n(0), k(0);
		std::cin >> n;
		std::cin >> k;
		char s;
		std::cin >> s;
		int t1(n - k + 1);
		int min = 9999;
		for (int j(0);j < t1;++j) {
			int cnt = s.count(j, k + j, "W");
			if (cnt < min) {
				min = cnt
			}
		}
		std::cout << min;
	}
}