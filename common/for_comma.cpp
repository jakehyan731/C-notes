#include <iostream>
#include <list>

int main()
{
	std::list<int> l;

	l.push_back(123);
	l.push_back(456);
	l.push_back(789);
	l.push_back(1);

	int i;
	std::list<int>::iterator it;
	for (i=0, it=l.begin(); it!=l.end(); i++, it++)
		std::cout << i << ": " << *it << std::endl;

	return 0;
};