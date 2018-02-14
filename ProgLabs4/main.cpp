//#include <iostream>
//#include <string>
//#include "List.h"
//#include "Node.h"
//#include "SimpleString.h"
//
//void printBlockHeader(std::string);
//
//int main()
//{
//	List list;
//	int chara = 6;
//	char charaArray1[] = "hello1";
//	char charaArray2[] = "hello2";
//	char charaArray3[] = "hello3";
//	SimpleString string1(chara, charaArray1);
//	SimpleString string2(chara, charaArray2);
//	SimpleString string3(chara, charaArray3);
//	SimpleString string3test(chara, charaArray3);
//	SimpleString *popReturn = new SimpleString();
//	//nothing in the list for all the functions
//	printBlockHeader("Testing all the functions in the list when there is nothing in the list");
//	Node *n_string1 = list.search(string1);
//	list.erase(n_string1);
//	list.insertAfter(n_string1, string1);
//	list.insertBefore(n_string1, string1);
//	list.pop_back(*popReturn);
//	list.pop_front(*popReturn);
//	list.push_back(string1);
//	list.pop_back(*popReturn);
//	list.push_front(string1);
//	list.pop_front(*popReturn);
//	list.displayToConsole();
//	//one item in the list
//	printBlockHeader("Testing all the functions in the list when there is one in the list");
//	list.push_front(string1);
//	list.search(string2);
//	n_string1 = list.search(string1);
//	list.insertAfter(n_string1, string2);
//	list.pop_back(*popReturn);
//	list.insertBefore(n_string1, string2);
//	list.pop_front(*popReturn);
//	list.push_back(string2);
//	list.pop_back(*popReturn);
//	list.push_front(string2);
//	list.pop_front(string2);
//	list.displayToConsole();
//	list.erase(n_string1);
//	//Now Many
//	printBlockHeader("Testing all the functions in the list with random number of entries");
//	//Simple String
//	printBlockHeader("Testing the simpleString is equal");
//	std::cout << "Does hello1 == hello2?" << std::endl;
//	std::cout << "\t" << string1.isEqual(string2) << std::endl << std::endl;
//	std::cout << "Does hello3 == hello3?" << std::endl;
//	std::cout << "\t" << string3.isEqual(string3test) << std::endl;
//	std::cout << std::endl << std::endl;
//	//Push_back
//	printBlockHeader("Testing the push_back function");
//	list.displayToConsole();
//	list.push_back(string1);
//	list.displayToConsole();
//	list.push_back(string2);
//	list.displayToConsole();
//	list.push_back(string3);
//	list.displayToConsole();
//	std::cout << std::endl;
//	//Pop_back
//	printBlockHeader("Testing the pop_back function");
//	list.displayToConsole();
//	list.pop_back(*popReturn);
//	list.displayToConsole();
//	std::cout << "The return value is: ";
//	for (int i = 0; i < popReturn->numofCharacters; i++)
//	{
//		std::cout << popReturn->characters[i];
//	}
//	std::cout << std::endl << std::endl;
//	//Pop_front
//	printBlockHeader("Testing the pop_front function");
//	list.displayToConsole();
//	list.pop_front(*popReturn);
//	list.displayToConsole();
//	std::cout << "The return value is: ";
//	for (int i = 0; i < popReturn->numofCharacters; i++)
//	{
//		std::cout << popReturn->characters[i];
//	}
//	std::cout << std::endl << std::endl;
//	//Push_front
//	printBlockHeader("Testing the push_front function");
//	list.displayToConsole();
//	list.push_front(string1);
//	list.displayToConsole();
//	list.push_front(string3);
//	list.displayToConsole();
//	//Search
//	printBlockHeader("Testing the search function");
//	list.displayToConsole();
//	std::cout << "Searching for hello3" << std::endl << std::endl;
//	Node *n_string3 = list.search(string3);
//	std::cout << "Found it!" << std::endl << std::endl;
//	std::cout << "The return value is: ";
//	for (int i = 0; i < string3.numofCharacters; i++)
//	{
//		std::cout << string3.characters[i];
//	}
//	std::cout << std::endl << std::endl;
//	//Erase
//	printBlockHeader("Testing the erase function");
//	std::cout << "Using the node found in the search above delete it" << std::endl << std::endl;
//	list.displayToConsole();
//	list.erase(n_string3);
//	list.displayToConsole();
//	//Insert before
//	printBlockHeader("Testing the insert before function");
//	std::cout << "I will be searching for the hello1 string and insert hello3 before it" << std::endl << std::endl;
//	list.displayToConsole();
//	list.insertBefore(list.search(string1), string3);
//	list.displayToConsole();
//	std::cout << "I will be searching for the hello1 string and insert hello2 before it" << std::endl << std::endl;
//	list.insertBefore(list.search(string1), string2);
//	list.displayToConsole();
//	//Insert after
//	printBlockHeader("Testing the insert after function");
//	std::cout << "I will be searching for the first hello2 string and insert hello3 after it" << std::endl << std::endl;
//	list.displayToConsole();
//	list.insertAfter(list.search(string2), string3);
//	list.displayToConsole();
//	system("pause");
//	return 0;
//}
//
//void printBlockHeader(std::string message)
//{
//	std::cout << "*******************************************************************************************************" << std::endl;
//	std::cout << "***** " << message << " *****" << std::endl;
//	std::cout << "*******************************************************************************************************" << std::endl;
//	std::cout << std::endl;
//}
