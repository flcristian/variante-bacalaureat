#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

// Problema 3

void citireProblema3(int x[], int y[], int& m, int& n) {
	cout << "Introduceti m : ";
	cin >> m;
	cout << "Introduceti n : ";
	cin >> n;
	for (int i = 0; i < m; i++) {
		cout << "Introduceti x[" << i << "] : ";
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		cout << "Introduceti y[" << i << "] : ";
		cin >> y[i];
	}
}

// Problema 4

int countAparitii(int n, int c) {
	int count = 0;
	while (n > 0) {
		if (n % 10 == c) {
			count++;
		}
		n /= 10;
	}
	return count;
}
