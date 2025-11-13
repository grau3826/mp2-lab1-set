#include "Road.h"
#include <chrono>
#include <thread>
using namespace std;


void Road::Print(TrafficLightPed& ped, TrafficLightAuto& aut) {
	aut.Print();
	ped.Print();
	cout << "-----------" << endl;
}
void Road::Change(TrafficLightPed& ped, TrafficLightAuto& aut, int& k) {
	if (!k) {
		ped.Next();
		ped.Next();
		aut.Next();
		k = 1;
	}
	else {
		aut.Next();
		aut.Next();
		ped.Next();
		k = 0;
	}
}
void Road::ChangeToYellow(TrafficLightPed& ped, TrafficLightAuto& aut) {
	while (!ped.IsYellow()) {
		ped.Next();
	}
	while (!aut.IsYellow()) {
		aut.Next();
	}
}

void Road::Start(TrafficLightPed& ped, TrafficLightAuto& aut) {
	while (!ped.IsRed()) {
		ped.Next();
	}
	while (!aut.IsGreen()) {
		aut.Next();
	}

	cout << "Start" << endl;
	int k = 0; //ped = red
	while(true) {
		Print(ped, aut);

		this_thread::sleep_for(chrono::seconds(5));

		ChangeToYellow(ped, aut);
		Print(ped, aut);

		this_thread::sleep_for(chrono::seconds(2));

		Change(ped, aut, k);
	}

}