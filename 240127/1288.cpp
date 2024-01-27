#include <iostream>
using namespace std;

int N, result;
short visited = 0;

void init() {
    result = 0;
    visited = 0;
}

void run(int n) {
    while (visited != 1023) {
        result = n;
        while (n) {
            visited |= (1 << (n % 10));
            n /= 10;
        }
        n = result + N;
    }
}

int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        init();
        cin >> N;
        run(N);
        printf("#%d %d\n", tc, result);
    }

    return 0;
}
