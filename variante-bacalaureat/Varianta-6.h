#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

// Problema 2

void tipar(int s[]) {
	for (int i = 0; i < 3; i++) {
		cout << s[i];
	}
	cout << endl;
}

bool valid(int s[], int k) {
	for (int i = 0; i < k; i++) {
		if (s[i] % 2 == s[i + 1] % 2) {
			return 0;
		}
		if (s[i] == s[k]) {
			return 0;
		}
	}
	return 1;
}

bool solutie(int k) {
	if (k == 2) {
		return 1;
	}
	return 0;
}

void back(int s[], int k) {
	for (int i = 0; i < 10; i++) {
		if (k == 0 && i == 0) {
			i++;
		}
		s[k] = i;
		if (valid(s, k)) {
			if (solutie(k)) {
				tipar(s);
			}
			else {
				back(s, k + 1);
			}
		}
	}
}

void rezolvareSub3Problema2() {
	int s[100];
	back(s, 0);
}

// Problema 3

void s1(int& a, int& b) {
	int r = a;
	a = b;
	b = r;
}

int s2(int a[], int p, int q) {
	for (int i = p; i <= q; i++) {
		if (a[i] % 5 == 0) {
			return a[i];
		}
	}
	return -1;
}

void rezolvareSub3Problema3() {
	int a[100] = { 8546, 307, 4304, 3641, 3762, 4203, 1583, 6551, 8822, 4475, 1961, 7723, 6745, 5942, 1602, 2209, 282, 9112, 7581, 1829, 2410, 6483, 5117, 8445, 639, 6031, 4162, 9265, 3715, 8659, 646, 6917, 4365, 8819, 5874, 6149, 1167, 8592, 3706, 2103, 625, 6569, 1181, 3837, 4168, 1106, 4577, 9316, 3123, 3019, 5108, 1303, 3651, 6544, 9174, 6166, 8965, 8895, 8461, 7632, 3921, 6976, 5011, 9744, 8149, 2513, 2791, 8519, 9906, 7981, 6986, 4015, 8677, 6649, 7053, 876, 9615, 187, 8454, 9875, 9489, 4379, 3210, 3564, 2749, 6896, 6510, 2372, 5362, 5866, 7454, 3200, 1471, 1327, 5773, 3118, 6640, 2661, 7483, 5649 };
	int p, q;
	cout << "Introduceti p : ";
	cin >> p;
	cout << "Introduceti q : ";
	cin >> q;

	if (p > q) {
		s1(p, q);
	}
	cout << s2(a, p, q) << endl;
}