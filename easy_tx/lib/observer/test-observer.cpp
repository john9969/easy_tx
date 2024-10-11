#include "observer.h"

//----------------------------------------
//---------TEST-OBSERVER------------------
//----------------------------------------
//----------------------------------------

//--------code client bellow--------------
class ClientSubject :public ISubject {

	
private:
	ClientSubject() {

	}
	static ClientSubject* _instance;
public:

	static ClientSubject* getInstance();
};
ClientSubject* ClientSubject::_instance = nullptr;

ClientSubject* ClientSubject::getInstance() {
	if (!_instance) _instance = new ClientSubject();
	return _instance;
}


class ClientObserver: public IObserver {
public:
	ClientObserver(Subject* subject, std::string name) : IObserver(subject, name)
	{

	}
	~ClientObserver() {

	}
	int8_t hasChanged() {
		std::cout << "<OUTPUT>: hasChange() from client called" << std::endl;
		return 1;
	}
};
void call() {
	Subject* clientSubject = ClientSubject::getInstance();
	}
//---------------------------------------

int main() {
	Subject* clientSubject = ClientSubject::getInstance();
	ClientObserver* clientObserver = new ClientObserver(clientSubject, "client");

	std::cout << "START_TEST_OBSERVER " << std::endl;
	std::cout << "-----UT001-------" << std::endl;
	clientSubject->notifyAll();
	std::cout <<"" << std::endl;
	std::cout <<"" << std::endl;

	std::cout << "-----UT002-------" << std::endl;
	clientSubject->notifybyName("client");
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	std::cout << "-----UT003-------" << std::endl;

	if (!clientSubject->notifybyName("client-diff")) {
		std::cout << "<OUTPUT>: hasChange() not call in diff name" << std::endl;
	}
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "END_TEST_OBSERVER" << std::endl;
	return 1;
}