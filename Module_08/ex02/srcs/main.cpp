/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/23 23:42:06 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int main()
{
	{
		std::cout << YELLOW << "\nTest #001 - Subject Tests with MutantStack" << WHITE << std::endl;

		MutantStack<int> mstack;
		std::cout << BLUE << "Create mstack" << WHITE << std::endl;
		mstack.push(5);
		std::cout << BLUE << "Push 5" << WHITE << std::endl;
		mstack.push(17);
		std::cout << BLUE << "Push 17" << WHITE << std::endl;
		std::cout << GREEN << "mstack.top() = " << mstack.top() << WHITE << std::endl;
		mstack.pop();
		std::cout << BLUE << "mstack.pop()" << WHITE << std::endl;
		std::cout << GREEN << "mstack.size() = " << mstack.size() << WHITE << std::endl;
		mstack.push(3);
		std::cout << BLUE << "Push 3" << WHITE << std::endl;
		mstack.push(5);
		std::cout << BLUE << "Push 5" << WHITE << std::endl;
		mstack.push(737);
		std::cout << BLUE << "Push 737" << WHITE << std::endl;
		mstack.push(0);
		std::cout << BLUE << "Push 0" << WHITE << std::endl;
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << GREEN << "*it = " << *it << WHITE << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		std::cout << YELLOW << "\nTest #002 - Subject Tests with std::list" << WHITE << std::endl;
		
		std::list<int> mlist;
		std::cout << BLUE << "Create mlist" << WHITE << std::endl;
		mlist.push_back(5);
		std::cout << BLUE << "Push 5" << WHITE << std::endl;
		mlist.push_back(17);
		std::cout << BLUE << "Push 17" << WHITE << std::endl;
		std::cout << GREEN << "mlist.top() = " << mlist.back() << WHITE << std::endl;
		mlist.pop_back();
		std::cout << BLUE << "mlist.pop()" << WHITE << std::endl;
		std::cout << GREEN << "mlist.size() = " << mlist.size() << WHITE << std::endl;
		mlist.push_back(3);
		std::cout << BLUE << "Push 3" << WHITE << std::endl;
		mlist.push_back(5);
		std::cout << BLUE << "Push 5" << WHITE << std::endl;
		mlist.push_back(737);
		std::cout << BLUE << "Push 737" << WHITE << std::endl;
		mlist.push_back(0);
		std::cout << BLUE << "Push 0" << WHITE << std::endl;
		
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << GREEN << "*it = " << *it << WHITE << std::endl;
			++it;
		}
	}

	{
		std::cout << YELLOW << "\nTest #003 - My Tests" << WHITE << std::endl;
		
		MutantStack<int> mstack;
		std::cout << BLUE << "Create mlist" << WHITE << std::endl;
		mstack.push(1);
		std::cout << BLUE << "Push 1" << WHITE << std::endl;
		mstack.push(17);
		std::cout << BLUE << "Push 17" << WHITE << std::endl;
		std::cout << GREEN << "mstack.top() = " << mstack.top() << WHITE << std::endl;
		mstack.pop();
		std::cout << BLUE << "mstack.pop()" << WHITE << std::endl;
		std::cout << GREEN << "mstack.size() = " << mstack.size() << WHITE << std::endl;
		mstack.push(20);
		std::cout << BLUE << "Push 20" << WHITE << std::endl;
		mstack.pop();
		std::cout << BLUE << "mstack.pop()" << WHITE << std::endl;
		std::cout << GREEN << "mstack.top() = " << mstack.top() << WHITE << std::endl;
		mstack.pop();
		std::cout << BLUE << "mstack.pop()" << WHITE << std::endl;
		std::cout << GREEN << "mstack.size() = " << mstack.size() << WHITE << std::endl;
		mstack.push(5);
		std::cout << BLUE << "Push 5" << WHITE << std::endl;
		mstack.push(15);
		std::cout << BLUE << "Push 15" << WHITE << std::endl;
		mstack.push(20);
		std::cout << BLUE << "Push 20" << WHITE << std::endl;
		mstack.push(25);
		std::cout << BLUE << "Push 25" << WHITE << std::endl;
		mstack.push(30);
		std::cout << BLUE << "Push 30" << WHITE << std::endl;
		std::cout << GREEN << "mstack.top() = " << mstack.top() << WHITE << std::endl;
		std::cout << GREEN << "mstack.size() = " << mstack.size() << WHITE << std::endl;
		
		
		std::cout << YELLOW << "\nTest #004 - iterator" << WHITE << std::endl;
		for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
			std::cout << GREEN << "*it = " << *it << WHITE << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "\nTest #005 - const_iterator" << WHITE << std::endl;
		for (MutantStack<int>::const_iterator it = mstack.begin(); it != mstack.end(); it++)
			std::cout << GREEN << "*it = " << *it << WHITE << std::endl;
		std::cout << std::endl;
		
		std::cout << YELLOW << "\nTest #006 - copy" << WHITE << std::endl;
		MutantStack<int> s1(mstack);
		for (MutantStack<int>::iterator it = s1.begin(); it != s1.end(); it++)
			std::cout << GREEN << "*it = " << *it << WHITE << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "\nTest #007 - &operator=" << WHITE << std::endl;
		MutantStack<int> s2 = s1;
		for (MutantStack<int>::iterator it = s2.begin(); it != s2.end(); it++)
			std::cout << GREEN << "*it = " << *it << WHITE << std::endl;
		std::cout << std::endl;
	}
	
	return (0);
}