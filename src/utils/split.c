/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 06:06:40 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/11 06:21:01 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	count_words(char *s, char c)
{	
	int		count;
	bool	inside_word;
	
	count = 0;
	while (*s)
	{
		inside_word = false;
		while (*s ==c)
			++s;
		while (*s != c && *s)
		{
			if (!inside_word)
			{
				count++;
				inside_word = true;
			}
			++s;
		}
	}
	return (0);
}

static char	*get_next_word(char *s, char c)
{
	static int	cursor = 0;
	char		*next_word;
	int			len;
	int			i;
	
	len = 0;
	i = 0;
	while (s[cursor] == c)
		++cursor;
	while ((s[cursor + len]) != c && s[cursor + len])
		++len;
	next_word = malloc(sizeof(char) * (len + 1));
	if (!next_word)
		return (NULL);
	while ((s[cursor]) != c && s[cursor])
		next_word[i++] = s[cursor++];
	next_word[i] = '\0';
	return (next_word);
}

char	**split(char *s, char c)
{
	int		words_count;
	char	**output;
	int		i;
	
	i = 0;
	words_count= count_words(s, c);
	if (!words_count)
		exit(1);
	output = malloc(sizeof(char *) * (words_count + 2));
	if (!output)
		return (NULL);
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			output[i] = malloc(sizeof(char));
			if (!output[i])
				return (NULL);
			output[i++][0] = '\0';
			continue ;
		}
		output[i++] = get_next_words(s, c);
	}
	output[i] = NULL;
	return (output);
}