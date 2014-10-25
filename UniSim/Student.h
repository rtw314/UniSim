#pragma once
class CStudent
{
public:
	CStudent(void);
	~CStudent(void);
	std::string GetName();
	int GetAge();

private:
	std::string Name;
	int Age;
	//int nextNum;
	/*
	Other things to include:
	-array of classes (struct) the student is enrolled in
	-grades
	-personality types that determine AI?
	-
	*/
};