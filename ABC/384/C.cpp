#include <bits/stdc++.h>
using namespace std;

string generateName(int bitmask) {
    string name = "";
    if (bitmask & (1 << 0)) name += 'A';
    if (bitmask & (1 << 1)) name += 'B';
    if (bitmask & (1 << 2)) name += 'C';
    if (bitmask & (1 << 3)) name += 'D';
    if (bitmask & (1 << 4)) name += 'E';
    return name;
}

int main() {
    vector<int> scores(5);
    for (int i = 0; i < 5; ++i) {
        cin >> scores[i];
    }

    vector<pair<int, string>> participants;

    for (int i = 1; i < 32; ++i) {
        string name = generateName(i);
        int totalScore = 0;

        for (int j = 0; j < 5; ++j) {
            if (i & (1 << j)) {
                totalScore += scores[j];
            }
        }

        participants.push_back({-totalScore, name});
    }

    // Sort participants: first by score (descending), then by name (lexicographically)
    sort(participants.begin(), participants.end());
    for (const auto &participant : participants) {
        cout << participant.second << endl;
    }
    return 0;
}
