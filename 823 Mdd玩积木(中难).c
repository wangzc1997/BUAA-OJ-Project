#include<stdio.h>
#define maxn 1000010
int a[maxn];
int n, m;
int k;
inline int read() {
	int k = 0, f = 1;
	char c = getchar_unlocked();
	while (c < '0' || c>'9') {
		if (c == '-')f = -1;
		c = getchar_unlocked();
	}
	while (c >= '0' && c <= '9') {
		k = (k << 1) + (k << 3) + c - 48;
		c = getchar_unlocked();
	}
	return k * f;
}
inline int Bsearch(int k) {
	if (!n)return -1;
	if (n == 1)return a[0] == k ? 0 : -1;
	int lo = 0, hi = n - 1, mi;
	while (lo <= hi) {
		mi = (lo + hi) >> 1;
		if (k == a[mi])return mi;
		if (a[0] <= a[mi]) {
			if (a[0] <= k && k < a[mi])
				hi = mi - 1;
			else
				lo = mi + 1;
		}
		else {
			if (a[mi] < k && k <= a[n - 1])
				lo = mi + 1;
			else
				hi = mi - 1;
		}
	}
	return -1;
}
int main() {
	n = read(), m = read();
	for (int i = 0; i < n; ++i)
		a[i] = read();
	while (m--) {
		k = read();
		puts(Bsearch(k) >= 0 ? "Yes" : "No");
	}
}
