#include <iostream>
#include <vector>
#include <array>

int main()
{
	int n = 0;
	int cnt = 0;
	std::cin >> n;
	std::array<int, 2> F = {0,0};
	char p = 'O';
	for (int i(0); i < n; ++i) {
		char k;
		std::cin >> k;
		char u, r;
		u = 'U';
		r = 'R';
		if (k == u) {
			if ((F[1] == F[0]) and (p == 'U')) {
				cnt += 1;
			}
			F[1] += 1;
		}
		else if (k == r) {
			if ((F[1] == F[0]) and (p == 'R')) {
				cnt += 1;
			}
			F[0] += 1;
		}
		p = k;
	}
	std::cout << cnt;
}