#include <time.h>
#include <cstdio>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
using namespace std;
void printcolor(string words, string color) {
    // 获取标准输出句柄
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // ===================== 所有颜色对应代码 =====================
    if (color == "black")         SetConsoleTextAttribute(hConsole, 0);   // 黑色
    else if (color == "navy")     SetConsoleTextAttribute(hConsole, 1);   // 深蓝
    else if (color == "green")    SetConsoleTextAttribute(hConsole, 2);   // 绿色
    else if (color == "teal")     SetConsoleTextAttribute(hConsole, 3);   // 青蓝
    else if (color == "maroon")   SetConsoleTextAttribute(hConsole, 4);   // 深红
    else if (color == "purple")   SetConsoleTextAttribute(hConsole, 5);   // 紫色
    else if (color == "gold")     SetConsoleTextAttribute(hConsole, 6);   // 金色
    else if (color == "light_gray") SetConsoleTextAttribute(hConsole, 7); // 浅灰
    else if (color == "dark_gray")  SetConsoleTextAttribute(hConsole, 8); // 深灰
    else if (color == "blue")     SetConsoleTextAttribute(hConsole, 9);   // 蓝色
    else if (color == "lime")     SetConsoleTextAttribute(hConsole, 10);  // 亮绿
    else if (color == "cyan")     SetConsoleTextAttribute(hConsole, 11);  // 青色
    else if (color == "red")      SetConsoleTextAttribute(hConsole, 12);  // 红色
    else if (color == "pink")     SetConsoleTextAttribute(hConsole, 13);  // 粉色
    else if (color == "yellow")   SetConsoleTextAttribute(hConsole, 14);  // 黄色
    else if (color == "white")    SetConsoleTextAttribute(hConsole, 15); // 白色
    // ============================================================
    
    // 输出文字
    cout << words;
    // 恢复默认颜色（白色）
    SetConsoleTextAttribute(hConsole, 15);
}
char* display(char s) {
    // 动态分配内存，存储密码
    char* pwd = (char*)malloc(100 * sizeof(char));
    int index = 0;
    char ch;

    if (pwd == NULL) {
        return NULL;
    }

    while (1) {
        ch = getch();  // 无回显读字符

        // 回车结束
        if (ch == '\r') {
            pwd[index] = '\0';
            break;
        }

        // 退格
        if (ch == '\b' && index > 0) {
            index--;
            printf("\b \b");
        }
        // 正常字符
        else if (ch != '\b' && index < 99) {
            pwd[index++] = ch;
            putchar(s);
        }
    }

    return pwd;  // 返回真实密码字符串
}
int main(){
	system("title My Top Secret -- by Chency_Wang");
	printf("password = ");
	srand((unsigned)time(NULL));
	int max = 9999,min = 1000;
	int r = rand() % (max - min + 1) + min;
	string pwd;
	int vr;
	string name,birth,district,city,province,country,ricn,pinsc,vfpwd;
	pwd = display('6');
	if(pwd == "zhiyiliu6422"){
		system("cls");
		printf("Name = ");
		cin >> name;
		printf("Birth = ");
		cin >> birth;
		printf("District = ");
		cin >> district;
		printf("City = ");
		cin >> city;
		printf("Province = ");
		cin >> province;
		printf("Conutry = ");
		cin >> country;
		printf("Resident Identity Card Number = "); 
		ricn = display('6');
		if(name == "Chency.Wang" &&
	    birth == "Jan.4,2014" &&
	    district == "KaiPing" &&
	    city == "TangShan" &&
	    province == "HeBei" &&
	    country == "China" &&
	    ricn == "130205201401040613"
		){
			system("cls");
			printf("Please Input PIN Security Code <std::string> = ");
			pinsc = display('a');
			if(pinsc == "zhiyiliu6422"){
				system("cls");
				printf("Verification Failed!!!!!!!");
				vfpwd = display('6');
				if(vfpwd == "zhiyiliu6422"){
					system("cls");
					printf("%d\n",r);
					printf("Random Verification Code = ");
					scanf("%d",&vr);
					if(vr == r){
						system("cls");
						printf("我喜欢刘芷伊");
						Sleep(350);
						return 0;
					}else{
						return 0;
					}
				}else{
					return 0;
				}
			}else{
				return 0;
			}
		}else{
			return 0;
		}
	}else{
		return 0;
	}
	int n;
	scanf("%d",&n);
	return 0;
} 
