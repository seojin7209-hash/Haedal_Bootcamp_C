//#include <iostream>
//using namespace std;
//
//void twice(int& x) {  
//    x = x * 2;
//}
//
//int main() {
//    int n = 12;
//    twice(n);
//    cout << n; 
//}
//#include <iostream>
//using namespace std;
//
//class Bubble {
//    int radius;
//public:
//    Bubble(int radius) { this->radius = radius; }
//    int getRadius() { return radius; }
//    void setRadius(int n) { radius = n; }
//};
//
//void addBubble(Bubble& c, Bubble a, Bubble b) {
//    int sum = c.getRadius() + a.getRadius() + b.getRadius();
//    c.setRadius(sum);
//}
//
//int main() {
//    Bubble a(5), b(10), c(130);
//    addBubble(c, a, b);
//    cout << "버블 c의 반지름 " << c.getRadius() << endl;
//}
//#include <iostream>
//using namespace std;
//
//class Color {
//    int r, g, b;
//
//public:
//    
//    Color(int r, int g, int b) {
//        this->r = r;
//        this->g = g;
//        this->b = b;
//    }
//
//    
//    void get(int& r, int& g, int& b) {
//        r = this->r;
//        g = this->g;
//        b = this->b;
//    }
//};
//
//int main() {
//    Color fore(255, 0, 0), back(15, 128, 200);
//
//    int r, g, b;
//
//    fore.get(r, g, b);
//    cout << "red=" << r << ",green=" << g << ",blue=" << b << endl;
//
//    back.get(r, g, b);
//    cout << "red=" << r << ",green=" << g << ",blue=" << b << endl;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class MyStack {
//    int p[10];   
//    int tos;     
//
//public:
//    MyStack();
//    bool push(int n);
//    bool pop(int& n);
//};
//
//MyStack::MyStack() {
//    tos = 0;
//}
//
//bool MyStack::push(int n) {
//    if (tos == 10)   
//        return false;
//
//    p[tos] = n;
//    tos++;
//    return true;
//}
//
//bool MyStack::pop(int& n) {
//    if (tos == 0)  
//        return false;
//
//    tos--;
//    n = p[tos];
//    return true;
//}
//
//int main() {
//    MyStack st;
//
//    for (int i = 0; i < 11; i++) { 
//        if (st.push(i))
//            cout << i << ' ';
//        else
//            cout << endl << i + 1 << "번째 푸시 실패! 스택 꽉 차 있음" << endl;
//    }
//
//    int n;
//    for (int i = 0; i < 11; i++) { 
//        if (st.pop(n))
//            cout << n << ' ';
//        else
//            cout << endl << i + 1 << "번째 팝 실패! 스택이 비어 있음" << endl;
//    }
//}
//#include <iostream>
//using namespace std;
//
//class Power {
//    int kick, punch;
//public:
//    Power(int kick, int punch);
//
//    Power& add(Power p);  
//    void show();
//};
//
//Power::Power(int kick, int punch) {
//    this->kick = kick;
//    this->punch = punch;
//}
//
//Power& Power::add(Power p) {
//    this->kick += p.kick;
//    this->punch += p.punch;
//    return *this;  
//}
//
//void Power::show() {
//    cout << "kick=" << kick << ", punch=" << punch << endl;
//}
//
//int main() {
//    Power a(1, 2), b(10, 20), c(100, 200);
//
//    c.add(a).add(b).add(Power(1000, 2000));
//
//    c.show();
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class MyStack {
//    int* p;     
//    int size;   
//    int tos;    
//
//public:
//    MyStack();
//    MyStack(int size);
//    MyStack(const MyStack& src);
//    ~MyStack();
//
//    bool push(int n);
//    bool pop(int& n);
//};
//
//MyStack::MyStack() {
//    size = 10;
//    p = new int[size];
//    tos = 0;
//}
//
//MyStack::MyStack(int size) {
//    this->size = size;
//    p = new int[size];
//    tos = 0;
//}
//
//MyStack::MyStack(const MyStack& src) {
//    size = src.size;
//    tos = src.tos;
//    p = new int[size];
//    for (int i = 0; i < tos; i++) {
//        p[i] = src.p[i];
//    }
//}
//
//MyStack::~MyStack() {
//    delete[] p;
//}
//
//bool MyStack::push(int n) {
//    if (tos == size)
//        return false;
//
//    p[tos] = n;
//    tos++;
//    return true;
//}
//
//bool MyStack::pop(int& n) {
//    if (tos == 0)
//        return false;
//
//    tos--;
//    n = p[tos];
//    return true;
//}
//
//int main() {
//    MyStack a(10); 
//    a.push(10);
//    a.push(20);   
//
//    MyStack b = a;
//    b.push(30);    
//
//    int n;
//    a.pop(n); 
//    cout << "스택 a에서 팝한 값 " << n << endl;
//
//    b.pop(n); 
//    cout << "스택 b에서 팝한 값 " << n << endl;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Collector {
//    int* p;   
//    int size; 
//
//public:
//    Collector(int size, int values[]); 
//    void show();                       
//    int getSize() { return size; }
//    int get(int index) { return p[index]; }
//};
//
//Collector::Collector(int size, int values[]) {
//    this->size = size;
//    p = new int[size];
//    for (int i = 0; i < size; i++) {
//        p[i] = values[i];
//    }
//}
//
//
//void Collector::show() {
//    cout << "데이터 수 " << size << ": ";
//    for (int i = 0; i < size; i++) {
//        cout << p[i] << " ";
//    }
//    cout << endl;
//}
//
//
//double calcAvg(Collector c) {
//    int sum = 0;
//    for (int i = 0; i < c.getSize(); i++) {
//        sum += c.get(i);
//    }
//    return (double)sum / c.getSize();
//}
//
//int main() {
//    int temp[] = { 69, 70, 71, 72, 74 };
//
//    Collector weight(4, temp); 
//
//    double avg = calcAvg(weight);
//
//    weight.show();
//    cout << "평균은 " << avg << endl;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius= " << radius << endl;
//}
//Circle::Circle(int radius) {
//	this->radius = radius;
//	cout << "생성자 실행 radius=" << radius << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행 radius= " << radius << endl;
//}
//void increase(Circle c) {
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}
//int main() {
//	Circle waffle(30);
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
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
//int main() {
//	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
//	int i = 1;
//	int n = 2;
//	int& refn = n;
//	n = 4;
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//
//	refn = i;
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//
//	int* p = &refn;
//	*p = 20;
//	cout << i << '\t' << n << '\t' << refn << endl;
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
//
//int main() {
//	Circle circle;
//	Circle& refc = circle;
//	refc.setRadius(10);
//	cout << refc.getArea() << " " << circle.getArea();
//}
//#include <iostream>
//using namespace std;
//
//bool average(int a[], int size, int& avg) {
//	if (size <= 0)
//		return false;
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//		sum += a[i];
//	avg = sum / size;
//	return true;
//}
//int main() {
//	int x[] = {0, 1, 2, 3, 4, 5};
//	int avg;
//	if (average(x, 6, avg)) cout << "평균은 " << avg << endl;
//	else cout << "매개 변수 오류"<<endl;
//
//	if(average(x,-2,avg)) cout<< "평균은 " << avg << endl;
//	else cout << "매개 변수 오류" << endl;
//}
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius= " << radius << endl;
//}
//Circle::Circle(int radius) {
//	this->radius = radius;
//	cout << "생성자 실행 radius= " << radius << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행 radius= " << radius << endl;
//}
//void increase(Circle& c) {
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}
//int main() {
//	Circle waffle(30);
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
//}
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius= " << radius << endl;
//}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "생성자 실행 radius= " << radius << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행 radius= " << radius << endl;
//}
//void increase(Circle& c) {
//	int r = c.getRadius();
//		c.setRadius(r + 1);
//}
//int main() {
//	Circle waffle(30);
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
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
//void readRadius(Circle& c) {
//	int r;
//	cout << "반지름 값 입력>>";
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
//
//char& find(char s[], int index) {
//	return s[index];
//}
//int main() {
//	char name[] = "Mike";
//	cout << name << endl;
//
//	find(name, 0) = 'S';
//	cout << name << endl;
//
//	char& ref = find(name, 2);
//	ref = 't';
//	cout << name << endl;
//}
//#include <iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	Circle(int radius) { this->radius = radius;}
//	Circle plus(int n) {
//		radius += n;
//		return *this;
//	}
//	int getRadius() { return radius; }
//};
//int main() {
//	Circle a(5);
//	a.plus(1).plus(2).plus(3);
//	cout << "객체 a의 반지름은 " << a.getRadius();
//}
//#include <iostream>
//using namespace std;
//class Circle {
//private:
//	int radius;
//public:
//	Circle(const Circle& c);
//	Circle() { radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//Circle::Circle(const Circle& c) {
//	this->radius = c.radius;
//	cout << "복사 생성자 실행 radius= " << radius << endl;
//}
//int main() {
//	Circle src(30);
//	Circle dest(src);
//
//	cout << "원본의 면적= " << src.getArea() << endl;
//	cout << "사본의 면적= " << dest.getArea() << endl;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	~Person();
	void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}
Person::~Person() {
	if (name)
		delete[]name;
}
void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}
