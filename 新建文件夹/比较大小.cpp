#include <iostream>
using namespace std;

int main() {
    double a, b;
    
    // 获取用户输入
    cout << "请输入第一个数a：";
    cin >> a;
    cout << "请输入第二个数b：";
    cin >> b;
    
    // 比较两个数的大小
    if (a > b) {
        cout << a << " 大于 " << b << endl;
    } else if (b > a) {
        cout << b << " 大于 " << a << endl;
    } else {
        cout << "两个数相等" << endl;
    }
    
    return 0;
}
