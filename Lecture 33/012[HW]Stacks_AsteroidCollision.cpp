#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {

	stack<int> s;

	for (int ast : asteroids) {

		if (ast < 0 and !s.empty() and s.top() > 0) {

			// collisions will happen

			bool flag = true; // assume ast will survive after all the collisions

			while (!s.empty() and s.top() > 0) {

				if (abs(ast) > s.top()) {
					// s.top() will be destroyed
					s.pop();
				} else if (abs(ast) < s.top()) {
					// ast is destroyed
					flag = false;
					break;
				} else {
					// both s.top() and ast will be destroyed
					s.pop();
					flag = false;
					break;
				}

			}


			if (flag == true) {
				s.push(ast);
			}

		} else {

			s.push(ast);

		}

	}

	vector<int> ans;

	while (!s.empty()) {
		ans.push_back(s.top());
		s.pop();
	}

	reverse(ans.begin(), ans.end());

	return ans;

}

int main() {

	vector<int> asteroids = {7, 3, -4, 5, 2, -8, 2, 4, 1, -4};

	vector<int> ans = asteroidCollision(asteroids);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}