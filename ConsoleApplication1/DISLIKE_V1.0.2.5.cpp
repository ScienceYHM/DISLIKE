#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


static void taskkillstudent_1_NF()
{
    system("taskkill /f /im REDAgent.exe");
    system("taskkill /f /im StudentMain.exe");

}
static void taskkillstudent_2_NF()
{
    system("taskkill /f /im REDAgent.exe");
    system("taskkill /f /im StudentMain.exe");
    system("taskkill /f /im Yistart.exe");
}
static void taskkillstudent_2_HF()
{
    for (int i = 0; i >= 0; i++) {
        system("taskkill /f /im REDAgent.exe");
        system("taskkill /f /im StudentMain.exe");
        system("taskkill /f /im Yistart.exe");
    }
}
void startstudent_0()
{
    system("start REDAgent.exe");
    system("start StudentMain.exe");
    system("start Yistart.exe");
}
void information_1()
{
    system("cls");
    printf("=========================================================\n");
    printf(" =====   ======= ======= =       ======= =    == =======\n");
    printf(" =    =     =    =       =          =    =  ==   =     =\n");
    printf(" =     =    =    ======= =          =    ===     =======\n");
    printf(" =    =     =          = =          =    =  ==   =\n");
    printf(" =====   ======= ======= ======= ======= =    == =======\n");
    printf("=========================================================\n");
    printf("协议：\n");
    printf("1.禁止使用此软件扰乱课堂秩序，后果与作者无关;\n2.此软件版权归YHM所有\n3.此软件是为了让使用者学会用bat程序删除、打开、关闭文件\n4.未经作者许可，禁止复制和转载此文件\n");
    printf("=========================================================\n");
    system("timeout 3");
}
void table()
{
    printf("=========================================================\n");
    printf(" =====   ======= ======= =       ======= =    == =======\n");
    printf(" =    =     =    =       =          =    =  ==   =     =\n");
    printf(" =     =    =    ======= =          =    ===     =======\n");
    printf(" =    =     =          = =          =    =  ==   =\n");
    printf(" =====   ======= ======= ======= ======= =    == =======\n");
    printf("=========================================================\n");
    printf("协议：\n");
    printf("1.禁止使用此软件扰乱课堂秩序，后果与作者无关;\n2.此软件版权归YHM所有\n3.此软件是为了让使用者学会用bat程序删除、打开、关闭文件\n4.未经作者许可，禁止复制和转载此文件\n");
    printf("=========================================================\n");
}

int main()
{
    table();
    printf("A.同意                                         B.不同意\n");
    char a;
    scanf_s("%c", &a);
    if (a != 65) {
        printf("---非法闯入---\n");
        system("timeout /t 3");
        exit(0);
    }


    int m = 1;
    while(m > 0){
    system("cls");
    table();
    printf("功能列表：\n");
    printf("1.关闭学生端并抑制启动 \n");
    printf("2.启动学生端 \n");
    printf("3.关闭学生端\n");
    printf("4.程序信息 \n");
    printf("5.退出程序 \n");
    printf("6.删除OS-easy\n");
    printf("7.打开我的世界官网\n");
    printf("8.打开我的世界开发者官网\n");
    printf("=========================================================\n");
    printf("输入单字符:");
    int b;
    scanf_s("%d", &b);
    char bc = b + '0';
    if (bc == 49)
    {
        taskkillstudent_2_HF();
    }
    else if (bc == 50)
    {
        startstudent_0();
    }
    else if (bc == 51)
    {
        taskkillstudent_1_NF();
    }
    else if (bc == 52)
    {
        information_1();
    }
    else if (bc == 53)
    {
        exit(0);
    }
    else if (bc == 54)
    {
        system("del Yistart.exe");
        system("del REDAgent.exe");
        system("del StudentMain.exe");

    }
    else if (bc == 55)
    {
        system("start https://mc.163.com/index.html");
    }
    else if (bc == 56)
    {
        system("start https://mc.163.com/dev/index.html");
    }
    else if (bc == 58)
    {
        m = 0;
        m--;
    }else{
        m++;
    }
    m++;
}


    int n = 1;
    while (n > 0){
    system("cls");
    table();
    printf("功能列表：\n");
    printf("1.关闭学生端并抑制启动 \n");
    printf("2.启动学生端 \n");
    printf("3.关闭学生端\n");
    printf("4.程序信息 \n");
    printf("5.退出程序 \n");
    printf("6.删除OS-easy\n");
    printf("7.打开我的世界官网\n");
    printf("8.打开我的世界开发者官网\n");
    printf("9.打开教师端(暂未开启)\n");
    printf("10.关闭教师端(暂未开启)\n");
    printf("11.网页版Visual Studio Code\n");
    printf("=========================================================\n");
    int c;
    scanf_s("%d", &c);
    char cc = c + '0';
    if (cc == 49)
    {
        taskkillstudent_2_HF();

    }
    else if (cc == 50)
    {
        startstudent_0();
    }
    else if (cc == 51)
    {
        taskkillstudent_1_NF();
    }
    else if (cc == 52)
    {
        information_1();
    }
    else if (cc == 53)
    {
        exit(0);
    }
    else if (cc == 54)
    {
        system("del Yistart.exe");
        system("del REDAgent.exe");
        system("del StudentMain.exe");

    }
    else if (cc == 55)
    {
        system("start https://mc.163.com/index.html");
    }
    else if (cc == 56)
    {
        system("start https://mc.163.com/dev/index.html");
    }
    else if (cc == 59)
    {
        system("start https://vscode.dev");
    }
    else if (cc == 14 + 48)
    {
        n = 0;
        n--;
    }
    else {
        n++;
    }
    n++;
    }


int q = 0;
while(q >= 0){
    system("cls");
    table();
    printf("功能列表：\n");
    printf("1.关闭学生端并抑制启动 \n");
    printf("2.启动学生端 \n");
    printf("3.关闭学生端\n");
    printf("4.程序信息 \n");
    printf("5.退出程序 \n");
    printf("6.删除OS-easy\n");
    printf("7.打开我的世界官网\n");
    printf("8.打开我的世界开发者官网\n");
    printf("9.打开教师端(暂未开启)\n");
    printf("10.关闭教师端(暂未开启)\n");
    printf("11.网页版Visual Studio Code\n");
    printf("12.程序信息(自带版)\n");
    printf("13.开发人员信息\n");
    printf("=========================================================\n");
    int f;
    scanf_s("%d", &f);
    char fc = f + '0';
    if (fc == 49)
    {
        taskkillstudent_2_HF();

    }
    else if (fc == 50)
    {
        startstudent_0();
    }
    else if (fc == 51)
    {
        taskkillstudent_1_NF();
    }
    else if (fc == 52)
    {
        information_1();
    }
    else if (fc == 53)
    {
        exit(0);
    }
    else if (fc == 54)
    {
        system("del Yistart.exe");
        system("del REDAgent.exe");
        system("del StudentMain.exe");

    }
    else if (fc == 55)
    {
        system("start https://mc.163.com/index.html");
    }
    else if (fc == 56)
    {
        system("start https://mc.163.com/dev/index.html");
    }
    else if (fc == 59)
    {
        system("start https://vscode.dev");
    }
    else if (fc == 60)
    {
        information_1();
    }
    else if (fc == 61)
    {
        system("cls");
        table();
        printf("1.YHM STUDIO:\n-- YHM\n2.NDS STUDIO:\n-- N98MC_DG2\n-- SLR\n-- LRH\n");
        system("timeout -1");
    }
    else {
        q++;
    }
    q++;
}

return 0;
}




