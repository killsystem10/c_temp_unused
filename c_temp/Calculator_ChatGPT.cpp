#include <iostream>
using namespace std;

int main() {
    cout << "간단한 계산기 프로그램입니다." << endl;

    double num1, num2, result;
    char oper;

    cout << "첫번째 수를 입력하세요: ";
    cin >> num1;
    cout << "연산자를 입력하세요 (+, -, *, /): ";
    cin >> oper;
    cout << "두번째 수를 입력하세요: ";
    cin >> num2;

    switch (oper) {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "0으로 나눌 수 없습니다." << endl;
        }
        else {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
        }
        break;
    default:
        cout << "잘못된 연산자입니다." << endl;
        break;
    }

    return 0;
}
