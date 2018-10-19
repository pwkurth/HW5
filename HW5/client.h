#include <iostream>
#include <string>
using namespace std;


class Client {
	
	private:
		
		int id;
		
		string message;
		
		bool possesKey = true;
		
		char key[26];
	
	public:
		
		//Parameterized Constructor//

		int Client::getID() {
			return id;
		}

		void Client::setID() {
			id = k; //Setting value of ID//
		}

		string Client::getMessage() {
			return message;
		}
		
		void Client::getMessage() {
			message = m;
		}

		bool Client::setPossesKey() {
			return possesKey;
		}

};
