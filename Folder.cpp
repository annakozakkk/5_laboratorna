#include"Folder.h"
#include<iostream>

Folder::Folder()
{

}


void Folder::addFile(File userfile)
{
	fileVector.push_back(userfile);
}
void Folder::addFolder(Folder userfolder)
{
	folderVector.push_back(userfolder);
}
