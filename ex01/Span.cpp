#include "Span.hpp"

Span::Span()
{
	return ;
}

Span::Span(unsigned int n)
{
	this->N = n;
}

Span::Span(const Span &other)
{
	*this = other;
}

Span	&Span::operator=(const Span &other)
{
	this->A = other.A;
	this->N = other.N;
	return (*this);
}

Span::~Span()
{
	return ;
}

void	Span::addNumber(int a)
{
	if (A.size() >= N)
		throw std::out_of_range("Cannot add anymore values, you reached the limit");
	A.push_back(a);
}

void	Span::addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end)
{
	int	d = std::distance(begin, end);
	if (d + A.size() > N)
	{
		A.insert(A.end(), begin, begin + (N - A.size()));
		throw std::out_of_range("Vector overflown");
	}
	else
		A.insert(A.end(), begin, end);
}

int	Span::shortestSpan()
{
	int	a = 2147483647;

	if (A.size() < 2)
		throw std::out_of_range("Vector doesn't contain enough values");
	std::vector<int> tmp = this->A;
	std::sort(tmp.begin(), tmp.end());
	for (int i = 0; i < (int)N; i++)
	{
		std::vector<int>::iterator it = std::upper_bound(tmp.begin(), tmp.end(), tmp[i]);
		if (it != tmp.end() && *it - tmp[i] < a)
			a = *it - tmp[i];
		
	}
	return (a);
}

int	Span::longestSpan()
{
	if (A.size() < 2)
		throw std::out_of_range("Vector doesn't contain enough values");
	std::vector<int> tmp = this->A;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

