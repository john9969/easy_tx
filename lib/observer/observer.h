#include <iostream>
#include <vector>
class Observer;

class Subject {
public:
	virtual bool addObserver(Observer* obverver) = 0;
	virtual bool removeObserver(Observer* obverver) = 0;
	virtual int8_t notifyAll() = 0;
	virtual int8_t notifybyName(std::string name) = 0;
	virtual int8_t notifyStringbyName(std::string name,std::string content) = 0;
	virtual int8_t notifyBoolbyName(std::string name,bool content) = 0;
	virtual int8_t notifyIntbyName(std::string name,int content) = 0;
};

class Observer {
public:
	virtual int8_t hasChanged() =0;
	virtual int8_t hasChangedString(std::string data) =0;
	virtual int8_t hasChangedBool(bool data) =0;
	virtual int8_t hasChangedInt(int data) =0;

	virtual std::string getName() = 0;
};

class IObserver : public Observer {
public:
	IObserver(Subject* subject,std::string name);
	std::string getName() override;
	virtual int8_t hasChanged() override;
	virtual int8_t hasChangedString(std::string data) override;
	virtual int8_t hasChangedBool(bool data) override;
	virtual int8_t hasChangedInt(int data) override;
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
	int8_t notifyStringbyName(std::string name, std::string content) override;
	int8_t notifyBoolbyName(std::string name, bool content) override;
	int8_t notifyIntbyName(std::string name, int content) override;
private:
	std::vector<Observer*> _listObserver;

};