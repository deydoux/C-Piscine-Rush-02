/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:22:51 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/22 14:25:20 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_dictionary
{
	unsigned int	number;
	char			*value;
}	t_dictionary;


void				ft_putstr(char *str);
long long			ft_atoi(char *str);
void print_number(unsigned int num, t_dictionary *dictionary, int dictionary_len);
#endif
