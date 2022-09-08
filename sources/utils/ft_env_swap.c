/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:47:39 by sangyeki          #+#    #+#             */
/*   Updated: 2022/09/05 17:31:53 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_env_swap(char **x, char **y)
{
	char	*tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
	return (1);
}