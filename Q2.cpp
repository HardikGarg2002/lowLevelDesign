#include <iostream>
using namespace std;
class Inverter{
  public:
    float operatingVoltage;
    int powerRating(int current){
        return powerRating*current;
    }
     
};
class Battery{
    bool battery;
    void canChargeBattery(){
        cout<<"battery can be chargerd";
    }
}
class SolarInverter: Inverter{
    string solarPanel;
    int solarEnergy;

};
class NonSolarInverter: Inverter{
    Battery  battery;
}
class SolarInverterWithBattery: SolarInverter{
    bool battery;
    Battery PCU;
    void chargeWithBattery(){
        cout<<"can be charged with battery";
    }

}
class SolarInverterWithoutBattery{
   
    void isGridOn(){
        // works if grid is availaible
         GridOn GTI;
    }

}
class GridOn{
    string energyToGrid;
    int money;
    int rate;
    public: 
      void GridOn(){
          money=energyToGrid*rate;
          return money;
      }
}

int main() {
    SolarInverter regalia;
    SolarInverterWithBattery PCU;
    SolarInverterWithoutBattery GTI;
    NonSolarInverter iCruzeInverters;
}
