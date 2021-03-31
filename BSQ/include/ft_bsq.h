#ifndef  FT_BSQ_H
# define FT_BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_mapinfo {
    int height;
    int width;
    char obstacle;
    char empty;
    char full;
    char **map;
    int x_pos;
    int y_pos;

}              t_mapinfo;

// MAP TO TABLE PROTOTYPES
char	**mapgen(char *path);
char	*map_to_str(char *path);
char	**map_to_table(char *str);
char	**assign_char_to_table(char **table, char *str);

// UTILITIES PROTOTYPES
void    ft_putchar(char c);
int		ft_strlen_char(char *str, char c);
void	print_matrix(char **table);
int		ft_strlen(char *str);


// MAP PROP IN STRUCT PROTOTYPES
t_mapinfo	create_prop(char **table);

// SOLVE PROTOTYPES
void	place_x(t_mapinfo *info, int square);
int		try_square(t_mapinfo *info, int size, int x, int y);
t_mapinfo	solve_it(t_mapinfo *info);

#endif
