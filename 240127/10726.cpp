#include <iostream>
using namespace std;

int N, M;

int main() {
	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		
		cin >> N >> M;
		int mask = (1 << N) - 1;

		if ((mask & M) == mask)	cout << "#" << tc << " ON\n";
		else cout << "#" << tc << " OFF\n";
	}
}