// linkedlisttester.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include "List.h"


// test your code using the below .
// the comments are what are the correct ouput from print()
// you may comment out code that doesnt work.

int main()
{


	
	SimpleString SimpleTestString;
	List *testList = new List{};


	testList = new List{};
	testList->push_front(SimpleString{ 3,"02" });



	testList->Print();
	//02
	

	testList->push_front(SimpleString{ 3,"03" });

	testList->Print();
	//03 02

	testList = new List{};

	testList->push_back(SimpleString{ 3,"02" });

	testList->Print();
	//02
	testList = new List{};
	testList->push_front(SimpleString{ 3,"02" });


	testList->push_back(SimpleString{ 3,"03" });
	
	testList->Print();
	//02 03


	testList = new List{};

	testList->erase(testList->search(SimpleString{ 3,"02" }));
	
	testList->Print();
	//
	
	
	
	testList = new List{};
	testList->push_front(SimpleString{ 3,"02" });

	testList->erase(testList->search(SimpleString{ 3,"02" }));
	
	testList->Print();
	//


	testList = new List{};
	testList->push_front(SimpleString{ 3,"02" });
	testList->push_front(SimpleString{ 3,"03" });
	testList->erase(testList->search(SimpleString{ 3,"02" }));
	
	testList->Print();
	//03

	testList = new List();
	testList->push_front(SimpleString{ 3,"02" });

	testList->insertBefore(testList->search(SimpleString{ 3,"02" }), SimpleString{ 3,"03" });
	
	testList->Print();
	//03 02

	
	testList = new List();
	testList->push_front(SimpleString{ 3,"04" });
	testList->push_front(SimpleString{ 3,"02" });
	testList->insertBefore(testList->search(SimpleString{ 3,"04" }), SimpleString{ 3,"03" });
	testList->Print();
	//02 03 04 


	

	testList = new List();
	testList->push_front(SimpleString{ 3,"02" });

	testList->insertAfter(testList->search(SimpleString{ 3,"02" }), SimpleString{ 3,"03" });
	
	testList->Print();
	//02 03  



	
	testList = new List();
	testList->push_front(SimpleString{ 3,"04" });
	testList->push_front(SimpleString{ 3,"02" });

	testList->insertAfter(testList->search(SimpleString{ 3,"02" }), SimpleString{ 3,"03" });
	testList->Print();
	//02 03 04 





	testList = new List();

	testList->pop_front(SimpleTestString);
	testList->Print();
	//

	testList = new List();
	testList->push_front(SimpleString{ 3,"02" });

	testList->pop_front(SimpleTestString);
	testList->Print();
	//

	testList = new List();
	testList->push_front(SimpleString{ 3,"03" });
	testList->push_front(SimpleString{ 3,"02" });


	testList->pop_front(SimpleTestString);
	
	testList->Print();
	//03

	delete testList;


	char ch;
	std::cin >> ch;

	return 0;
}