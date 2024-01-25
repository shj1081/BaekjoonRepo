#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
	int N, M;
	int count = 0;
	string see, listen;
	set <string> set;
	vector <string> result;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> see;
		set.insert(see);
	}
	for (int i = 0; i < M; i++) {
		cin >> listen;
		if (set.find(listen) != set.end()) {
			count++;
			result.push_back(listen);
		}
	}
	sort(result.begin(), result.end());

	cout << count << '\n';
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}
}