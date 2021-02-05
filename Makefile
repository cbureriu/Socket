server_objects = Socket.o example_server.o
client_objects = Socket.o example_client.o

all : server client

server: $(server_objects)
	g++ -o server $(server_objects)


client: $(client_objects)
	g++ -o client $(client_objects)


Socket: Socket.cpp
example_server: example_server.cpp
example_client: example_client.cpp


clean:
	rm -f *.o server client