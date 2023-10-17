#include "easyfind.hpp"

int	main()
{
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(-44);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(2);
	try 
	{
		std::cout << easyfind(vec, -44) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
