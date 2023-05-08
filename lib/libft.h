
#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stddef.h>

typedef __SIZE_TYPE__ size_t;

char		**ft_split(char const *s, char c);
size_t		ft_strlen(char const *s);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(char const *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
long int	ft_min(long int a, long int b);
void		*ft_memcpy(void *dest, void *src, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strjoin(const char *str1, const char *str2);
char		*load_data(int fd, char *cache);
char		*get_next_line(int fd);
#endif