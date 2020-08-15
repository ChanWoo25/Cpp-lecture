#include <iostream>
#include <bitset>
using namespace std;

//이진수
void bitwise();
void bitflag();

int main()
{
    //bitwise();
    bitflag();

    return 0;
}

void bitwise()
{
    unsigned a = 1;
    // bitset이 자료형보다 적은 비트를 가져가면, 작은 숫자쪽부터 가져간다.
    cout << bitset<4>(a) << endl;

    unsigned b = 0b10111;
    cout << bitset<8>(a <<= 1) << endl;
    cout << bitset<8>(a <<= 1) << endl;
    cout << bitset<8>(a <<= 1) << endl;
    cout << bitset<8>(a <<= 1) << endl;
    cout << bitset<8>(a >>= 1) << endl;
    cout << bitset<8>(a >>= 1) << endl;
    cout << bitset<8>(a >>= 1) << endl;
    cout << bitset<8>(a >>= 1) << endl;

    cout << bitset<8>(~a) << endl;
    cout << bitset<8>(a | b) << endl;   //bitwise AND
    cout << bitset<8>(a & b) << endl;   //bitwise OR
    cout << bitset<8>(a ^ b) << endl;   //bitwise XOR

    cout << (0b0110 >> 2) << int((0b0110 >> 2)) << endl;
    cout << (5 & 12) << endl;
    cout << (5 ^ 12) << endl;
    cout << (5 | 12) << endl;
}

void bitflag()
{   
    //option flags
    unsigned char opt[8];
    for(int i=0 ; i < 8; i++)
        opt[i] = (1 << i);


    bitset<8> item_flag = 0b0;
    cout << item_flag << "\t No Item!" << endl;

    item_flag |= opt[0];
    cout << item_flag << "\t Item0 obtained!" << endl;

    item_flag |= opt[3];
    cout << item_flag << "\t Item3 obtained!" << endl;

    item_flag ^= opt[3];
    cout << item_flag << "\t Item3 lost!" << endl;

    
    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    cout << bitset<32>(red_mask) << endl;
    cout << bitset<32>(green_mask) << endl;
    cout << bitset<32>(blue_mask) << endl;

    unsigned int color = 0xDAA520;
    cout << "color: " << bitset<32>(color) << endl;
    cout << "red: " << bitset<32>(color & red_mask) << endl;
    cout << "green: " << bitset<32>(color & green_mask) << endl;
    cout << "blue: " << bitset<32>(color & blue_mask) << endl;

}







