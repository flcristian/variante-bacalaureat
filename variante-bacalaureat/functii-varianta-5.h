#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Pentru Subiectul 3

// Pentru Problema 1

void tipar(int s[]) {
	for (int i = 0; i < 4; i++) {
		cout << s[i];
	}
	cout << endl;
}

bool valid(int s[], int k) {
	for (int i = 0; i < k; i++) {
		if (s[i] == s[k]) {
			return 0;
		}
	}
	return 1;
}

bool solutie(int k) {
	if (k == 3) {
		return 1;
	}
	return 0;
}

void back(int s[], int k) {
	for (int i = 1; i < 6; i++) {
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

// Pentru Problema 4

void citireProblema4(int x[], int& n) {
	cout << "Introduceti n : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Introduceti x[" << i << "] : ";
		cin >> x[i];
	}
}

int countDiv(int x) {
	int c = 0;
	for (int i = 1; i * i <= x; i++) {
		if (x % i == 0) {
			c++;
			if (i * i != x) {
				c++;
			}
		}
	}
	return c;
}

bool estePrim(int x) {
	if (countDiv(x) == 2) {
		return 1;
	}
	return 0;
}

int f(int a) {
	for (int i = 2; i <= a; i++) {
		if (a % i == 0 && estePrim(i)) {
			return i;
		}
	}
	return -1;
}