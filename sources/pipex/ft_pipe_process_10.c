/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipe_process_10.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:17:58 by sangyeki          #+#    #+#             */
/*   Updated: 2022/09/03 20:08:18 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	ft_pipe_process_10(t_data *data, t_process *tmp, char **senv, int i)
{
	(void)senv;
	if (dup2(data->fd[data->c_n * 2], STDIN_FILENO) == -1)
		ft_perror("dup2 input failed in pipe process", 1);
	if (data->inout->next)
	{
		if (dup2(data->fd[data->c_n * 2 + 1], STDOUT_FILENO) == -1)
			ft_perror("dup2 output failed in pipe process", 1);
	}
	else if (!data->inout->next)
	{
		if (ft_built_pipe_3(i, data, tmp))
			exit(0);
		if (dup2(data->file[i], STDOUT_FILENO) == -1)
			ft_perror("dup2 output failed in pipe process", 1);
	}
	ft_close_pipes(data);
	close(data->file[i]);
}
