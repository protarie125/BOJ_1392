#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N, Q;
vl lst(10000 + 1, -1);

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N >> Q;
  ll i = 0;
  ll k = 1;
  while (0 < (N--)) {
    ll B;
    cin >> B;

    for (auto j = 0; j < B; ++j) {
      lst[i] = k;
      ++i;
    }

    ++k;
  }

  while (0 < (Q--)) {
    ll q;
    cin >> q;

    cout << lst[q] << '\n';
  }

  return 0;
}