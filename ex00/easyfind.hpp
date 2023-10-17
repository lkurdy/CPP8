#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

template<typename T>
int	easyfind(T c, int a)
{
	int	f;
	typename T::iterator it;

	it = find(c.begin(), c.end(), a);
	if (it == c.end())
		throw std::out_of_range("No match found");
	f = static_cast<int>(std::distance(c.begin(), it));
	return (f);
}

#endif
