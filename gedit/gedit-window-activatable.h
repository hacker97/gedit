/*
 * gedit-window-activatable.h
 * This file is part of gedit
 *
 * Copyright (C) 2010 - Steve Frécinaux
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Library General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GEDIT_WINDOW_ACTIVATABLE_H__
#define __GEDIT_WINDOW_ACTIVATABLE_H__

#include <glib-object.h>

G_BEGIN_DECLS

#define GEDIT_TYPE_WINDOW_ACTIVATABLE (gedit_window_activatable_get_type ())

G_DECLARE_INTERFACE (GeditWindowActivatable, gedit_window_activatable, GEDIT, WINDOW_ACTIVATABLE, GObject)

struct _GeditWindowActivatableInterface
{
	GTypeInterface g_iface;

	/* Virtual public methods */
	void	(*activate)		(GeditWindowActivatable *activatable);
	void	(*deactivate)		(GeditWindowActivatable *activatable);
	void	(*update_state)		(GeditWindowActivatable *activatable);
};

void	 gedit_window_activatable_activate	(GeditWindowActivatable *activatable);
void	 gedit_window_activatable_deactivate	(GeditWindowActivatable *activatable);
void	 gedit_window_activatable_update_state	(GeditWindowActivatable *activatable);

G_END_DECLS

#endif /* __GEDIT_WINDOW_ACTIVATABLE_H__ */
/* ex:set ts=8 noet: */
