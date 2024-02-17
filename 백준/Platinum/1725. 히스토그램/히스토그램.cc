#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
vector<long long int> histogram;

// using divide and conquer
long long int maxRectangle(int left, int right) {
    // base case
    if (left == right) {
        return histogram[left];
    }

    // divide
    int mid = (left + right) / 2; 
    long long int result = max(maxRectangle(left, mid), maxRectangle(mid + 1, right));
    int lo = mid, hi = mid + 1;
    long long int height = min(histogram[lo], histogram[hi]);
    result = max(result, height * 2);

    // conquer
    while (left < lo || hi < right) {
        if (hi < right && (lo == left || histogram[lo - 1] < histogram[hi + 1])) {
            hi++;
            height = min(height, histogram[hi]);
        } else {
            lo--;
            height = min(height, histogram[lo]);
        }
        result = max(result, height * (hi - lo + 1));
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int numOfRectangles;
    cin >> numOfRectangles;
    histogram.resize(numOfRectangles);
    for (int i = 0; i < numOfRectangles; i++) {
        cin >> histogram[i];
    }
    cout << maxRectangle(0, numOfRectangles - 1) << endl;
    
    return 0;
}