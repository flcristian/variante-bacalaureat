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

void rezolvareSub3Problema3() {
	int x[100], n;
	citireProblema3(x, n);

	int y[100], m = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] / 100 > 0) {
			y[m] = x[i];
			m++;
		}
	}
	if (m == 0) {
		cout << "NU EXISTA";
	}
	else {
		bubbleSortSentinel(y, m);
		for (int i = 0; i < m; i++) {
			cout << y[i] << " ";
		}
	}
}


// Problema 4

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

	for (int i = 4; i > - 1; i--) {
		while (f[i] > 0) {
			n = n * 10 + (i * 2 + 1);
			f[i]--;		
		}
	}

	return n;
}

void rezolvareSub3Problema4() {
	int a, b;
	cout << "Introduceti a : ";
	cin >> a;
	cout << "Introduceti b : ";
	cin >> b;

	cout << "a) " << cif(a, b) << endl;
	cout << "b) " << formareNumar(a) << endl;
}