/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:24:49 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/11 17:24:49 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomChump.hpp"

void randomChump(std::string name) {
    Zombie chump(name);
    chump.announce();
}

