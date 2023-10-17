#include "Span.hpp"

int	main()
{
	Span g(5);

	try
	{
		g.addNumber(6);
		g.addNumber(3);
		g.addNumber(17);
		g.addNumber(9);
		g.addNumber(11);
		std::cout << g.shortestSpan() << std::endl;
		std::cout << g.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Span s(10000);
	std::vector<int> vec;

	for (int i = 0; i < 10000; i++)
		vec.push_back(i);
	try
	{
		s.addNumber(vec.begin(), vec.end());
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
