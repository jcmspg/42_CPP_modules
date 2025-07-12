/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:02:27 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 20:02:27 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
    public:
        Harl();
        void complain(const std::string level);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);    
    
};

#endif // HARL_HPP