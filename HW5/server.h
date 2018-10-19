#include <iostream>
#include <string>
using namespace std;

class Server
{
protected:
	int* sender; //declaring sender pointer
	int* receive; //declaring receiver pointer

public:
	virtual void establishConnection();
	virtual void sendMessage();
	void swapClients();



};