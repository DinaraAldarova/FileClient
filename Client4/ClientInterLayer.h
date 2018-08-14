#pragma once
#include <string>
#include <list>
#include <iostream>
#include <fstream>
#include < Windows.h >

using namespace std;

enum class c {stopped, logged, connected, avalible};

class ClientInterLayer
{
#pragma region ��������
private:
	c status;
	string IP = "127.0.0.1";
	int name;
	list<string> files = { "1.txt", "2.txt", "3.txt" };
	list<string> users = { "User1", "User2", "User3" };
	string puth = "D:\\Client";
	char buff[4096];
	SOCKET client_socket;
	sockaddr_in dest_addr;
	u_short port = 665;
	HOSTENT *hst;

public:
	bool isOutDated_UploadUsers = true;
	bool isOutDated_DownloadFiles = true;

#pragma endregion

#pragma region Get- � set- ������
private:

public:
	ClientInterLayer();
	c Status();
	int	 getName();
	bool isLogged();
	bool isConnected();
	bool isAvalible();
	list<string> getFiles();
	list<string> getUsers();

#pragma endregion

#pragma region ������ ������ �������
private:
	void Exit();
	
public:
	bool Login(string IP);
	bool Logout();
	bool Connect();
	bool Disconnect();

#pragma endregion

};