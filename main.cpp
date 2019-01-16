#include <cstdio>
#include <vector>
#include <numeric>
#include <random>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

void benchmark(vector<pii> &vals, int iters);

int main(int argc, char **argv) {
	if (argc != 4) {
		fprintf(stderr, "./bench N [1 - linear, 2 - random] [iters]\n");
		return 1;
	}
	int n, type, iters;
	sscanf(argv[1], "%d", &n);
	sscanf(argv[2], "%d", &type);
	if (type != 1 && type != 2) return 1;
	sscanf(argv[3], "%d", &iters);
	vector<int> k(n), v(n);
	iota(k.begin(), k.end(), 0);
	iota(v.begin(), v.end(), 0);
	if (type == 2) {
		shuffle(v.begin(), v.end(), mt19937{random_device{}()});
	}
	vector<pii> vals(n);
	for (int i = 0; i < n; i++)
		vals[i] = {k[i], v[i]};
	printf("N=%d, %s, %d iters", n, type == 1 ? "linear" : "random", iters);
	benchmark(vals, iters);
	return 0;
}
