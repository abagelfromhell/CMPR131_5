#include <iostream>
#include "input.h"
#include "student.h"
#include <vector>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int menuOption();

void vectorSwitch();
char vectorMenu();

void listSwitch();
char listMenu();

void listOrContainerSwitch();
char listOrContainerMenu();

template<class t>
void structureReadFile(t& studentList, string structureName);
template<class t>
void display(t studentList, bool showIt, bool reverseIterator);
template<class t>
void structureClear(t& studentList, string structureName);
template<class t>
void structureResize(t& studentList, string structureName);
template<class t>
void structureBegin(t studentList, string structureName);
template<class t>
void structureEnd(t studentList, string structureName);
template<class t>
void structureRBegin(t studentList, string structureName);
template<class t>
void structureREnd(t studentList, string structureName);
template<class t>
void stuctureErase(t& studentList, string structureName);
template<class t>
void stuctureEraseAll(t& studentList, string structureName);
template<class t>
void structureInsert(t& studentList, string structureName);


int main()
{
	do
	{
		switch (menuOption())
		{
		case 0: exit(1);
		case 1: system("cls"); vectorSwitch(); cout << "\n\t\t"; system("pause"); system("cls"); break;
		case 2: system("cls"); listSwitch(); cout << "\n\t\t"; system("pause"); system("cls"); break;
		case 3: system("cls"); listOrContainerSwitch();; cout << "\n\t\t"; system("pause"); system("cls"); break;
		default: cout << "\nERROR: Invalid option.\n"; break;
		}
	} while (true);

	return 0;
}

int menuOption()
{
	cout << "\n\tCMPR131 Chapter 5: Vector and List Container by Tiffany Nguyen and Albert Mondragon";
	cout << "\n\t" << string(76, char(205));
	cout << "\n\t\t1> Vector Container";
	cout << "\n\t\t2> List Container";
	cout << "\n\t\t3> Application using Vector and/or List Container";
	cout << "\n\t" << string(76, char(196));
	cout << "\n\t\t0> Exit";
	cout << "\n\t" << string(76, char(205));
	return inputInteger("\n\t\tOption: ", 0, 3);
}

void vectorSwitch()
{
	cout << "\n\tVectors are sequence containers representing arrays that can change in size";

	do
	{
		switch (vectorMenu())
		{
		case 'A':
		{

			
			break;
		}
		case 'B':
		{


			
			break;
		}
		case 'C':
		{

			
			break;
		}
		case 'D':
		{


			
			break;
		}
		case 'E':
		{


			
			break;
		}
		case 'F':
		{


			
			break;
		}
		case 'G':
		{


			
			break;
		}
		case 'H':
		{


			
			break;
		}
		case 'I':
		{


			
			break;
		}
		case 'J':
		{


			
			break;
		}
		case 'K':
		{


			
			break;
		}
		case 'L':
		{


			
			break;
		}
		case 'M':
		{


			
			break;
		}
		case 'N':
		{


			
			break;
		}
		case 'O':
		{

			break;
		}
		case 'P':
		{


			
			break;
		}
		case 'Q':
		{


			
			break;
		}
		case 'R':
		{


			
			break;
		}
		case 'S':
		{


			
			break;
		}
		case '0':
		{
			return;
		}
		default:
		{
			cout << "\n\t\t\tERROR: Invalid option.\n\t";
			break;
		}
		}
	} while (true);
}

char vectorMenu()
{
	
	cout << "\n\n\t1> Vector's member functions";

	cout << "\n\t" << string(76, char(205));
	cout << "\n\t\tA> clear() - Removes all elements from the vector (which are destroyed) ";
	cout << "\n\t\tB> reserve(n) - Requests that the vector capacity be at least enough to contain n elements ";
	cout << "\n\t\tC> resize(n) - Resizes the container so that it contains n elements ";
	cout << "\n\t\tD> Read input.dat and push_back(e) - Adds a new element at the end of the vector ";
	cout << "\n\t\tE> pop_back() - Removes the last element in the vector ";
	cout << "\n\t\tF> front() - Returns a reference to the first element in the vector ";
	cout << "\n\t\tG> back() - Returns a reference to the last element in the vector ";
	cout << "\n\t\tH> index using at() or []) - Returns a reference to the element at position n in the vector ";
	cout << "\n\t\tI> begin() - Returns an iterator pointing to the first element in the vector ";
	cout << "\n\t\tJ> end() Returns an iterator referring to the past-the-end element in the vector ";
	cout << "\n\t\tK> Using iterator begin() and end() returns all elements in the vector ";
	cout << "\n\t\tL> rbegin() - Returns a reverse iterator pointing to the last element in the vector ";
	cout << "\n\t\tM> rend() - Returns a reverse iterator pointing to the theoretical element preceding the first ";
	cout << "\n\t\t            element in the vector";
	cout << "\n\t\tN> Using iterator rbegin() and rend() returns all elements in the vector ";
	cout << "\n\t\tO> erase(it) - Removes from the vector a single element(using an iterator) ";
	cout << "\n\t\tP> erase(start_it,end_it) - Removes from the vector a range of elements( using iterators) ";
	cout << "\n\t\tQ> insert(it, entry) - Insert a new entry at the iterator. ";
	cout << "\n\t\tR> swap() - Exchanges the content of the container by another vector's content of the same type ";
	cout << "\n\t\tS> Sort - Sorts the vector. ";
	cout << "\n\t" << string(76, char(196));
	cout << "\n\t\t0> Return";
	cout << "\n\t" << string(76, char(205));
	return inputChar("\n\t\tOption: ");
}

void listSwitch()
{
	cout << "\n\tLists are sequence containers that allow constant time insert and erase operations anywhere within the";
	cout << "\n\tsequence, and iteration in both directions.";
	list<student> studentList;
	string structureName = "list";
	do
	{
		switch (listMenu())
		{
		case 'A':
		{
			structureClear(studentList, structureName);	
			break;
		}
		case 'B':
		{
			structureResize(studentList, structureName);
			break;
		}
		case 'C':
		{
			fstream file;
			string fileName = "input.dat";

			file.open(fileName, ios::in || ios::beg);
			if ((file.fail()))
			{
				cout << "\n\t\tERROR: File, " << fileName << ", cannot be found.\n\n\t\t";
				system("pause");
			}
			else
			{
				while (file.peek() != EOF)
				{
					student holder;
					holder.readFile(file);
					studentList.push_front(holder);

				}
				cout << "\n\t\tThe " << structureName << " now has " << studentList.size() << " elements.\n\t";
			}
			file.close();
			break;
		}
		case 'D':
		{
			if (studentList.empty())
			{
				cout << "\n\t\tThe list is empty.";
				break;
			}
			cout << "\n\t\tFirst element, (" << studentList.front() << "), has been removed from the list";
			
			studentList.pop_front();
			cout << "\n\n\t\tThe list now has " << studentList.size() << " elements.\n";
			display(studentList, false, false);
			break;
		}
		case 'E':
		{
			if (studentList.empty())
			{
				cout << "\n\t\tThe list is empty.";
				break;
			}

			cout << "\n\t\tFirst element from the list is (" << (studentList.front()) << ").";
			break;
		}
		case 'F':
		{
			structureReadFile(studentList, structureName);
			break;
		}
		case 'G':
		{
			if (studentList.empty())
			{
				cout << "\n\t\tThe " << structureName << " is empty.";
				break;
			}
			cout << "\n\t\tLast element, (" << studentList.front() << "), has been removed from the " << structureName << ".";

			studentList.pop_back();
			cout << "\n\n\t\tThe " << structureName << " now has " << studentList.size() << " elements.\n";
			display(studentList, false, true);
			break;
		}
		case 'H':
		{
			if (studentList.empty())
			{
				cout << "\n\t\tThe list is empty.";
				break;
			}

			cout << "\n\t\tLast element from the list is (" << studentList.back() << ").";

			break;
		}
		case 'I':
		{
			structureBegin(studentList, structureName);
			break;
		}
		case 'J':
		{
			structureEnd(studentList, structureName);
			break;
		}
		case 'K':
		{
			if (studentList.empty())
			{
				cout << "\n\t\tThe " << structureName << " is empty.";
				break;
			}
			cout << "\n\t\tUsing being() and end(), the " << structureName << " contains: ";
			display(studentList, true, false);
			break;
		}
		case 'L':
		{
			structureRBegin(studentList, structureName);
			break;
		}
		case 'M':
		{
			structureREnd(studentList, structureName);
			break;
		}
		case 'N':
		{
			if (studentList.empty())
			{
				cout << "\n\t\tThe " << structureName << " is empty.";
				break;
			}
			cout << "\n\t\tUsing rbegin and rend(), the " << structureName << " contains: ";
			display(studentList, true, true);
			break;
		}
		case 'O':
		{
			stuctureErase(studentList, structureName);
			break;
		}
		case 'P':
		{
			stuctureEraseAll(studentList, structureName);
			break;
		}
		case 'Q':
		{
			structureInsert(studentList, structureName);
			break;
		}
		case 'R':
		{
			list<student> secondList;
			studentList.swap(secondList);
			cout << "\n\t\tlist (2) is initially empty";
			cout << "\n\n\t\tlist (1) is empty after swapped with list (2).";
			cout << "\n\n\t\tlist (2) now has " << secondList.size() << " element(s).";
			break;
		}
		case 'S':
		{
			if (studentList.empty())
			{
				cout << "\n\t\tThe list is empty.";
				break;
			}
			studentList.sort();
			cout << "\n\t\tSorted list: ";
			display(studentList, true, false);
			break;
		}
		case '0':
		{
			
			return;
		}
		default:
		{
			cout << "\n\t\t\tERROR: Invalid option.\n\t";
			break;
		}
		}
	} while (true);
}

char listMenu()
{
	
	cout << "\n\n\t2> List container";
	cout << "\n\t" << string(76, char(205));
	cout << "\n\t\tA> clear() - Destroys all elements from the list> ";
	cout << "\n\t\tB> resize(n) - Changes the list so that it contains n elements> ";
	cout << "\n\t\tC> Read input.dat and push_front(e) - Adds a new element at the front of the list> ";
	cout << "\n\t\tD> pop_front() - Deletes the first element> ";
	cout << "\n\t\tE> front() - Accesses the first element> ";
	cout << "\n\t\tF> Read input.dat and push_back(e) - Adds a new element at the end of the list> ";
	cout << "\n\t\tG> pop_back() - Delete the last element> ";
	cout << "\n\t\tH> back() Accesses the last element> ";
	cout << "\n\t\tI> begin() - Returns an iterator refereing to the first element in the list> ";
	cout << "\n\t\tJ> end() Returns an iterator referring to the past-the-end element in the list> ";
	cout << "\n\t\tK> Using iterator begin() and end() returns all elements in the list> ";
	cout << "\n\t\tL> rbegin() - Returns a reverse iterator pointing to the last element in the list> ";
	cout << "\n\t\tM> rend() - Returns a reverse iterator pointing to the element preceding the first element> ";
	cout << "\n\t\t            in the list";
	cout << "\n\t\tN> Using iterator rbegin() and rend() returns all elements in the list> ";
	cout << "\n\t\tO> erase(it) - Removes from the vector a single element(using an iterator) ";
	cout << "\n\t\tP> erase(start_it,end_it) - Removes from the vector a range of elements( using iterators) ";
	cout << "\n\t\tQ> insert(it, entry) - Insert a new entry at the iterator. ";
	cout << "\n\t\tR> swap() - Exchanges the content of the container by another list's content of the same type ";
	cout << "\n\t\tS> Sort - Sorts the list. ";
	cout << "\n\t" << string(76, char(196));
	cout << "\n\t\t0> Return";
	cout << "\n\t" << string(76, char(205));
	return inputChar("\n\t\tOption: ");
}

char listOrContainerMenu()
{
	cout << "\n\t3> Application using Vector and/or List Container";
	cout << "\n\t" << string(76, char(205));
	cout << "\n\t\tA> Add an integer";
	cout << "\n\t\tB> Delete an integer";
	cout << "\n\t\tC> Display input integers";
	cout << "\n\t\tD> Display frequencies of integer";
	cout << "\n\t" << string(76, char(196));
	cout << "\n\t\t0> Return";
	cout << "\n\t" << string(76, char(205));
	return inputChar("\n\t\tOption: ");
}

void listOrContainerSwitch()
{
	do
	{
		switch (listOrContainerMenu())
		{
		case 'A':
			cout << "\n";
			break;
		case 'B':
			cout << "\n";
			break;
		case 'C':
			cout << "\n";
			break;
		case 'D':
			cout << "\n";
			break;
		case '0':
		{

			return;
		}
		default:
			break;
		}
	} while (true);
}

template<class t>
void structureReadFile(t& studentList, string structureName)
{
	fstream file;
	string fileName = "input.dat";

	file.open(fileName, ios::in || ios::beg);
	if ((file.fail()))
	{
		cout << "\n\t\tERROR: File, " << fileName << ", cannot be found.\n\n\t\t";
		system("pause");
	}
	else
	{
		while (file.peek() != EOF)
		{
			student holder;
			holder.readFile(file);
			studentList.push_back(holder);

		}
		cout << "\n\t\tThe " << structureName << " now has " << studentList.size() << " elements.\n\t";
	}
	file.close();

}

template<class t>
void display(t studentList, bool showIt, bool reverseIterator)
{
	
	if (reverseIterator)
	{
		for (auto it = studentList.rbegin(); it != studentList.rend(); it++)
		{
		
			if (showIt)
			{
				cout << "\n\t\t\t" << &it << " (" << *it << ")";
			}
			else
			{
				cout << "\n\t\t\t" << *it;

			}
		}
	}
	else
	{
		

		for (auto it = studentList.begin(); it != studentList.end(); it++)
		{
			if (showIt)
			{
				cout << "\n\t\t\t" << &it << " (" << *it << ")";
			}
			else
			{
				cout << "\n\t\t\t" << *it;

			}
		}
	}
}

template<class t>
void structureClear(t &studentList, string structureName)
{
	studentList.clear();
	cout << "\n\t\tThe " << structureName << " has been cleared.";
}

template<class t>
void structureResize(t& studentList, string structureName)
{
	int numElements = inputInteger("\n\t\tEnter the new size(1..100): ");
	studentList.resize(numElements);
	cout << "\n\t\tThe " << structureName <<" has been resized to " << numElements << " elements.";
}

template<class t>
void structureBegin(t studentList, string structureName)
{
	if (studentList.empty())
	{
		cout << "\n\t\tThe " << structureName << " is empty.";
		return;
	}
	auto it = studentList.begin();
	cout << "\n\t\tThe iterator referring to the first element: " << &it << " (" << *studentList.begin() << ")";
}

template<class t>
void structureEnd(t studentList, string structureName)
{
	if (studentList.empty())
	{
		cout << "\n\t\tThe " << structureName << " is empty.";
		return;

	}
	auto it = studentList.end();
	cout << "\n\t\tThe iterator referring to the past-the-end element: " << &it;
}

template<class t>
void structureRBegin(t studentList, string structureName)
{
	if (studentList.empty())
	{
		cout << "\n\t\tThe " << structureName << " is empty.";
		return;
	}

	auto it = studentList.rbegin();
	cout << "\n\t\tThe iterator referring to the reverse first element: " << &(it) << " (" << *studentList.rbegin() << ")";
}

template<class t>
void structureREnd(t studentList, string structureName)
{
	if (studentList.empty())
	{
		cout << "\n\t\tThe " << structureName << " is empty.";
		return;
	}
	auto it = studentList.rend();
	cout << "\n\t\tThe iterator referring to the reverse past-the-end element: " << &(it);
}

template<class t>
void stuctureErase(t& studentList, string structureName)
{
	if (studentList.empty())
	{
		cout << "\n\t\tThe " << structureName << " is empty.";
		return;
	}
	auto it = studentList.begin();
	cout << "\n\t\tAn element after the begin iterator " << &it << " has been removed.";
	studentList.erase(studentList.begin());
}

template<class t>
void stuctureEraseAll(t& studentList, string structureName)
{
	if (studentList.empty())
	{
		cout << "\n\t\tThe " << structureName << " is empty.";
		return;
	}
	auto itUno = studentList.begin();
	auto itDos = studentList.end();
	cout << "\n\t\tAll elements starting at begin iterator " << &itUno << " and going up to end iterator " << &itDos << "\n\t\t have been removed.";
	studentList.erase(studentList.begin(), studentList.end());
}

template<class t>
void structureInsert(t& studentList, string structureName)
{
	string gradeLevels[4] = { "Freshman", "Sophmore", "Junior", "Senior" };
	student holder;
	holder.setName(inputString("\n\t\tEnter a student name: ", true));
	int level = inputInteger("\n\t\tEnter the his/her level (1-Freshman, 2-Sophmore, 3-Junior, or 4-Senior): ", 1, 4);
	holder.setGradeLevel(gradeLevels[level - 1]);
	holder.setGPA(inputDouble("\n\t\tEnter his/her GPA (0.0..4.0): ", 0.0, 4.0));
	cout << "\n\t\tThe new element has been inserted after the begin iterator.";
	studentList.insert(studentList.begin(), holder);
}
