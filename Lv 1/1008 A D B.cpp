// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
#define _CRT_NO_SECURE_WARNINGS

using namespace std;
int main() {
	double a, b;
	cin >> a >> b;
	cout.precision(10); //소숫점 9자리수까지 프린트
	cout << a / b;
}