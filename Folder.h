#pragma once
#include"File.h"
#include<vector>
using namespace std;

class Folder
{
private:
	
	std::vector<File>fileVector;
	std::vector<Folder>folderVector;
public:
	Folder();
	std::vector<File> getFileVector()
	{
		return fileVector;
	}
	
	
	void addFile(File userfile);
	void addFolder(Folder userfolder);
	
};
