#include "observer.h"

ISubject::ISubject() {
}

bool ISubject::addObserver(Observer* obverver) {
	if (!this->_listObserver.size()) {
		this->_listObserver.push_back(obverver);
		return true;
	}
		for (auto it : this->_listObserver) {
		if (it == obverver) {
			return false; 
		}
	}
	this->_listObserver.push_back(obverver);
	return true;
}
bool ISubject::removeObserver(Observer * obverver) {
	if (!this->_listObserver.size()) return 0;
	for (auto it = _listObserver.begin(); it != _listObserver.end(); ++it) 
	{
		if ((*it) == obverver) {
			this->_listObserver.erase(it);
			return 1;
		}
	}
	return 0;
}

int8_t ISubject::notifyAll() {
	for (auto it : this->_listObserver) {
		it->hasChanged();
	}
	return 1;
}
int8_t ISubject::notifybyName(std::string name) {
	for (auto it : this->_listObserver) {
		if (it->getName() == name) {
			return it->hasChanged();
		}
	}
	return 0;
}


IObserver::IObserver(Subject* subject,
	std::string name): _subject(subject), _name(name){
	if (!_subject->addObserver(this)) {
		std::cout << "error can not add observer 1" << std::endl;
	}
	else {
		std::cout << "add observer success" << std::endl;
	}
}


std::string IObserver::getName() {
	return this->_name;
}
IObserver::~IObserver() {
	if (!_subject->removeObserver(this)) {
		std::cout << "error when remove observer" << std::endl;
	}
}