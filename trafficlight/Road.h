#include "Lights.h"

class Road {
public:
	void Start(TrafficLightPed& ped, TrafficLightAuto& aut);
	void Print(TrafficLightPed& ped, TrafficLightAuto& aut);
	void Change(TrafficLightPed& ped, TrafficLightAuto& aut, int& k);
	void ChangeToYellow(TrafficLightPed& ped, TrafficLightAuto& aut);
};
