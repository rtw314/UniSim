#include "StdAfx.h"
#include "Student.h"


CStudent::CStudent(void)
{
	std::srand (time(NULL));
	Name = "Student";// + nextNum; //later incorporate a randomizer for names as well
	//nextNum++;
	Age = std::rand() % 15 + 18;
}


CStudent::~CStudent(void)
{
}

std::string CStudent::GetName()
{
	return Name;
}

int CStudent::GetAge()
{
	return Age;
}