#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Pentru Subiectul 3

// Pentru Problema 3

void citireProblema3(int x[], int& n) {
	cout << "Introduceti n : ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Introduceti x[" << i << "] : ";
		cin >> x[i];
	}
}

void p(int a[], int k, int& max) {
	max = a[0];
	for (int i = 1; i < k; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
}

void modificareProblema3(int x[], int n) {
	for (int k = 1; k <= n; k++) {
		int max;
		p(x, k, max);
		if (max > x[k - 1]) {
			x[k - 1] = max;
		}
	}
}

void afisareProblema3(int x[], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
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

int countPrime(int x[], int n) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (estePrim(x[i])) {
			c++;
		}
	}
	return c;
}