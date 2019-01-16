#include <bits/stdc++.h>
#include <tr1/unordered_map>

using namespace std;

typedef pair<int, int> pii;

void benchmark(vector<pii> &vals, int iters) {
	tr1::unordered_map<int, int> test;
	for (int t = 0; t < iters; t++) {
		for (auto i : vals) {
			test[i.first] = test[i.first] + i.second * t;
		}
	}
}
