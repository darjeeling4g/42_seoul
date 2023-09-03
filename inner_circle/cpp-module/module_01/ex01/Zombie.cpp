/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyang <siyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:32:17 by siyang            #+#    #+#             */
/*   Updated: 2023/07/21 15:29:55 by siyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
    std::cout << "Constructor: new zombie is created" << std::endl;
}

Zombie::Zombie(string name)
    : name(name)
{
    std::cout << "Constructor: " << this->name << " is created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor: " << name << " is destoried" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie& Zombie::setName(string name)
{
    this->name = name;
    return (*this);
}