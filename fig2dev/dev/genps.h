/*
 * TransFig: Facility for Translating Fig code
 * Copyright (c) 1991 by Micah Beck
 * Parts Copyright (c) 1985-1988 by Supoj Sutanthavibul
 * Parts Copyright (c) 1989-2002 by Brian V. Smith
 *
 * Any party obtaining a copy of these files is granted, free of charge, a
 * full and unrestricted irrevocable, world-wide, paid up, royalty-free,
 * nonexclusive right and license to deal in this software and
 * documentation files (the "Software"), including without limitation the
 * rights to use, copy, modify, merge, publish and/or distribute copies of
 * the Software, and to permit persons who receive copies from any such
 * party to do so, with the only requirement being that this copyright
 * notice remain intact.
 *
 */

extern bool	epsflag;	/* to distinguish PS and EPS */
extern bool	pdfflag;	/* to distinguish PDF and PS/EPS */
extern bool	tiffpreview;	/* add a TIFF preview? */

extern void	gen_ps_eps_option(char opt, char *optarg);
extern void	genps_start(F_compound *objects);
extern int	genps_end(void);
extern void	genps_grid(float major, float minor);
extern void	genps_arc(F_arc *a);
extern void	genps_ellipse(F_ellipse *e);
extern void	genps_line(F_line *l);
extern void	genps_spline(F_spline *s);
extern void	genps_text(F_text *t);
