#include <cstdio>
int main() {
	int i;
	char c;
	scanf("%d", &i);
	scanf(" ");
	scanf("%c", &c);
	printf("%d\n%c", i, c);
	return 0;
}



int move(��ǥ){
	visit üũ
	���ÿ� ��ǥ push
	for 8���� ���⿡ ���� �̵���� ���{
		�湮���� �ʾҴٸ�{
			���ÿ� ��ǥ push
			�̵����� ĭ�� �� +1
			visit üũ
		}
	}
	return �ʱ� ��ǥ���� �̵����� ĭ�� ��
}

void func(�� ����) {
	���� n �̻��̸� return
	for ��� ���� ���� ����Ǽ� ���{
		�̹� �湮�� ��ǥ��� continue
		move(���� ��ǥ)
		�� ����� üũ�߰� 
		��� ĭ�� ä�����ٸ� ����Ǽ� +1
		func(�� ���� + 1)
		���� �࿡�� üũ�� visit�迭 ����, stack pop
	}
}