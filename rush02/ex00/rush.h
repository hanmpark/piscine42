/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:08:10 by yomajdan          #+#    #+#             */
/*   Updated: 2022/10/02 21:08:13 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H

# define RUSH_H

# include "unistd.h"
# include "stdlib.h"
# include "fcntl.h"

int		ft_strlen(char *str);
int		check_nbr(char *str);
int		check_sep(char c);
int		count_line(char *str);
int		is_printable(char c);
int		trim_line(char *tab, char *str);
char	*ft_malloc(char *str);
char	**ft_split(char *str);
char	*read_file(char *name, int i);
void	ft_putstr(char *str);
int		is_line_match(char *line, char *nbr);
int		display_numbers(char *str, char *nbr);
int		main(int ac, char **av);
void	sort_thousand(char *nbr, char *file, int flag, int k);
void	sort_thousand2(char *nbr, char *file, int size, int flag);
void	sort_millions2(char *nbr, char *file, int size, int flag);
void	sort_million(char *nbr, char *file, int flag, int k);
void	sort_bilion(char *nbr, char *file, int k);
void	sort_unity(char *nbr, char *file, int flag);
void	sort_ten2(char *nbr, char *file, int flag);
void	sort_ten(char *nbr, char *file, int flag);
void	sort_hundred(char *nbr, char *file, int flag);
int		check_part(char *str);
int		check_number(char *str);
void	putstring(int flag, int k);
void	putstring2(int flag);

#endif
