//#include "map.hpp"

#include <map>

#define MAX	1000000

int	main()
{
	typedef int									type_key;
	typedef std::pair<const type_key, double>	pair_value;
	
	std::map<const int, const double> mymap;
	
	for (int i = 0; i < MAX; ++i)
	{
		mymap.insert(pair_value(i, i * 1.1));
	}
	for (int i = 0; i < MAX; ++i)
	{
		mymap.erase(-MAX - 10);
	}
	for (int i = 0; i < MAX; ++i)
	{
		mymap.erase(MAX + 10);
	}
	for (int i = 0; i < MAX; ++i)
	{
		mymap.erase(i);
	}
}
