#pragma once
#include <string>

class File
{
private:
	std::string name;
	std::string extention;
	int size;
	
public:
	std::string getName() {
		return name;
	}
	std::string getExtention() {
		return extention;
	}
	int getSize()
	{
		return size;
	}
	
	File();
	
	File( std::string name, std::string extention, int size);
	
};
