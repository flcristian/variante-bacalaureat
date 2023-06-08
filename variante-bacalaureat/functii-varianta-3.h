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

int cif(int a, int b) {
	int c = 0;
	while (a > 0) {
		if (a % 10 == b) {
			c++;
		}
		a /= 10;
	}
	return c;
}

int formareNumar(int a) {
	int n = 0, f[5]{};

	while (a > 0) {
		int c = a % 10;
		if (c % 2 == 1 && c != 0) {
			c--;
			c /= 2;
			f[c]++;
		}
		a /= 10;
	}

	for (int i = 4; i > -1; i--) {
		while (f[i] > 0) {
			n = n * 10 + (i * 2 + 1);
			f[i]--;
		}
	}

	return n;
}