#include "Lights.h"
using namespace std;


void TrafficLight::setColor(int nc) {
    for (int i = 0; i < color.GetMaxPower(); i++) {
        color.DelElem(i);
    }
    color.InsElem(nc);
}

//Pedestrian
TrafficLightPed::TrafficLightPed() : TrafficLight(3) {
    setColor(0); //устанавливает GREEN : 001
}

bool TrafficLightPed::IsGreen() {
    return color.IsMember(0); // 001
}
bool TrafficLightPed::IsYellow() {
    return color.IsMember(1); // 010
}
bool TrafficLightPed::IsRed() {
    return color.IsMember(2); // 100
}

void TrafficLightPed::Next() {
    if (IsGreen()) {
        setColor(1); // -> yellow
    }
    else if (IsYellow()) {
        setColor(2); // -> red
    }
    else {
        setColor(0); // -> green
    }
}

void TrafficLightPed::Print() {
    cout << "Pedestrian: ";
    if (IsGreen()) cout << "Green" << endl;
    else if (IsYellow()) cout << "Yellow" << endl;
    else cout << "Red" << endl;
}



//Auto
TrafficLightAuto::TrafficLightAuto() : TrafficLight(3) {
    setColor(0); //устанавливает GREEN : 001
}

bool TrafficLightAuto::IsGreen() {
    return color.IsMember(0); // 001
}
bool TrafficLightAuto::IsYellow() {
    return color.IsMember(1); // 010
}
bool TrafficLightAuto::IsRed() {
    return color.IsMember(2); // 100
}

void TrafficLightAuto::Next() {
    if (IsGreen()) {
        setColor(1); // -> yellow
    }
    else if (IsYellow()) {
        setColor(2); // -> red
    }
    else {
        setColor(0); // -> green
    }
}

void TrafficLightAuto::Print() {
    cout << "Auto: ";
    if (IsGreen()) cout << "Green" << endl;
    else if (IsYellow()) cout << "Yellow" << endl;
    else cout << "Red" << endl;
}