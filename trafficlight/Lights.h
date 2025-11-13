#include <iostream>
#include "tset.h"


class TrafficLight {
protected:
	TSet color;
public:
	virtual bool IsRed() = 0;
	virtual bool IsYellow() = 0;
	virtual bool IsGreen() = 0;
	virtual void Next() = 0;
	virtual void Print() = 0;

	TrafficLight(int size) : color(size) {}
	virtual ~TrafficLight() = default;

	void setColor(int nc);
};

class TrafficLightPed : public TrafficLight {
public:
	TrafficLightPed();
	bool IsRed() override;
	bool IsYellow() override;
	bool IsGreen() override;
	void Next() override;
	void Print() override;
};

class TrafficLightAuto : public TrafficLight {
public:
	TrafficLightAuto();
	bool IsRed() override;
	bool IsYellow() override;
	bool IsGreen() override;
	void Next() override;
	void Print() override;
};
