#include "Socket.h"
#include <string>
#include <iostream>


int main(int argc, char *argv[]){
	
	std::cout << "server running....\n";

	try{
		ServerSocket server(30000);
		
		while(true){
			ServerSocket new_sock;
			server.accept(new_sock);

		try{
		  while(true){
			std::string data;
			new_sock >> data;
			new_sock << data;
			}
		}
		catch(SocketException&){}

		}
	}
	catch(SocketException& e){
		std::cout << "Exception was caught:" << e.description() << "\nExiting.\n";
	}

  return 0;
}