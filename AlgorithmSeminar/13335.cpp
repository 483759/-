#include <cstdio>
#include <queue>
#include <utility>
using namespace std;
int n, W, L, t, s, fin, on, truck[1002][2];
queue<int> q;
int main() {
	scanf("%d%d%d", &n, &W, &L);
	for (int i = 0; i < n; i++)scanf("%d", &truck[i][0]);
	on++; t++;
	s += truck[0][0];
	q.push(0);
	truck[0][1]++;
	while (fin != n) {
		t++;
		for (int i = fin; i < fin + on; i++)truck[i][1]++;
		if (truck[q.front()][1] > W) {
			s -= truck[q.front()][0];
			q.pop();
			on--; fin++;
		}
		if (s + truck[fin + on][0] <= L && (fin+on)<n) {
			s += truck[fin + on][0];
			q.push(fin + on);
			truck[fin + on][1]++;
			on++;
		}
	}
	printf("%d", t);
	return 0;
}

/*
���� ���̸�ŭ Ʈ���� ��� �̵�
�̵� �� ���� ���̺��� ũ�� ���� ����
���� �ٸ��� �� Ʈ���� �ø� �� �ִٸ� Ʈ�� �߰� �� �̵�
��� Ʈ���� �Ű����ٸ� ����
*/