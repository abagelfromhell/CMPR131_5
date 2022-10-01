#include <iostream>
#include "input.h"
#include "student.h"
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int menuOption();

void vectorSwitch();
char vectorMenu();

void listSwitch();
char listMenu();

void listOrContainerSwitch();
char listOrContainerMenu();

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
	list<student> aa;
	do
	{
		switch (listMenu())
		{
		case 'A':
		{
			aa.clear();
			cout << "\n\t\tThe list has been cleared.";
			break;
		}
		case 'B':
		{
			int numElements = inputInteger("\n\t\tEnter the new size(1..100): ");
			aa.resize(numElements);
			cout << "\n\t\tThe list has been resized to " << numElements << " elements.";
			
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
