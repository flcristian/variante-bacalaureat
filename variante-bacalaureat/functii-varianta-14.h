#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

// Problema 3

void citireProblema3(int x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

// Problema 4

int invers(int x) {
	int r = 0;
	while (x > 0) {
		r = r * 10 + x % 10;
		x /= 10;
	}
	return r;
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

bool prim(int x) {
	if (countDiv(x) == 2) {
		return 1;
	}
	return 0;
}