#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

// Problema 3

int countDiv(int n) {
	int c = 0;
	for (int i = 1; i * i < n; i++) {
		if (n % i == 0) {
			c++;
			if (i * i != n) {
				c++;
			}
		}
	}
	return c;
}

bool estePrim(int n) {
	if (countDiv(n) == 2) {
		return true;
	}
	return false;
}

int primulPrimMaiMic(int n) {
	for (int i = n; i > 1; i--) {
		if (estePrim(i)) {
			return i;
		}
	}
	return -1;
}

int primulPrimMaiMare(int n) {
	for (int i = n; i < 30001; i++) {
		if (estePrim(i)) {
			return i;
		}
	}
	return -1;
}

int i_prim(int n) {
	return primulPrimMaiMare(n) - primulPrimMaiMic(n);
}

// Problema 4

void citireProblema4(int x[], int& n, int& k) {
	ifstream f("input.txt");
	f >> k;
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

int sumaNextKTermeni(int x[], int n, int k, int j) {
	int s = 0;
	for (int i = j; i < n && i - j < k; i++) {
		s += x[i];
	}
	return s;
}

int celMaiMicIndiceMaxSuma(int x[], int n, int k) {
	int max = 0, indice = -1;
	for (int i = 0; i < n; i++) {
		int s = sumaNextKTermeni(x, n, k, i);
		if (s > max) {
			max = s;
			indice = i;
		}
	}
	return indice + 1;
}