//#�� �ٴ� �͵��� ��ó������ �Ѵ�. preprocessor directive
// include : cpp�� ������ ��Ű�ڴٴ� �ǹ�.
#include <iostream> //input output stream 

// ���α׷����̶� OS�� ���ؼ� ����� ��û�ϴ� �� <- �����ϵ� ����.
// �ּ� ���� = �Լ� 

int main1() // main : OS�� ���α׷��� �����ų �� main�̶�� �Լ��� ���� ã�´�. ��, ������.
{
	1 + 1;			// statement. also expression.
	int x = 2;		// integer�� ���� memory�� �Ҵ��ش޶�� OS�� ����.
	int y = x + 3;	// ���ڴ� literal �̶�� �Ѵ�.

	// ����� �ϴ� �Լ��� ���ڱ� �ۼ��� �� ���� ������ �ۼ��� �Լ��� �������ڴ�.
	std::cout << y << std::endl; //end line

	// std �� namespace -- standard library
	// ������ ���̺귯���� �� �����ϰ� �������� �ϴ� ������ ���̴°� ����.

	
	/* ��ġ��
		1. what's the difference between an expression and a statement?
		2. between function and library?
	*/

	return 0; // 'return' statement.
}