#include <bits/stdc++.h>

struct MARSH{
    std::string BEGST;
    std::string TERM;
    int NUMER;

    void swap(MARSH x){
        std::string temp = this->BEGST;
        this->BEGST = x.BEGST;
        x.BEGST = temp;
        temp = this->TERM;
        this->TERM = x.TERM;
        x.TERM = temp;
        int tempi = this->NUMER;
        this->NUMER = x.NUMER;
        x.NUMER = tempi;
    }
};

void EnterDataForMarsh(MARSH arr[]){
    for (auto i = 0; i < 8; ++i){
        MARSH temp;
        std::cout << "Enter data for " << i+1 << "structure:\n";
        std::cout << "Enter staring point: ";
        std::cin >> temp.BEGST;
        std::cout << "\nEnter destination: ";
        std::cin >> temp.TERM;
        std::cout << "\nEnter route number: ";
        std::cin >> temp.BEGST;
        std::cout << std::endl;
        if (i == 0)
            arr[0] = temp;
        else{
            for (auto j = 0; j < i; ++j){
                if (temp.NUMER > arr[j].NUMER) temp.swap(arr[j]);
            }
            arr[i] = temp;
        }
    }
}

void FindRoute(MARSH arr[], int num){
    for (auto i = 0; i < 8; ++i){
        bool find = arr[i].NUMER == num;
        if (find){
            std::cout << arr[i].BEGST << std::endl << arr[i].TERM << std::endl;
            return;
        }
    }
    std::cout << "There is no route with this number.\n";
}

class Phone{
private:
    std::string model;
    float memory;
    int wifi;

public:
    Phone(std::string newmodel, float newmemory, int newwifi) {
        this->model = newmodel;
        this->memory = newmemory;
        this->wifi = newwifi;
    }
    float getMemory(){
        return this->memory;
    }
    int getWifi(){
        return this->wifi;
    }
    std::string getModel(){
        return this->model;
    }

    void setModel(std::string newmodel){
        this->model = newmodel;
    }
    void setMemory(float newmemory){
        this->memory = newmemory;
    }
    void setWifi(int newifi){
        this->wifi = newifi;
    }

    void Info(){
        std::cout << model << "\n" << memory << " Gb\n" << wifi << " G\n";
    }

    bool operator==(Phone second){
        return ((second.model == this->model) && (second.wifi == this->wifi) && (second.memory == this->memory));
    }
};

int main() {

    MARSH TAFFIC[8];

    return 0;
}
