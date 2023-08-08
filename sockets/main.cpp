#include <iostream>
#include <string>
#include "client.hpp"
#include "server.hpp"

int main()
{
    int choice;
    std::cout << "Choose an option:\n";
    std::cout << "1. Run as server\n";
    std::cout << "2. Run as client\n";
    std::cout << "Your choice: ";
    std::cin >> choice;

    if (choice == 1)
    {
        // Run as server

        Server server;
        server.startListening(5500);
        server.acceptClient();
    

        sf::Packet receivedPacket;
        server.receiveGameData(receivedPacket);
        // Extract the data from the received packet
        std::string serverResponse;
        receivedPacket >> serverResponse;
        // Display the response from the server
        std::cout << "Received message from client: " << serverResponse << std::endl;

        // TODO: Implement server logic
         std::string str1 = "Hello this is from server ";
        sf::Packet packetToSend;
        packetToSend << str1;
        server.sendGameData(packetToSend);
    }
    else if (choice == 2)
    {
        // Run as client
        std::string str1 = "Hello this is from client ";
        sf::Packet packetToSend;
        packetToSend << str1;

        Client client;
        std::string serverIP;
        unsigned short serverPort;

        std::cout << "Enter server IP: ";
        std::cin >> serverIP;
        std::cout << "Enter server port: ";
        std::cin >> serverPort;

        client.connectToServer(serverIP, serverPort);

        client.sendGameData(packetToSend);

        // TODO: Implement client logic
         sf::Packet receivedPacket;
        client.receiveGameData(receivedPacket);
        // Extract the data from the received packet
        std::string serverResponse;
        receivedPacket >> serverResponse;
        // Display the response from the server
        std::cout << "Received message from server: " << serverResponse << std::endl;
    }
    else
    {
        std::cout << "Invalid choice.\n";
        return -1;
    }

    return 0;
}
