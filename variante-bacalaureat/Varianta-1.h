#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

// Problema 1

void tipar(int s[]) {
	for (int i = 0; i < 4; i++) {
		char x = 'a';
		x += s[i];
		cout << x;
	}
	cout << endl;
}

bool valid(int s[], int k) {
	for (int i = 0; i < k; i++) {
		if (s[i] == 0 && s[i + 1] == 0) {
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
	for (int i = 0; i < 4; i++) {
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

void rezolvareSub3Problema1() {
	int s[100];
	back(s, 0);
}

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

void rezolvareSub3Problema3() {
	int x[100], d, n;
	citireProblema3(x, d);
	cout << "Introduceti n : ";
	cin >> n;

	for (int i = 0; i < d; i++) {
		if (x[i] % n == 0) {
			cout << x[i] << " ";
		}
	}
}

// Problema 4

void citireProblema4(int x[], int& n) {
	cout << "Introduceti n : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Introduceti x[" << i << "] : ";
		cin >> x[i];
	}
}

int sub(int v[], int n, int a) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == a) {
			c++;
		}
	}
	return c;
}

bool diferiteDouaCateDoua(int x[], int n) {
	for (int i = 0; i < n - 1; i++) {
		if (x[i] == x[i + 1]) {
			return 0;
		}
	}
	return 1;
}

void rezolvareSub3Problema4() {
	int x[100], n, a;
	citireProblema4(x, n);
	cout << "Introduceti a : ";
	cin >> a;
	cout << "a) " << sub(x, n, a) << endl;
	cout << "b) ";
	if (diferiteDouaCateDoua(x, n)) {
		cout << "DA";
	}
	else {
		cout << "NU";
	}
	cout << endl;
}

// ? ? ?