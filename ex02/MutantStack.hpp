#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template <typename T>
class   MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack<T> &other)
		{
			this->c = other.c;
		}
		MutantStack	&operator=(const MutantStack<T> &other)
		{
			this->c = other.c;
			return (*this);
		}
		virtual ~MutantStack() {}

		typedef typename std::deque<T>::iterator	iterator;
		iterator	begin(void)
		{
			return (this->c.begin());
		}
		iterator	end(void)
		{
			return (this->c.end());
		}
};

#endif
