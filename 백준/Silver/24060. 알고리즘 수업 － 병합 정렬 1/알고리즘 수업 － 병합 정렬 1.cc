#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// global variables
int cnt = 0;
int K;
vector<int> tmp;

void merge_arr(vector<int> &vec, int p, int q, int r) {
    tmp.clear();
    int i = p;
    int j = q + 1;
    int t = 0;

    while (i <= q && j <= r) {
        if (vec[i] <= vec[j]) {
            tmp.push_back(vec[i++]);
        } else {
            tmp.push_back(vec[j++]);
        }
    }

    while (i <= q) {
        tmp.push_back(vec[i++]);
    }
    while (j <= r) {
        tmp.push_back(vec[j++]);
    }

    i = p;
    while (i <= r) {
        cnt++;
        if (cnt == K) {
            cout << tmp[t];
            return;
        }
        vec[i++] = tmp[t++];
    }
}

void merge_sort(vector<int> &vec, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(vec, p, q);
        merge_sort(vec, q + 1, r);
        merge_arr(vec, p, q, r);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, num;
    vector<int> vec;

    cin >> N >> K;
    for (size_t i = 0; i < N; i++) {
        cin >> num;
        vec.push_back(num);
    }

    tmp.resize(N);
    merge_sort(vec, 0, vec.size() - 1);
    if (cnt < K) {
        cout << -1;
    }

    return 0;
}
