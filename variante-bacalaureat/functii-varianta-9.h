#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Pentru Subiectul 3

// Pentru Problema 2

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
		if (s[i] >= s[i + 1]) {
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
	for (int i = 1; i < 10; i++) {
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

// Pentru Problema 3

void citireProblema3(int x[100]) {
	ifstream f("input.txt");
	for (int i = 0; i < 100; i++) {
		f >> x[i];
	}
	f.close();
}

void s2(int& a, int& b) {
	int r = a;
	a = b;
	b = r;
}

int primulNumarPar(int x[], int p, int q) {
	for (int i = p; i <= q; i++) {
		if (x[i] % 2 == 0) {
			return x[i];
		}
	}
	return -1;
}

int ultimulNumarImpar(int x[], int p, int q) {
	for (int i = q; i >= p; i--) {
		if (x[i] % 2 == 1) {
			return x[i];
		}
	}
	return -1;
}

void s1(int x[100], int& p, int& q) {
	if (p > q) {
		s2(p, q);
	}

	int r1 = p, r2 = q;
	p = primulNumarPar(x, r1, r2);
	q = ultimulNumarImpar(x, r1, r2);
}