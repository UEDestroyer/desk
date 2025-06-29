#include "main.h"


class BankAccount {
private:
    double balance;
public:
    BankAccount(){
        balance=0;
    }
    void deposite(double amount){
        if (amount>0)
        {
            balance+=amount;

        }
    }
    void withdraw(double amount){
        if (amount>0 && amount<=balance) balance-=amount;
    }
    double getBalance(){
        return balance;
    }
};

class Person{
private:
    string name;
    int age;
public:
    Person(string nameP,int ageP){
        name=nameP;
        age=ageP;
    }
    void sayHello(){
        cout<<"Привет! Меня зовут " + name + ". Мне " + age + " лет"<<endl;
    }
};

class Animal{
public:
    void speak(){
        cout<<"Я животное"<<endl;
    }
};
class Dog : public Animal{
public:
    void bark(){
        cout<<"Гав Гав"<<endl;
    }
};



int main(){
    system("chcp 65001");
    Person pl("Vassa",25);
    pl.sayHello();
    
    funcs::void_s(true);

    BankAccount account;
    account.deposite(1000);
    account.withdraw(200);
    cout<<"balance: "<<account.getBalance()<<" руб "<<endl;

    funcs::void_s(true);

    Dog myDog;
    myDog.speak();
    myDog.bark();
    return 0;
}