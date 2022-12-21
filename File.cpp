#include"File.h"
#include<iostream>

File::File(){
	name = "practicum";
	extention = "pdf";
	size = 15;
}


File::File(std::string name, std::string extention, int size){
	this->name = name;
	this->extention = extention;
	this->size = size;
}
