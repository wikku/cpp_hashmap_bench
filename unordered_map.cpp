#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

void benchmark(vector<pii> &vals, int iters) {
	unordered_map<int, int> test;
	test.reserve(vals.size());
	for (int t = 0; t < iters; t++) {
		for (auto i : vals) {
			test[i.first] = test[i.first] + i.second * t;
		}
	}
}
