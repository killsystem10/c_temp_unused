#include <iostream>
using namespace std;

int main() {
    cout << "������ ���� ���α׷��Դϴ�." << endl;

    double num1, num2, result;
    char oper;

    cout << "ù��° ���� �Է��ϼ���: ";
    cin >> num1;
    cout << "�����ڸ� �Է��ϼ��� (+, -, *, /): ";
    cin >> oper;
    cout << "�ι�° ���� �Է��ϼ���: ";
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
            cout << "0���� ���� �� �����ϴ�." << endl;
        }
        else {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
        }
        break;
    default:
        cout << "�߸��� �������Դϴ�." << endl;
        break;
    }

    return 0;
}