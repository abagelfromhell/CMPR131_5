#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class student
{
private:
	string name;
	string gradeLevel;
	double GPA;
public:
	//default constructor
	student() : name("unknown"), gradeLevel("unknown"), GPA(0.0)
	{}
	//mutator 
	void setName(string newName)
	{
		name = newName;
	}
	
	//mutator 
	void setGradeLevel(string newGradeLevel)
	{
		gradeLevel = newGradeLevel;
	}
	
	//mutator 
	void setGPA(double newGPA)
	{
		GPA = newGPA;
	}
	
	//overloading operator <<
	friend ostream& operator <<(ostream& outs, const student& obj)
	{
		outs << obj.name << ", " << obj.gradeLevel << ", " << obj.GPA;
		return outs;
	}
	//overloading operator == 
	friend bool operator ==(const student& obj1, const student& obj2)
	{
		if ((obj1.GPA == obj2.GPA) && (obj1.gradeLevel == obj2.gradeLevel) &&
			(obj1.name == obj2.name))
			return true;
		else
			return false;
	}
	//overloading operator <
	friend bool operator <(const student& obj1, const student& obj2)
	{
		if (obj1.name < obj2.name)
			return true;
		else
			return false;
	}
	void readFile(fstream& file)
	{
		string holder;

		getline(file, holder, ',');
		setName(holder);
		holder.clear();

		getline(file, holder, ',');
		setGradeLevel(holder);
		holder.clear();

		getline(file, holder);
		setGPA(stod(holder));
		holder.clear();

	}
};
