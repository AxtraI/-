#include <iostream.h>

int main(void)
{
	int		c, d, k, j, n, z;

	cout << "Enter k: "; cin >> k;

	c = n = 0;
	do {
		n++;
		for (d = 1, j = n; j /= 10; d++);
		c += d;
	} while (c < k);
	for (z = c - k; z--; n /= 10);

	cout << "Result: " << n % 10 << endl;
	return 0;
}