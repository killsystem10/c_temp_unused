#include <stdio.h>
#include <stack>
std::stack<int> S;

int main() {
	for (int i = 1; i <= 3; i++) {
		S.push(i);
	}
	printf("%d ", S.top());
	S.pop();

	S.push(4);
	S.push(5);
	while (!S.empty()) {
		printf("%d ", S.top());
		S.pop();
	}
}