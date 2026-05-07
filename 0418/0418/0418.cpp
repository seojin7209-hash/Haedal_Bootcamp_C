//#include <iostream>
//using namespace std;
//class Rectangle {
//public:
//	int width;
//	int height;
//	int getArea();
//};
//int Rectangle::getArea() {
//	return width * height;
//}
//int main() {
//	Rectangle rect;
//	rect.width = 3;
//	rect.height = 5;
//	cout << "사각형의 면적은 " << rect.getArea() << endl;
//}
//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point();
//	Point(int a, int b);
//	void show() { cout << "(" << x << "," << y << ")" << endl; }
//};
//Point::Point() :x(0), y(0) {}
//Point::Point(int a,int b) :x(a), y(b) {}
//int main() {
//	Point origin;
//	Point target(10, 20);
//	origin.show();
//	target.show();
//}
//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	int width;
//	int height;
//	Rectangle();
//	Rectangle(int a);
//	Rectangle(int a, int b);
//	bool isSquare();
//};
//Rectangle::Rectangle() {
//	width = height = 1;
//}
//Rectangle::Rectangle(int a) {
//	width = height = a;
//}
//Rectangle::Rectangle(int a, int b) {
//	width = a;
//	height = b;
//}
//bool Rectangle::isSquare() {
//	if (width == height)
//		return true;
//	else
//		return false;
//}
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3, 5);
//	Rectangle rect3(3);
//
//	if (rect1.isSquare())  cout << "rect1은 정사각형이다." << endl;
//	if (rect2.isSquare())  cout << "rect2은 정사각형이다." << endl;
//	if (rect3.isSquare())  cout << "rect3은 정사각형이다." << endl;
//#include <iostream>
//using namespace std;
//
//struct Circle {
//private:
//	int radius;
//public:
//	Circle(int r) { radius = r; }
//	double getArea();
//};
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int main() {
//	Circle waffle(3);
//	cout << "면적은" << waffle.getArea();
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int sum = 0;
//	int n;
//	cout << "입력할 정수의 개수는?";
//	cin >> n;
//	int* arr = new int[n];
//	if (!arr)
//	{
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//	
//	cout << endl;
//	for (int i = 0; i < n; i++) {
//		cout << i + 1 << "번째 정수:";
//		cin >> arr[i];
//		sum += arr[i];
//	}
//	cout << "평균= " << sum / n;
//	delete[]arr;
//}
//#include <iostream>
//using namespace std;
//class Circle {
//public:
//	int radius;
//	double getArea();
//	Circle(int r);
//	~Circle();
//};
//Circle::~Circle() {
//	cout << "소멸자 실행 radius="<<radius<<endl;
//}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "생성자 실행 radius= " << radius << endl;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int main() {
//	int radius;
//	while (true) {
//		cout << "정수 반지름 입력(음수이면 종료)>>";
//		cin >> radius;
//		if (radius < 0)
//			break;
//		Circle* c = new Circle(radius);
//		cout << "원의 면적은 " << c->getArea()<<endl;
//		delete c;
//	}
//
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string names[5];
//
//	for (int i = 0; i < 5; i++) {
//		cout<< "이름>>";
//		getline(cin,names[i],'\n');
//	}
//	string latter = names[0];
//	for (int i = 0; i < 5; i++) {
//		if (latter < names[i])
//			latter = names[i];
//	}
//	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string a;
//	cout << "문자열을 입력하세요(한글 안됨)";
//	getline(cin, a, '\n');
//	int len = a.length();
//
//	for (int i = 0; i < len; i++) {
//		string first = a.substr(0, 1);
//		string sub = a.substr(1, len - 1);
//		a = sub + first;
//		cout << a << endl;
//	}
//}
//#include <iostream>
//using namespace std;
//
//void swap(int a, int b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//int main() {
//	int m = 2, n = 9;
//	swap(m, n);
//	cout << m << ' ' << n;
//}
//#include <iostream>
//using namespace std;
//
//void swap(int* a, int* b) {
//	int tmp;
//
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main() {
//	int m = 2, n = 9;
//	swap(&m, &n);
//	cout << m << ' ' << n;
//}
//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//Circle getCircle() {
//	Circle tmp(30);
//	return tmp;
//}
//int main() {
//	Circle c;
//	cout << c.getArea() << endl;
//
//	c = getCircle();
//	cout << c.getArea() << endl;
//}
//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//void readRadius(Circle &c) {
//	int r;
//	cout << "반지름을 입력하세요>>";
//	cin >> r;
//	c.setRadius(r);
//}
//int main() {
//	Circle donut;
//	readRadius(donut);
//	cout << "donut의 면적= " << donut.getArea() << endl;
//}
//#include <iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	Circle(const Circle& c);
//	Cir
//};
//#include <iostream>
//using namespace std;
//void swap(int *a, int *b) {
//	int tmp = *a;
//	*a=*b;
//	*b=tmp;
//}
//int main() {
//	int m = 2;
//	int n =9;
//	swap(&m, &n);
//	cout << m << n;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int* p;
//
//	p = new int;
//	if (!p)
//		return;
//	*p = 5;
//	int n = *p;
//	delete p;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string a[5];
//
//	for (int i = 0; i < 5; i++) {
//		cout << "이름>>";
//		getline(cin, a[i], '\n');
//		
//	}
//	string ans = a[0];
//	for (int i = 0; i < 5; i++) {
//		if (ans < a[i])
//			ans = a[i];
//	}
//	cout << "사전에서 가장 뒤에 나오는 문자열은" << ans;
//	
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cout << "구입할 물품의 개수>>";
//	cin >> n;
//	int *a=new int[n];
//	cout << "물품 "<<n<<"개 가격 입력 ";
//	for(int i=0;i<n;i++){
//		cin >> a[i];
//	
//	}
//	int exp = a[0];
//	int cheap = a[0];
//	for (int i = 0; i < n; i++) {
//		if (exp < a[i])
//			exp = a[i];
//		if (cheap > a[i])
//			cheap = a[i];
//	}
//	cout << "제일 싼 가격은" << cheap << endl;
//	cout << "제일 비산 가격은" << exp;
//	delete[]a;
//	
//}
//#include <iostream>
//using namespace std;
//class Circle {
//public:
//	int radius;
//	double getArea();
//
//};
//double Circle::getArea() {
//	return radius * radius * 3.14;
//}
//int main() {
//	Circle donut;
//	donut.radius = 1;
//	double area = donut.getArea();
//}
//#include <iostream>
//using namespace std;
//class Rectangle {
//public:
//	int width;
//	int height;
//	Rectangle();
//	Rectangle(int a, int b);
//	Rectangle(int a);
//	bool isSquare();
//};
//Rectangle::Rectangle() {
//	width = height = 1;
//}
//Rectangle::Rectangle(int a, int b) {
//	width = a;
//	height = b;
//}
//Rectangle::Rectangle(int a) {
//	width = height = a;
//}
//bool Rectangle::isSquare() {
//	if (width == height)
//		return true;
//	else
//		return false;
//}
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3, 5);
//	Rectangle rect3(3);
//
//	if (rect1.isSquare())
//		cout << "rect1은 정사각형이다." << endl;
//	if (rect2.isSquare())
//		cout << "rect2은 정사각형이다." << endl;
//	if (rect3.isSquare())
//		cout << "rect3은 정사각형이다." << endl;
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main() {
//	char a[100];
//	cout << "문자열을 입력하세요>>";
//	cin.getline(a, 100);
//	int count = 0;
//	int n = 0;
//	for (int i = 0; i < 100; i++) {
//		if (a[i] == 'e')
//			count++;
//		if (a[i] == '\0')
//			break;
//		n++;
//	}
//	cout << "총 글자수" << n << ", 문자 e의 개수는 " << count << "개";
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string a;
//	cout << "Falling in love with you를 부른 가수는(힌트: 첫글자는 E)?";
//	getline(cin, a, '\n');
//	if (a == "Elvis Presley")
//		cout << "맞았습니다.";
//	else
//		cout << "틀렸습니다.";
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//	while (true) {
//		cout << "끝내려면 OK를 입력하세요>>";
//		char a[100];
//		cin.getline(a, 100);
//		if (strcmp(a, "OK") == 0) {
//			cout << "종료합니다";
//			break;
//		}
//	}
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j <= i; j++)
//			cout << '*';
//		cout << endl;
//	}
//}
//#include <iostream>
//using namespace std;
//void swapArray(int* p, int* q, int size) {
//	for (int i = 0; i < size; i++) {
//		int tmp = p[i];
//		p[i] = q[i];
//		q[i] = tmp;
//	}
//}
//void printArray(int* p, int size) {
//	for (int i = 0; i < size; i++) {
//		cout << p[i]<<" ";
//	}
//	cout << endl;
//}
//
//int main() {
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 9,8,7,6,5 };
//
//	cout << "배열 a=";
//	printArray(a, 5);
//	cout << "배열 b=";
//	printArray(b, 5);
//	swapArray(a, b,5);
//
//	cout << "배열 a=";
//	printArray(a, 5);
//	cout << "배열 b=";
//	printArray(b, 5);
//}
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char a[100];
	cout << "문자열을 입력하세요>>";
	cin.getline(a, 100);
	int i = 0;
	int count = 0;
	while (a[i] != '\0') {
		if (a[i] == 'e')
			count++;
		i++;
	}
	cout << "총 글자수 " << i << ", 문자 e의 개수는 " << count << "개";
}




