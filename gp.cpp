#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef gp_hash_table<int, int, hash<int>> ht;
typedef pair<int, int> pii;

void benchmark(vector<pii> &vals, int iters) {
	ht test;
	for (int t = 0; t < iters; t++) {
		for (auto i : vals) {
			test[i.first] = test[i.first] + i.second * t;
		}
	}
}
