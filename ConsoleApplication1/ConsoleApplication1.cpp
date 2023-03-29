// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct delo
{
    string name;
    int prior;
    string ops;
    string date;

};
void inscription(delo pat) 
{
    cout << "\Title\t:" << endl;
    cin >> pat.name;
    cout << "\nPrior\t:" << endl;
    cin >> pat.prior;
    cout << "\n ops\t:" << endl;
    cin >> pat.ops;
    cout << "\n date\t:" << endl;
    cin >> pat.date;
    cout << endl;
}
bool NameSearch_delo(delo user[], int legnth) 
{
    bool delo = 0;
    for (int i = 0; i < legnth; i++)
    {
        if (strstr(user[i].name.c_str(), user) != NULL)
        {
            cout << delo[i].name << " ";
            delo = true;
            break;
        }
        else { delo = false; }
        
    }
    return delo;
}
void Prior_Search(delo  user) 
{
    if (strstr(delo[].prior, user) != NULL)
    {
        cout << delo.prior << " ";
        
    }
}
void Ops_Search(delo user) 
{
    if (strstr(delo.ops, user )!= NULL) 
    {
        cout << delo.ops << " ";
    }
}
void date_Search(delo user) 
{
   if(strstr(delo.date., user)!= NULL)
}
int main()
{
    cout << "\t\t DeloPoisk" << endl;
    string name;
    int prior;
    string ops;
    string date;
    const int length = 6;
    int menu;
    do 
    {
        cout << "t Selection menu" << endl;
        cout << "nSearch by title[1]" << endl;
        cout << "nSearch by prior[2]" << endl;
        cout << "Search by ops[3]" << endl;
        cout << "show all posts-[4]" << endl;
        cin >> "input:";
        cout << endl;
        switch (input) 
        {
        case 1:
            char user1[30];
            cout << "Enter delo title";
            cin >> user1;
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
