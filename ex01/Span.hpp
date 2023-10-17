#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <string>
# include <vector>
# include <exception>
# include <algorithm>

class   Span
{
	std::vector<int>	A;
	unsigned int	N;
	Span();

	public:
		Span(unsigned int n);
		Span(const Span &other);
		Span	&operator=(const Span &other);
		~Span();
		void	addNumber(int a);
		void	addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
		int	shortestSpan();
		int	longestSpan();
};

#endif
