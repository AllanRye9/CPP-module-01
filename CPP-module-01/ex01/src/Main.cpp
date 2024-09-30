/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:14:48 by oallan            #+#    #+#             */
/*   Updated: 2024/09/18 21:14:51 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main()
{
    Zombie* zombies = NULL;
    zombies = zombies->zombieHorde(3, "crew1");
    delete[] zombies;
    return 0;
}


// int main()
// {
//     Zombie* zombies = NULL;
//     zombies = zombies->zombieHorde(-4, "crew1");
//     zombies = zombies->zombieHorde(0, "crew1");
//     zombies = zombies->zombieHorde(-23234, "crew1");
//     zombies = zombies->zombieHorde(-402102002, "crew1");
//     delete[] zombies;
//     return 0;
// }