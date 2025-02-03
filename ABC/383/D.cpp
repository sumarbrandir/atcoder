#include <bits/stdc++.h>
using namespace std;

vector<int> generatePrimes(int limit) {
    vector<bool> is_prime(limit + 1, true);
    vector<int> primes;

    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

int countNumbersWith9Divisors(int N) {
    int count = 0;

    int limit = sqrt(N);
    vector<int> primes = generatePrimes(limit);

    for (int i=0; i<primes.size(); i++) {
        long long p8 = (long long)primes[i];
        p8 *= p8; // p^2
        p8 *= p8; // p^4
        p8 *= p8;
        if (p8 > N) break;
        count++;
    }

    int numPrimes = primes.size();
    for (int i = 0; i < numPrimes; i++) {
        for (int j = i + 1; j < numPrimes; j++) {
            long long product = (long long)primes[i] * primes[i] * primes[j] * primes[j];
            if (product > N) break;
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    int result = countNumbersWith9Divisors(N);
    cout << result << endl;

    return 0;
}

