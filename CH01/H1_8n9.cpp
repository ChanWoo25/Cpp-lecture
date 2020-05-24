#include <iostream>
using namespace std;

int main()
{
	int x = 2; // x is a variabel, 2 is a literal.
	
	cout << 1 + 2 << endl; 
	// 1�� 2�� �� �� literal , 1 + 2 �� expression.
	// 1�� 2�� �������� ���忡���� operand��� �� �� �ִ�. 

	int y = (x > 0) ? 1 : 2;
	// C++�� ������ ���� ������(Ternary operator)�� ���� ������ (Conditional Operator)
	// ù��° ���� true�� 2��°, false�� 3��° ���� ��ȯ�Ѵ�.
	cout << y << endl;
	
	cout << "Hello, World!" << endl;
	
	
	return 0;
}


/* Formatting
 * ���� ���� �ڵ带 ���� �ϴ¹�
 1. ���� ���� �ڵ带 ���� ���� ����.
 2. indenting�� �׷� ������ ���� ��Ű��.
 3. �ϵ��ڵ����ٴ� ����Ʈ �ڵ��� �ͼ�������. (����ڰ� ���� ������ literal���� ���� �־��ִ°� Hard coding,
 ������� �Է��̳� �ܺ�����, ��Ʈ��ũ ��ŵ����� ���� �޾Ƽ� �����ϴ� ���� Soft coding�̶��Ѵ�.
*/