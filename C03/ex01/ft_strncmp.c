/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:18:01 by onimer            #+#    #+#             */
/*   Updated: 2025/02/18 14:15:21 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
		return ((unsigned char) s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
#include <stdio.h>
       #include <stdlib.h>
//       #include <string.h>

       int
       main(int argc, char *argv[])
       {
           int res;

           if (argc < 3) {
               fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
               exit(EXIT_FAILURE);
           }

      //     if (argc == 3)
               //res = ft_strcmp(argv[1], argv[2]);
  //         else
               res = ft_strncmp(argv[1], argv[2], atoi(argv[3]));

           if (res == 0) {
               printf("<str1> and <str2> are equal");
               if (argc > 3)
                   printf(" in the first %d bytes\n", atoi(argv[3]));
               printf("\n");
           } else if (res < 0) {
               printf("<str1> is less than <str2> (%d)\n", res);
           } else {
               printf("<str1> is greater than <str2> (%d)\n", res);
           }

           exit(EXIT_SUCCESS);
       }
*/
