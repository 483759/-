#include <cstdio>
int apb[26], i = 0;
char s[27];
int main() {
	while (scanf(" %c", &s[i]) != EOF) {	//�ѱ��ھ� �Է��� �޾Ƽ�
		apb[s[i] - 97] = i + 1;	//������ ��ġ(����)�� ���ĺ� �迭�� �����Ѵ�
		i++;
	}
	if (i < 26) {
		for (int j = 0; j < 26; j++)
			if (!apb[j]) {
				//���̰� 26 �̸��̶�� ������� ���� ���ĺ� �� ���� �������� �߰�
				s[i++] = j + 97;
				printf("%s", s);
				return 0;
			}
	}
	else {	//���̰� 26�̶��
		for (int j = 25; j >= 0; j--)
			for (int k = s[j] - 96; k < 26; k++)
				if (apb[s[j] - 97] < apb[k]) {
					s[j] = k + 97;
					s[j + 1] = '\0';
					printf("%s", s);
					return 0;
				}
	}
	printf("-1");
	return 0;
}