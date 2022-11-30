#include"File.h"
#include<iostream>

File::File()
{
	name = "fsdfs";
	extention = "ggd";
	size = 23;
}


File::File(std::string name, std::string extention, int size)
{
	this->name = name;
	this->extention = extention;
	this->size = size;
	
}
