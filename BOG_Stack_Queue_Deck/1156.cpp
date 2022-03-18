//1158을 풀어야 되는데 잘 못 검색했다

#include <iostream>

int main() {
	int D, N1, N2, C1, C2, Tc;
	scanf_s("%d %d %d %d %d %d", &D, &N1, &N2, &C1, &C2, &Tc);

	int result = 0;
	int toy = 0;

	int* list = new int[D];
	int* toyList = new int[D];
	for (int i = 0; i < D; i++) {
		scanf_s("%d", &list[i]);
	}

	result += Tc * list[0];
	toy += list[0];
	toyList[0] = list[0];

	if (N1 < N2) {
		result
	}
}