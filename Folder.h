#include<vector>

#include"File.h"

class Folder {
private:
	std::vector<File>fileVector;
	std::vector<Folder>folderVector;
public:
	Folder();
	std::vector<File> getFileVector(){
		return fileVector;
	}
	void addFile(File userfile);
	void addFolder(Folder userfolder);
};
