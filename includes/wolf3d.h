/*
** wolf3d.h for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/includes
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 11:41:37 2013 Nathanael Landais
** Last update Fri Jan 24 17:53:24 2014 Nathanael Landais
*/

#ifndef		__WOLF3D_H__
# define	__WOLF3D_H__

# include	"mlx.h"
# include	"my_graph.h"
# include	"my_elem.h"
# define	NAME		"Wolf3D"
# define	WIDTH		1080
# define	HEIGHT		800
# define	ENV_ERROR	1
# define	OPN_ERROR	2
# define	NBR_ARG_ERROR	3
# define	MALLOC_ERROR	4
# define	INVALID_MAP	5
# define	RED		"\033[31m"
# define	GREEN		"\033[32m"
# define	CONST		0.5
# define	SKY_COLOR	0x111111
# define	PATH_COLOR	0xBD8D49
# define	MIN		10
# define	MAX		30
# define	MAP_FILE	"map/"

typedef struct	s_world
{
  t_image	view;
  t_image	background;
  int		**data;
  int		map;
  t_coord	size;
}		t_world;

typedef struct	s_wolf
{
  void		*win;
  void		*mlx;
  t_world	world;
  t_coordfl	player;
  int		fog;
  float		angle;
  t_coord	camera;
}		t_wolf;

int		**read_map(char *path, t_wolf *wolf);
t_coord		get_dimensions(char *path);
int		is_error(int error);
void		draw_world(t_coordfl *player, int x, t_wolf *wolf);
float		get_dist(t_wolf *wolf, t_coordfl *player, int *color, int x);
void		get_realpos(t_wolf *wolf, t_coordfl *vect, int x);
void		get_view(t_coordfl *player, t_wolf *wolf);
int		wolf3d(t_wolf *wolf);
int		from_case(int case_grid, int size);
void		key(int keycode, t_wolf *wolf);
void		update(t_wolf *wolf);
float		get_halfheight(float k);
t_coord		to_case(t_coordfl coord, t_wolf *wolf);
int		from_case(int grid, int size);
int		collid(t_wolf *wolf, t_coordfl coord, int direction);
float		rad(int degree);
char		*fps_counter();
void		get_background(t_wolf *wolf);
void		forward(t_wolf *wolf, t_coordfl *pos);
void		backward(t_wolf *wolf, t_coordfl *pos);
void		draw_sky(t_wolf *wolf, t_coord *actual, float wall_sz, int *color);
void		update_map(t_wolf *wolf);
void		draw_wall(t_wolf *wolf, t_coord *actual, float wall_sz, int *color);
void		draw_path(t_wolf *wolf, t_coord *actual, int *color);
char		*get_path(int map, t_wolf *wolf);
void		is_winning(char *map, t_wolf *wolf);

#endif
