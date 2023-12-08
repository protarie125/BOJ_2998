#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
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

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s;
  reverse(s.begin(), s.end());

  const auto r = 0 == s.length() % 3 ? 0 : 3 - s.length() % 3;
  for (auto i = 0; i < r; ++i) {
    s += "0";
  }

  auto oss = ostringstream{};

  for (auto i = s.length(); 3 <= i; i -= 3) {
    const auto t = s.substr(i - 3, 3);
    if ("000" == t) {
      oss << 0;
    } else if ("100" == t) {
      oss << 1;
    } else if ("010" == t) {
      oss << 2;
    } else if ("110" == t) {
      oss << 3;
    } else if ("001" == t) {
      oss << 4;
    } else if ("101" == t) {
      oss << 5;
    } else if ("011" == t) {
      oss << 6;
    } else if ("111" == t) {
      oss << 7;
    }
  }

  cout << oss.str();

  return 0;
}