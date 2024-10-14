#include <iostream>
#include <vector>
#include "log.h"

class Observer;

class Subject {
public:
	virtual bool addObserver(Observer* obverver) = 0;
	virtual bool removeObserver(Observer* obverver) = 0;
	virtual int8_t notifyAll() = 0;
	virtual int8_t notifybyName(std::string name) = 0;
};

class Observer {
public:
	virtual int8_t hasChanged() =0;
	virtual std::string getName() = 0;
};

class IObserver : public Observer {
public:
	IObserver(Subject* subject,std::string name);
	std::string getName() override;
	~IObserver();
private:
	Subject* _subject;
	std::string _name;
};
class ISubject : public Subject {
public:
	ISubject();
	bool addObserver(Observer* obverver) override;
	bool removeObserver(Observer* obverver) override;
	int8_t notifyAll() override;
	int8_t notifybyName(std::string name) override;
private:
	std::vector<Observer*> _listObserver;

};