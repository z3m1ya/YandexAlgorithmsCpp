#include <iostream>

int main()
{
	int map[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			std::cin >> map[i][j];

	int n1 = 0, n2 = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (map[i][j] == 1)
				n1++;
			else
				if (map[i][j] == 2)
					n2++;

	//std::cout << n1 << ' ' << n2 << " \n";

	if ((n1 - n2 > 1) || (n1 - n2 < 0) ) {
		std::cout << "NO";
		return 0;
	}

	if ((((map[0][0] == 2) && (map[0][1] == 2) && (map[0][2] == 2)) ||
		((map[0][0] == 2) && (map[1][0] == 2) && (map[2][0] == 2)) ||
		((map[0][0] == 2) && (map[1][1] == 2) && (map[2][2] == 2)) ||
		((map[0][1] == 2) && (map[1][1] == 2) && (map[2][1] == 2)) ||
		((map[0][2] == 2) && (map[1][1] == 2) && (map[2][0] == 2)) ||
		((map[0][2] == 2) && (map[1][2] == 2) && (map[2][2] == 2)) ||
		((map[1][0] == 2) && (map[1][1] == 2) && (map[1][2] == 2)) ||
		((map[2][0] == 2) && (map[2][1] == 2) && (map[2][2] == 2))) && (
		((map[0][0] == 1) && (map[0][1] == 1) && (map[0][2] == 1)) ||
		((map[0][0] == 1) && (map[1][0] == 1) && (map[2][0] == 1)) ||
		((map[0][0] == 1) && (map[1][1] == 1) && (map[2][2] == 1)) ||
		((map[0][1] == 1) && (map[1][1] == 1) && (map[2][1] == 1)) ||
		((map[0][2] == 1) && (map[1][1] == 1) && (map[2][0] == 1)) ||
		((map[0][2] == 1) && (map[1][2] == 1) && (map[2][2] == 1)) ||
		((map[1][0] == 1) && (map[1][1] == 1) && (map[1][2] == 1)) ||
		((map[2][0] == 1) && (map[2][1] == 1) && (map[2][2] == 1)) )) {
		std::cout << "NO";
		return 0;
	};

	if (((map[0][0] == 2) && (map[0][1] == 2) && (map[0][2] == 2)) ||
		((map[0][0] == 2) && (map[1][0] == 2) && (map[2][0] == 2)) ||
		((map[0][0] == 2) && (map[1][1] == 2) && (map[2][2] == 2)) ||
		((map[0][1] == 2) && (map[1][1] == 2) && (map[2][1] == 2)) ||
		((map[0][2] == 2) && (map[1][1] == 2) && (map[2][0] == 2)) ||
		((map[0][2] == 2) && (map[1][2] == 2) && (map[2][2] == 2)) ||
		((map[1][0] == 2) && (map[1][1] == 2) && (map[1][2] == 2)) ||
		((map[2][0] == 2) && (map[2][1] == 2) && (map[2][2] == 2))) {
		if (n1 == n2)
			std::cout << "YES";
		else
			std::cout << "NO";
		return 0;
	};

	if (((map[0][0] == 1) && (map[0][1] == 1) && (map[0][2] == 1)) ||
		((map[0][0] == 1) && (map[1][0] == 1) && (map[2][0] == 1)) ||
		((map[0][0] == 1) && (map[1][1] == 1) && (map[2][2] == 1)) ||
		((map[0][1] == 1) && (map[1][1] == 1) && (map[2][1] == 1)) ||
		((map[0][2] == 1) && (map[1][1] == 1) && (map[2][0] == 1)) ||
		((map[0][2] == 1) && (map[1][2] == 1) && (map[2][2] == 1)) ||
		((map[1][0] == 1) && (map[1][1] == 1) && (map[1][2] == 1)) ||
		((map[2][0] == 1) && (map[2][1] == 1) && (map[2][2] == 1))) {
		if (n1 == n2 + 1)
			std::cout << "YES";
		else
			std::cout << "NO";
		return 0;
	};
	std::cout << "YES";
}