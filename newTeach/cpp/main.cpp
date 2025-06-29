#include "main.h"
using namespace std::string_literals;

class Car{
public:
    string mark;
    int speed;
    Car(string M,int spe){
        mark=M;
        speed=spe;
    }
    void drive(){
        cout<<"Машина " + mark + " едет со скоростью " + speed + "км/ч."<<endl;
    }
};
class ElectroCar : public Car{
public:
    int charge;
    ElectroCar(string M,int spe,int charg) : Car(M,spe) {
        charge=charg;
    }
    void drive(){
        cout<<"Машина " + mark + " едет со скоростью " + speed + "км/ч с зарядом " + charge + "Ач." <<endl;
    }
};
int main()
{
    Car mainCar("Kia",460);
    mainCar.drive();
    ElectroCar mainElCar("MIC",460,1000);
    mainElCar.drive();

    return 0;
}
