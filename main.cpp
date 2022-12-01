#include"File.h"
#include"Folder.h"
#include<iostream>



int main()
{
	File file1( "ghgh", "jij", 544);
	

	Folder folder1;
	Folder folder;
	
	folder.addFile(file1);
	folder1.addFolder(folder);
	
		
	
	std::cout <<"File number one:\n name:"<< folder.getFileVector()[0].getName() << "\n extention:" << folder.getFileVector()[0].getExtention() << "\n size:" << folder.getFileVector()[0].getSize() << std::endl;
}