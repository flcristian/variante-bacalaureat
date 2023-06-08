#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Pentru Subiectul 3

// Pentru Problema 1

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

// Pentru Problema 3

void primeleNPare(int x[], int n) {
	for (int i = 0; i < n; i++) {
		x[i] = i * 2;
	}
}

void tiparProblema3(int x[], int n) {
	ofstream f("output.txt");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			f << x[j] << " ";
		}
		f << endl;
	}
	f.close();
}

// Pentru Problema 4

int p1(int n) {
	int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

int p2(int n) {
	return n / 10;
}

int nrCifreEgaleCu0(int n) {
	int c = 0;
	while (n > 0) {
		if (p1(n) == p1(p2(n))) {
			c++;
		}
		n = p2(n);
	}
	return c;
}