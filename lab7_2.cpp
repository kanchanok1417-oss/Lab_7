#include <iostream>
#include <string>
#include <limits>
#include <sstream> 
using namespace std;

int main(){
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    string name, movie, days, ID, sentence;
    
    cout << "?????:";
    getline(cin, name); 
    
    cout << " Fahsai: Wow!!! " << name <<" is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    
    int Gear;
    cout << name << ": ";
    
    getline(cin, ID); 
    if (ID.length() >= 2) {
        Gear = ((ID[0] - '0') * 10 + (ID[1] - '0')) - 12;
    } else {
        Gear = 0;
    }

    cout <<"Fahsai: I think you may be GEAR "<< Gear <<". I have a free movie ticket for you." << endl;
    cout <<"Fahsai: Let's go to the cinema together!!!" << endl << "Fahsai: What movie do you want to watch?" << endl;
    
    cout << name << ": ";
    getline(cin, movie); 
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin, days);

    cout << "Fahsai: " << days <<"....that is OK!!! I'm looking forward to watching " << movie <<" with you."<< endl;
    cout << name <<": ";
    getline(cin, sentence);
    
    cout << "Fahsai: 555+ see you " << days << ". Bye Bye \\(^ ^)/";
    
    return 0;
}

