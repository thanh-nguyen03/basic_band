#include <stdio.h>

#define abs(a) a > 0 ? a : -a

int main() {
	int s, x1, x2, t1, t2, c, d;
	scanf("%d%d%d%d%d%d%d", &s, &x1, &x2, &t1, &t2, &c, &d);
	int case1 = (x2 - x1) * t2;
	if (case1 < 0) case1 = - case1;
	int case2 = 0;

	if (c < x1) {
		if (d == 0) {
			case2 += (c + x1) * t1;
			d = 1;
		}
		else case2 += (x1 - c) * t1;
		c = x1;
	}
	else if (c > x1) {
		if (d == 1) {
			case2 += (s - c + s - x1) * t1;
			d = 0;
		}
		else case2 += (c - x1) * t1;
		c = x1;
	}
	if (c < x2) {
		if (d == 0) case2 += (c + x2) * t1;
		else case2 += (x2 - c) * t1;
	}
	else if (c > x2) {
		if (d == 1) case2 += (s - c + s - x2) * t1;
		else case2 += (c - x2) * t1;
	}

	if (case1 < case2) printf("%d", case1);
	else printf("%d", case2);
}