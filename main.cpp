#include <iostream>
#include <stack>
using namespace std;

//прототипируем метод вывода стека printStack(stack<char> messageStack), чтобы определить его функционал после main()
void printStack(stack<char> messageStack);

int main()
{
    //объявляем стек символов messageStack и строку messageString, которую вводит юзер
    stack<char> messageStack;
    string messageString;

    cout << "Type your message: ";

    //используем getline(), чтобы считать строку ввода с учётом пробельных символов
    getline(cin, messageString);

    //проверяем, не пустую ли строку ввёл юзер?
    //если да, то пишем, что строка пустая
    if (messageString.empty()){
        cout << "Your message is empty.";
    }
    //если строка не пустая, то разбиваем строку на символы и заносим в стек через push()
    else {
        for(unsigned i{}; i < messageString.length(); i++)
        {
            messageStack.push(messageString[i]);
        }

        //вызываем метод вывода стека printStack(stack<char> messageStack)
        printStack(messageStack);
        }
}



//метод вывода стека
void printStack(stack<char> messageStack)
{
    //пока стек не пуст, выводим верхний элемент через top(), после убираем его с помощью pop()
    while (!messageStack.empty()) {
        cout << messageStack.top();
        messageStack.pop();
    }
}