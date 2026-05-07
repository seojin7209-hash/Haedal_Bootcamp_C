//#include <iostream>
//#include <string>
//using namespace std;
//class Picture {
//public:
//	int width;
//	int height;
//	string place;
//	Picture();
//	Picture(int a, int b, string c);
//	int getWidth();
//	int getHeight();
//	string getPlace();
//};
//Picture::Picture() {
//	width = 5;
//	height = 7;
//	place = "모름";
//}
//Picture::Picture(int a, int b, string c) {
//	width = a;
//	height = b;
//	place = c;
//}
//int Picture::getWidth() {
//	return width;
//}
//int Picture::getHeight() {
//	return height;
//}
//string Picture::getPlace() {
//	return place;
//}
//int main() {
//	Picture pic;
//	Picture mt(10, 14, "한라산");
//	cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
//	cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class Account {
//public:
//	string name;
//	Account(string a);
//	string getOwner();
//	int deposit(int b);
//	int sum=0;
//	int inquiry();
//	int withdraw(int c);
//};
//Account::Account(string a) {
//	name = a;
//}
//string Account::getOwner() {
//	return name;
//}
//int Account::deposit(int b) {
//	sum += b;
//	return b;
//}
//int Account::inquiry() {
//	return sum;
//}
//int Account::withdraw(int c) {
//	if (sum < c)
//		c = sum;
//	sum -= c;
//	return c;
//}
//int main() {
//	Account a("황수희");
//	a.deposit(20000);
//	cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
//	int money = a.withdraw(15000);
//	cout << money << "원 출금, ";
//	cout << a.getOwner() << "잔액은 " << a.inquiry() <<endl;
//	money = a.withdraw(8000);
//	cout << money << "원 출금, ";
//	cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
//}
//#include <iostream>
//using namespace std;
//class CoffeeMachine {
//public:
//	int coffee;
//	int water;
//	int sugar;
//	CoffeeMachine(int a, int b, int c);
//	void drinkEspresso();
//	void show();
//	void drinkAmericano();
//	void drinkSugarCoffee();
//	void fill();
//};
//CoffeeMachine::CoffeeMachine(int a,int b,int c){
//	coffee = a;
//	water = b;
//	sugar = c;
//}
//void CoffeeMachine::drinkEspresso() {
//	coffee -= 1;
//	water -= 1;
//}
//void CoffeeMachine::show() {
//	cout << "[머신상태] 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar<<endl;
//}
//void CoffeeMachine::drinkAmericano() {
//	coffee -= 1;
//	water -= 2;
//}
//void CoffeeMachine::drinkSugarCoffee() {
//	coffee -= 1;
//	water -= 2;
//	sugar -= 1;
//}
//void CoffeeMachine::fill() {
//	coffee = 10;
//	water = 10;
//	sugar = 10;
//}
//int main() {
//	CoffeeMachine java(5, 10, 6);
//	java.drinkEspresso();
//	java.show();
//	java.drinkAmericano();
//	java.show();
//	java.drinkSugarCoffee();
//	java.show();
//	java.fill();
//	java.show();
//}
//#include <iostream>
//using namespace std;
//class Storage {
//public:
//	Storage();
//	 double fever[10];
//	 int next;
//	void put(double a);
//	void dump();
//	double getAvg();
//	 };
//Storage::Storage() {
//	next = 0;
//}
//void Storage::put(double a) {
//	if (next < 10) {
//		fever[next] = a;
//		next++;
//	}
//
//}
//void Storage::dump() {
//	for (int i = 0; i < next; i++)
//		cout << fever[i] <<" ";
//	cout << endl;
//}
//double Storage::getAvg() {
//	double sum = 0;
//	for (int i = 0; i < next; i++)
//		sum += fever[i];
//	double avg = sum / next;
//	return avg;
//}
//int main() {
//	Storage a;
//	a.put(36.7);
//	a.put(36.9);
//	a.put(36.4);
//	a.dump();
//	cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
//}
//#include <iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	double getArea();
//};
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int main() {
//	Circle donut;
//	Circle pizza(30);
//
//	cout << donut.getArea() << endl;
//
//	Circle* p;
//	p = &donut;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//
//	p = &pizza;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//}
//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int main() {
//	Circle circleArray[3];
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
//
//	for (int i = 0; i < 3; i++)
//		cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
//
//	Circle* p;
//	p = circleArray;
//	for (int i = 0; i < 3; i++) {
//		cout << "Circle" << i << "의 면적은 " << p->getArea() << endl;
//		p++;
//	}
//}
//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int main() {
//	Circle circleArray[3] = { Circle(10),Circle(20),Circle() };
//
//	for (int r = 0; r < 3; r++)
//		cout << "Circle" << r << "의 면적은 " << circleArray[r].getArea() << endl;
//}
//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int main() {
//	Circle circles[2][3];
//	circles[0][0].setRadius(1);
//	circles[0][1].setRadius(2);
//	circles[0][2].setRadius(3);
//	circles[1][0].setRadius(4);
//	circles[1][1].setRadius(5);
//	circles[1][2].setRadius(6);
//
//	for (int i = 0; i < 2; i++)
//		for(int j = 0; j < 3; j++) {
//			cout << "Circle [" << i << "," << j << "]의 면적은 ";
//			cout << circles[i][j].getArea() << endl;
//	}
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int* p;
//
//	p = new int;
//	if (!p) {
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//	*p = 5;
//	int n = *p;
//	cout << "*p = " << *p << endl;
//	cout << "n= " << n << endl;
//
//	delete p;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "입력할 정수의 개수는?";
//	int n;
//	cin >> n;
//	if (n <= 0) return 0;
//	int* p = new int[n];
//	if (!p) {
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << i + 1 << "번째 정수: ";
//		cin >> p[i];
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += p[i];
//	cout << "평균= " << sum / n << endl;
//
//	delete[] p;
//}
//#include <iostream>
//using namespace std;
// 
//class Circle {
//	int radius;
//public:
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "생성자 실행 radius =" << radius << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행 radius =" << radius << endl;
//}
//int main() {
//	int radius;
//	while (true) {
//		cout << "정수 반지름 입력(음수이면 종료)>>";
//		cin >> radius;
//		if (radius < 0) break;
//		Circle *p = new Circle(radius);
//		cout << "원의 면적은 " << p->getArea() << endl;
//		delete p;
//	}
//}
//#include <iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	~Circle() {}
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
// };
//
//class CircleManager {
//	Circle* pArray = NULL;
//	int size = 0;
//	void input();
//	void decide();
//public:
//	CircleManager();
//	~CircleManager();
//	void run();
//};
//CircleManager::CircleManager() {
//	cout << "생성하고자 하는 원의 개수?";
//	cin >> size;
//	if (size <= 0) return;
//	pArray = new Circle[size];
//}
//	CircleManager::~CircleManager() {
//		if (pArray != NULL)
//			delete[] pArray;
//	}
//
//void CircleManager::input() {
//	int radius;
//	for (int i = 0; i < size; i++) {
//		cout << "원" << i + 1 << ": ";
//		cin >> radius;
//		pArray[i].setRadius(radius);
//	}
//}
//
//void CircleManager::decide() {
//	int count = 0;
//	Circle* p = pArray;
//	for (int i = 0; i < size; i++) {
//		cout << p->getArea() << ' ';
//		if (p->getArea() >= 100 && p->getArea() <= 200)
//			count++;
//		p++;
//	}
//	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
//}
//void CircleManager::run() {
//	input();
//	decide();
//}
//int main() {
//	CircleManager* pMan = new CircleManager();
//	pMan->run();
//	delete pMan;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string str;
//	string address("서울시 성북구 삼선동 389");
//	string copyAddress(address);
//
//	char text[] = { 'L','o','v','e',' ','C','+','+','\0' };
//	string title(text);
//
//	cout << str << endl;
//	cout << address << endl;
//	cout << copyAddress << endl;
//	cout << title << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string names[5];
//
//	for (int i = 0; i < 5; i++) {
//		cout << "이름>> ";
//		getline(cin, names[i], '\n');
//		}
//
//	string latter = names[0];
//	for (int i = 0; i < 5; i++) {
//		if (latter < names[i]) {
//			latter = names[i];
//		}
//	}
//	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
//	}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//
//	cout << "문자열을 입력하세요(한글 안됨)"<<endl;
//	getline(cin, s, '\n');
//	int len = s.length();
//
//	for (int i = 0; i < len; i++) {
//		string first = s.substr(0, 1);
//		string sub = s.substr(1, len - 1);
//		s = sub + first;
//		cout << s << endl;
//	}
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
//	getline(cin, s, '\n');
//	int sum = 0;
//	int startIndex = 0;
//	while (true) {
//		int findex = s.find('+', startIndex);
//		if (findex == -1) {
//			string part = s.substr(startIndex);
//			if (part == "")break;
//			cout << part << endl;
//			sum += stoi(part);
//				break;
//		}
//		int count = findex - startIndex;
//		string part = s.substr(startIndex, count);
//
//		cout << part << endl;
//		sum += stoi(part);
//		startIndex = findex + 1;
//	}
//	cout << "숫자들의 합은 " << sum;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	cout << "여러줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
//	getline(cin, s, '&');
//	cin.ignore();
//
//	string f, r;
//	cout <<endl<<"find: ";
//	getline(cin, r, '\n');
//	cout << "replace: ";
//	getline(cin, r, '\n');
//
//	int startIndex = 0;
//	while (true) {
//		int fIndex = s.find(f, startIndex);
//		if (fIndex == -1)
//			break;
//		s.replace(fIndex, f.length(), r);
//		startIndex = fIndex + r.length();
//	}
//	cout << s << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class Coffee {
//public:
//	string menu;
//	int sum = 0;
//	int order = 0;
//	void espresso(int a);
//	void americano(int a);
//	void cappuchino(int a);
//};
//void Coffee::espresso(int a) {
//	order = a;
//	cout << 3000 * a << "입니다. 맛있게 드세요" << endl;
//	sum += 3000 * a;
//}
//void Coffee::americano(int a) {
//	order = a;
//	cout << 3500 * a << "입니다. 맛있게 드세요" << endl;
//	sum += 3500 * a;
//}
//void Coffee::cappuchino(int a) {
//	order = a;
//	cout << 4000 * a << "입니다. 맛있게 드세요" << endl;
//	sum += 4000 * a;
//}
//
//int main() {
//	Coffee c;
//	cout << "에스프레소 3000원,아메리카노 3500원,카푸치노 4000원입니다."<<endl;
//	while (true) {
//			cout << "주문>>";
//			cin >> c.menu >> c.order;
//			if (c.menu == "에스프레소")
//				c.espresso(c.order);
//			else if (c.menu == "아메리카노")
//				c.americano(c.order);
//			else if (c.menu == "카푸치노")
//				c.cappuchino(c.order);
//		
//			if (c.sum >= 30000) {
//				cout << "오늘 " << c.sum << "을 판매하여 카페를 닫습니다. 내일 봐요~~";
//				break;
//			}
//	}
//	
//}
#include <iostream>
using namespace std;
class Oval {
	int width;
	int height;
	Oval() {
		width = 1;
		height = 1;
	}
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
	double area();
};
Oval::~Oval(){
	cout << "Oval 소멸: " << width << "x" << height;
}
int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}
void Oval::set(int w, int h) {
	width = w;
	height = h;
 }
double Oval::area() {
	return width * height;
}
int main() {
	Oval kitae, jane(10, 15);

}