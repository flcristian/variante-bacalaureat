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

int suma(int x[], int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += x[i];
	}
	return s;
}

void tiparProblema3(int x[], int n) {
	ofstream f("output.txt");
	while (n > 0) {
		f << suma(x, n) << endl;
		n--;
	}
	f.close();
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

int numar(int n) {
	int r = n, c = 0;
	while (n > 0) {
		n /= 2;
		c++;
	}
	int p = pow(2, c);
	if (p / 2 >= r) {
		p /= 2;
	}
	return p;
}

void tiparProblema4(int x[], int n) {
	ofstream f("output.txt");
	for (int i = 0; i < n; i++) {
		f << numar(x[i]) << " ";
	}
	f.close();
}