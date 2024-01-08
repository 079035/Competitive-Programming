#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> stairs(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        std::cin >> stairs[i];
    }
    std::vector<int> score(n + 1, 0);
    score[1] = stairs[1];
    score[2] = stairs[1] + stairs[2];
    for (int i = 3; i <= n;++i){
        score[i] = std::max(stairs[i] + score[i - 2], stairs[i] + stairs[i - 1] + score[i - 3]);
    }
    std::cout << score[n] << '\n';
    exit(0);
}