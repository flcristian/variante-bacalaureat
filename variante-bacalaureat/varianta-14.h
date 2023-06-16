#include "functii-varianta-14.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	int x[10000], n;
	citireProblema3(x, n);

	int i = 0;
	while (i < n) {
		cout << x[i] << " ";
		i++;
		if (i % 5 == 0) {
			cout << endl;
		}
	}
}

// Problema 4

void rezolvareSub3Problema4() {
	for (int i = 10; i <= 99; i++) {
		if (prim(i) && prim(invers(i))) {
			cout << i << " ";
		}
	}
}