#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Constituency{
    MemberParliament MP;
    MP.getConstituency();
    Minister minster;
    minster.getConstituency();
    PM primeMinister;
    primeMinister.getConstituency();
}
class Driver{
    public:
    string driver="ramesh";
    string superDriver="john";
    string getSuperDriver(){
        return superDriver;
    }
     string getDriver(){
         return driver;
    }

};


class MemberParliament{
    private:
        string winningConstituency;
        string assignedDriver;
        int moneySpend;
// setter function
    public:
        Driver rider;
        void setConstituency(string winningConstituency){
        this->winningConstituency=winningConstituency;
        }
        string getConstituency(){
            return winningConstituency;
        }
        // string getDriver(){
        //     cin>>assignedDriver;
        //     return assignedDriver;
        // }
        rider.getDriver();
        int getMoneySpend(){
            return moneySpend;
        }
};
class PM : public MemberParliament{
    int moneySpend;
    Driver rider;
    rider.getSuperDriver();  
    string aircraft="boeing747";
    bool permission=true;
    public :
        int getMoneySpend(){
            return moneySpend;
        }

};
class Minister: public MemberParliament{
    int car;
    
    Driver rider;
    rider.getDriver();
    public :
        int moneySpend;
    void setSpendingLimit(int moneySpend){
        this->moneySpend=moneySpend;
    }
    void setMoneySpend(int moneySpend){
        this->moneySpend = moneySpend;
    }
}
class Commisioner{
    int spendingLimit;
    
    Driver rider;
    
    Minister minister;
    minister.moneySpend;
    PM primeMinister;
    primeMinister.getMoneySpend();
    
    bool arrest(string permission,spendMoney){
        return 1;
    }
};


int main() {
    int moneySpend;
    cin>>moneySpend;
    MemberParliament person;
    cout<<"the winning constituency is ";
    string constituency;
    cin>>constituency;
    person.setConstituency(constituency);
    cout<< person.getConstituency();

}
