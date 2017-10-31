#include<iostream>
using namespace std;

class SingletonClass {

    public:
        static SingletonClass *getInstance() {
            if (! classInstance) {
                classInstance = new SingletonClass();
            }
            return classInstance;
        }
    private:
        static SingletonClass *classInstance;
        int number;
        SingletonClass()
        {
            number = 0;
        }
};

SingletonClass* SingletonClass::classInstance = NULL;

int main()
{
    // That's why we need to overload = (assignment operator)
    SingletonClass* one = SingletonClass::getInstance();
    SingletonClass* two = SingletonClass::getInstance();
    one == two ? printf("Understand program\n"): printf("Debug it");

    // this works
/*    SingletonClass* one = SingletonClass::getInstance();*/
    //SingletonClass* two = SingletonClass::getInstance();
    //one == two ? printf("Understand program\n"): printf("Debug it");

}
