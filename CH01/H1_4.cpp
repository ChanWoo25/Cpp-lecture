#include <iostream>
#include <cstdio>

int main4_2()
{
	using namespace std;

	int x(1);
	cout << "Before your input, x was " << x << endl;

	cin >> x;
	cout << "Your input is " << x << endl;

	return 0;
}
int main4_1() 
{
	// Output operator						//end of line
	std::cout << "I love this lecture! \n"; //<< std::endl;

	int x = 1024;
	std::cout << "x is " << x << std::endl;

	double pi = 3.141592;
	std::cout << "pi is " << pi << std::endl; //마지막 2는 짤림 -> 정밀한 출력한 내용은 이후에

	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << '\t' << "cdef" << std::endl;

	std::cout << "\a";

	return 0;
}