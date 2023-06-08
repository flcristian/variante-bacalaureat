#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Pentru Subiectul 3
 
// Pentru Problema 3

void citireProblema3(int x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void bubbleSortSentinel(int x[], int n) {
	int i = 0;
	bool flag = true;
	while (flag&& i < n) {
		flag = false;
		for (int j = n - 1; j > i; j--) {
			if (x[j] < x[j - 1]) {
				int r = x[j];
				x[j] = x[j - 1];
				x[j - 1] = r;
				flag = true;
			}
		}
		i++;
	}
}

// Pentru Problema 4

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

int countCifre(int x) {
	int c = 0;
	while (x > 0) {
		x /= 10;
		c++;
	}
	return c;
}

int permutare(int x) {
	int r = x % 10;
	x /= 10;
	x = r * pow(10, countCifre(x)) + x;
	return x;
}

bool extraPrim(int x) {
	if (!estePrim(x)) {
		return 0;
	}
	for (int i = 1; i < countCifre(x); i++) {
		x = permutare(x);
		if (!estePrim(x)) {
			return 0;
		}
	}
	return 1;
}

int sumaExponentiPrimi(int x) {
	int i = 2, suma = 0;
	while (i <= x) {
		if (x % i == 0 && estePrim(i)) {
			x /= i;
			suma += i;
		}
		else {
			i++;
		}
	}
	return suma;
}