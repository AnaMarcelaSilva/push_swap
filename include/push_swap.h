#ifndef PUSH_SWAP
# define PUSH_SWAP

# include "../FT_PRINTF/ft_printf.h"
# include "../LIBFT/libft.h"
# include <unistd.h>

int ft_args(int argc, char **args);
int	ft_error();
int check_index(char c);
int check_value(char *arg);

#endif
