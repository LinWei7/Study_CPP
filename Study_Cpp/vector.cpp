#include <iostream>
#include <vector>

int main() {
	// ����һ���յ���������
	std::vector<int> myVector;

	// ���Ԫ�ص�������
	myVector.push_back(3);
	myVector.push_back(7);
	myVector.push_back(11);
	myVector.push_back(5);

	// ���������е�Ԫ�ز����
	std::cout << "Elements in the vector: ";
	for (int element : myVector) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

	// ���������еĵ�һ��Ԫ�ز����
	std::cout << "First element: " << myVector[0] << std::endl;

	// ���������еĵڶ���Ԫ�ز����
	std::cout << "Second element: " << myVector.at(1) << std::endl;

	// ��ȡ�����Ĵ�С�����
	std::cout << "Size of the vector: " << myVector.size() << std::endl;

	// ɾ�������еĵ�����Ԫ��
	myVector.erase(myVector.begin() + 2);

	// ���ɾ��Ԫ�غ������
	std::cout << "Elements in the vector after erasing: ";
	for (int element : myVector) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

	// ������������
	myVector.clear();
	std::cout << "Size of the vector after clearing: " << myVector.size() << std::endl;

	return 0;
}