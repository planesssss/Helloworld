#include <iostream>
using namespace std;

int main() {
    double a, b;
    
    // ��ȡ�û�����
    cout << "�������һ����a��";
    cin >> a;
    cout << "������ڶ�����b��";
    cin >> b;
    
    // �Ƚ��������Ĵ�С
    if (a > b) {
        cout << a << " ���� " << b << endl;
    } else if (b > a) {
        cout << b << " ���� " << a << endl;
    } else {
        cout << "���������" << endl;
    }
    
    return 0;
}
