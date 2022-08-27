/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_inout.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:06:28 by sangyeki          #+#    #+#             */
/*   Updated: 2022/08/27 17:08:14 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_in_out	*ft_creat_inout(void)
{
	t_in_out	*inout;

	inout = malloc(sizeof(t_in_out));
	if (!inout)
		return (0);
	inout->file = NULL;
	inout->type = 0;
	inout->read_prev = 0;
	inout->next = NULL;
	return (inout);
}
