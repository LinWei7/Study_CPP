#include <iostream>
using namespace std;

// ���ضԾ�̬����������
int& getStaticRef() {
	static int num = 5; // ��̬����
	return num;
}

int main() {
	int& ref = getStaticRef(); // ��ȡ�Ծ�̬����������
	cout << "��ʼֵ��" << ref << endl;

	ref = 10; // �޸ľ�̬������ֵ

	cout << "�޸ĺ��ֵ��" << ref << endl;
	cout << "�ٴε��ú������ֵ��" << getStaticRef() << endl;

	return 0;
}