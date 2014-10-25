#include "stdafx.h"
#include "Student.h"

int main(int argc, char* argv[])
{
	//nextNum = 1;
	CStudent* dude = new CStudent();
	CStudent* dude2 = new CStudent();
	std::cout << "Names: " << dude->GetName().c_str() << ", "<< dude2->GetName().c_str() << std::endl
		<< "Ages: " << dude->GetAge() << ", " << dude2->GetAge() << std::endl;
	std::system("Pause");
	return 0;
}

