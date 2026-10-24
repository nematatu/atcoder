#include <iostream>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;
  std::vector<int> v(n);

  for (auto &elm : v) {
    std::cin >> elm;
  }

  int count = 0;

  for (int i = 0; i < v.size() - 1; i++) {
    if ((v[i] <= k && k <= v[i + 1]) || (v[i] >= k && k >= v[i + 1])) {

      if (i != 0 && v[i] == k) {
        continue;
      }
      count++;
    }
  }
  std::cout << count << '\n';
}
