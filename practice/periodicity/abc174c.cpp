// consider remainder to compute 777

#include <iostream>
using namespace std;

int find_first_multiple_of_k(int K) {
    int remainder = 0;

    for (int i = 1; i <= K; i++) {
        remainder = (remainder * 10 + 7) % K;

        if (remainder == 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    int K;
    cin >> K;

    int result = find_first_multiple_of_k(K);
    cout << result << endl;

    return 0;
}
