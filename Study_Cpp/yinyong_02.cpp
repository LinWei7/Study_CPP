#include <iostream>
using namespace std;

// 返回对静态变量的引用
int& getStaticRef() {
	static int num = 5; // 静态变量
	return num;
}

int main() {
	int& ref = getStaticRef(); // 获取对静态变量的引用
	cout << "初始值：" << ref << endl;

	ref = 10; // 修改静态变量的值

	cout << "修改后的值：" << ref << endl;
	cout << "再次调用函数后的值：" << getStaticRef() << endl;

	return 0;
}