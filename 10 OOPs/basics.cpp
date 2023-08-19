#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

class Animal {
    // State or Property
    // public:
    int age;
    int weight;
    string name;

public: // Specify access modifier as public

    void eat() {
        cout<<"Im inside eat";

    }
    void sleep() {
        cout<<"Im inside sleep";

    }
    int getAge(){
        return age;
    }
        int getWeight(){
        return weight;
    }
        string getName(){
        return name;
    }
    void setAll(int age, int weight, string name){
        this->age=age;
        this->weight=weight;
        this->name=name;
        //this is a pointer so use it by ->
    }
    Animal(){
        //Default cons called at first
        cout<<"Constructor called";
    }
        Animal(int age){
        //Para cons called
        this->age=age;
        cout<<"Constructor called";
        cout<<endl;
        cout<<this->age;
    }
    Animal (Animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
        cout<<"Inside copy cons";
    }
    Animal(){
        cout<<"Inside Destructor";
    }
};


int main() {
    // Animal me;
    // me.age=24;
    // me.name="ARM";
    // me.weight=70;
    // Animal* me=new Animal;
    // me->setAll(10,20, "ashikur");
    // cout<<me->getAge();
    // cout<<me->getWeight();
    // cout<<me->getName();
    // me->eat();
    // cout<<endl;
    // me->sleep();
    Animal a;
    cout<<endl;
    // cout<<b->getAge();
    // Animal b(a);
    Animal b=a;

    Animal a;
    a.age=5;

    Animal* b=new Animal;
    b->age=12;
    delete b;//this will call destructor (Hurreh!)


}
