//#include <iostream>
//using namespace std;
//
//int main() {
//    
//    double* temp = new double[5];
//
//    // 2. 입력
//    cout << "온도 5개 입력>> ";
//    for (int i = 0; i < 5; i++) {
//        cin >> temp[i];
//    }
//
//    
//    double sum = 0;
//    for (int i = 0; i < 5; i++) {
//        sum += temp[i];
//    }
//
//    double avg = sum / 5;
//
//    
//    cout << "평균은 " << avg << endl;
//
//    
//    delete[] temp;
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string line;
//    cout << "텍스트 입력>> ";
//    getline(cin, line, '\n');
//
//    string dest = "";
//    bool isSpace = false;  
//
//    for (int i = 0; i < line.size(); i++) {
//        if (line[i] == ' ') {
//            if (!isSpace) {
//                dest.append(1, ' '); 
//                isSpace = true;
//            }
//        }
//        else {
//            dest.append(1, line[i]);
//            isSpace = false;
//        }
//    }
//
//    cout << dest << endl;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Container {
//    int* p;      
//    int size;    
//
//public:
//    Container(int size);   
//    ~Container();          
//    void read();           
//    void write();          
//    void rotate();         
//    double avg();         
//};
//
//Container::Container(int size) {
//    this->size = size;
//    p = new int[size];
//}
//
//Container::~Container() {
//    delete[] p;
//}
//
//void Container::read() {
//    cout << "정수 " << size << "개 입력>> ";
//    for (int i = 0; i < size; i++) {
//        cin >> p[i];
//    }
//}
//
//void Container::write() {
//    for (int i = 0; i < size; i++) {
//        cout << p[i] << " ";
//    }
//    cout << endl;
//}
//
//void Container::rotate() {
//    int temp = p[size - 1];   
//
//    for (int i = size - 1; i > 0; i--) {
//        p[i] = p[i - 1];
//    }
//
//    p[0] = temp;
//}
//
//double Container::avg() {
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += p[i];
//    }
//    return (double)sum / size;
//}
//
//int main() {
//    Container c(10);   
//    c.read();          
//    c.write();         
//    c.rotate();        
//    c.write();         
//    cout << "평균은 " << c.avg() << endl;
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int main() {
//    string front[8] = { "뛰어난", "사랑스러운", "까불까불", "씩씩한",
//                        "향기로운", "멋진", "용감한", "귀여운" };
//
//    string back[10] = { "호랑이", "장미", "고양이", "나팔꽃", "토끼",
//                        "사자", "별", "강아지", "독수리", "햄스터" };
//
//    string answer;
//
//    srand((unsigned)time(0));  
//
//    while (true) {
//        cout << "사용자 ID 생성(yes/no)>> ";
//        cin >> answer;
//
//        if (answer != "yes")
//            break;
//
//        int idx1 = rand() % 8;   
//        int idx2 = rand() % 10;  
//
//        cout << front[idx1] << " " << back[idx2] << endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book {
//    string title;
//    int price;
//public:
//    Book() { title = ""; price = 0; }
//
//    void set(string title, int price) {
//        this->title = title;
//        this->price = price;
//    }
//
//    string getTitle() { return title; }
//    int getPrice() { return price; }
//};
//
//class Library {
//    string name;
//    Book* p;   
//    int size;
//    int next;
//
//public:
//    Library(string name, int size);
//    ~Library();
//    void add(string title, int price);
//    void show();
//    Book* mostExpensive();
//};
//
//Library::Library(string name, int size) {
//    this->name = name;
//    this->size = size;
//    next = 0;
//    p = new Book[size];
//}
//
//Library::~Library() {
//    delete[] p;
//}
//
//void Library::add(string title, int price) {
//    if (next < size) {
//        p[next].set(title, price);
//        next++;
//    }
//}
//
//void Library::show() {
//    cout << name << "에 입고된 책은 다음 " << next << "권입니다." << endl;
//    for (int i = 0; i < next; i++) {
//        cout << "[" << p[i].getTitle() << "] ";
//    }
//    cout << endl;
//}
//
//Book* Library::mostExpensive() {
//    if (next == 0) return NULL;
//
//    int maxIdx = 0;
//    for (int i = 1; i < next; i++) {
//        if (p[i].getPrice() > p[maxIdx].getPrice()) {
//            maxIdx = i;
//        }
//    }
//    return &p[maxIdx];  
//}
//
//int main() {
//    Library* lib = new Library("한국도서관", 10);
//    lib->add("명품 C++", 30000);
//    lib->add("라즈베리파이", 34000);
//    lib->add("HTML5", 33000);
//
//    lib->show();
//
//    Book* b = lib->mostExpensive();
//    cout << "가장 비싼 책: " << b->getTitle() << ", " << b->getPrice() << endl;
//
//    delete lib;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Container {   
//    int size;       
//public:
//    Container() { size = 10; }
//
//    void fill(int n);      
//    bool consume(int n); 
//    int getSize();         
//};
//
//void Container::fill(int n) {
//    size += n;
//    if (size > 10)
//        size = 10;
//}
//
//bool Container::consume(int n) {
//    if (size < n)
//        return false;
//    size -= n;
//    return true;
//}
//
//int Container::getSize() {
//    return size;
//}
//
//class CoffeeVendingMachine {
//    Container tong[3];         
//
//    void fill();               
//    void getEspresso();       
//    void getAmericano();     
//    void getSugarCoffee();     
//    void show();              
//
//public:
//    void run();               
//};
//
//void CoffeeVendingMachine::fill() {
//    tong[0].fill(10);
//    tong[1].fill(10);
//    tong[2].fill(10);
//}
//
//void CoffeeVendingMachine::show() {
//    cout << "커피 " << tong[0].getSize()
//        << ", 물 " << tong[1].getSize()
//        << ", 설탕 " << tong[2].getSize() << endl;
//}
//
//void CoffeeVendingMachine::getEspresso() {
//    if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
//        cout << "원료가 부족합니다." << endl;
//        return;
//    }
//    tong[0].consume(1);
//    tong[1].consume(1);
//    cout << "에스프레소 드세요" << endl;
//}
//
//void CoffeeVendingMachine::getAmericano() {
//    if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
//        cout << "원료가 부족합니다." << endl;
//        return;
//    }
//    tong[0].consume(1);
//    tong[1].consume(2);
//    cout << "아메리카노 드세요" << endl;
//}
//
//void CoffeeVendingMachine::getSugarCoffee() {
//    if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) {
//        cout << "원료가 부족합니다." << endl;
//        return;
//    }
//    tong[0].consume(1);
//    tong[1].consume(2);
//    tong[2].consume(1);
//    cout << "설탕커피 드세요" << endl;
//}
//
//void CoffeeVendingMachine::run() {
//    cout << "***** 커피자판기를 작동합니다. *****" << endl;
//
//    int menu;
//    while (true) {
//        cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
//        cin >> menu;
//
//        switch (menu) {
//        case 1:
//            getEspresso();
//            break;
//        case 2:
//            getAmericano();
//            break;
//        case 3:
//            getSugarCoffee();
//            break;
//        case 4:
//            show();
//            break;
//        case 5:
//            fill();
//            show();
//            break;
//        default:
//            return;   
//        }
//    }
//}
//
//int main() {
//    CoffeeVendingMachine java;
//    java.run();
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//
//class Histogram {
//    string text;    
//    int count[26];   
//
//public:
//    Histogram(string s);
//    void add(string s);
//    void addc(char c);
//    void draw();
//};
//
//Histogram::Histogram(string s) {
//    text = s;
//    for (int i = 0; i < 26; i++)
//        count[i] = 0;
//}
//
//void Histogram::add(string s) {
//    text += s;
//}
//
//void Histogram::addc(char c) {
//    text += c;
//}
//
//void Histogram::draw() {
//    cout << text << endl;
//
//    int total = 0;
//
//    
//    for (int i = 0; i < (int)text.size(); i++) {
//        char c = tolower(text[i]);
//
//        if (c >= 'a' && c <= 'z') {
//            count[c - 'a']++;
//            total++;
//        }
//    }
//
//    cout << "\n총 알파벳 수 " << total << endl << endl;
//
//    
//    for (int i = 0; i < 26; i++) {
//        char alpha = 'a' + i;
//        cout << alpha << " (" << count[i] << ") : ";
//
//        for (int j = 0; j < count[i]; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//int main() {
//    Histogram histo("You fill up my senses, like a night in a forest\n");
//
//    histo.add("Like the mountains in springtime, like a walk in the rain\n");
//    histo.addc('-');
//    histo.add("Annie's Song by John Denver");
//
//    histo.draw();
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	cout << "너비를 입력하세요>>";
//	int width;
//	cin >> width;
//	cout << "높이를 입력하세요";
//	int height;
//	cin >> height;
//
//	cout << "면적은 " << width * height;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	cout << "이름을 입력하세요>>";
//	char name[11];
//	cin >> name;
//
//	cout << "이름은 " << name << "입니다.";
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main() {
//	char password[11];
//	while (true) {
//		cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
//		cout << "암호>>";
//		cin >> password;
//		if (strcmp(password, "C++") == 0)
//		{
//			cout << "프로그램을 정상 종료합니다" << endl;
//			break;
//		}
//		else
//			cout << "암호가 틀립니다~~"<<endl;
//
//	}
//}
//#include <iostream>
//using namespace std;
//int main() {
//	char address[100];
//	cout << "주소를 입력하세요>>";
//	cin.getline(address, 100);
//
//	cout << "주소는 " << address << "입니다.";
//}
//#include <iostream>
//using namespace std;
//int main() {
//	char howmany[100];
//	cout << "문자열을 입력하세요>>";
//	cin.getline(howmany, 100);
//	int count=0;
//	int i=0;
//	while (howmany[i] != '\0') {
//		if (howmany[i] == 'e')
//			count++;
//		i++;
//
//	}
//	
//	cout << "총 글자수" << i << ", 문자 e의 개수는" << count << "개";
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main() {
//	char password[11];
//
//	cout << "프로그램을 종료하려면 암호를 입력하세요."<<endl;
//
//	while (true) {
//		cout << "암호>>";
//		cin >> password;
//		if (strcmp(password, "C++") == 0) {
//			cout << "프로그램을 정상 종료합니다.";
//			break;
//		}
//		else
//			cout << "암호가 틀립니다~~"<<"\n";
//	}
//
//}
//#include <iostream>
//using namespace std;
//int main() {
//	char address[100];
//	cout << "주소를 입력하세요>>";
//	
//	cin.getline(address, 100);
//	cout << "주소는 " << address << "입니다";
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main() {
//	char line[100];
//	cout << "문자열을 입력하세요>>";
//	int i = 0;
//	int count = 0;
//	cin.getline(line, 100);
//	while (line[i] != '\0') {
//		if (line[i] == 'e')
//			count++;
//		i++;
//	}
//	cout << "총 글자수 " << i << ", " << "문자 e의 개수는 " << count << "개";
//	return 0;
//}
#include <iostream>
#include <string>
using namespace std;
int main() {
	string answer;
	string elvis("Elvis Presley");
	cout << "Falling in love with you를 부른 가수는(힌트 : 첫글자는 "<<elvis[0]<<") ? ";
	
	cin >> answer;
	if (answer != elvis)
		cout << "틀렸습니다." << elvis << "입니다.";
	else
		cout << "맞았습니다.";
	return 0;
}