/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:23:53 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/11 17:23:53 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newZombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}