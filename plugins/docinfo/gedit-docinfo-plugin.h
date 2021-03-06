/*
 * gedit-docinfo-plugin.h
 *
 * Copyright (C) 2002-2005 Paolo Maggi
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __GEDIT_DOCINFO_PLUGIN_H__
#define __GEDIT_DOCINFO_PLUGIN_H__

#include <glib.h>
#include <glib-object.h>
#include <libpeas/peas-extension-base.h>
#include <libpeas/peas-object-module.h>

G_BEGIN_DECLS

#define GEDIT_TYPE_DOCINFO_PLUGIN		(gedit_docinfo_plugin_get_type ())
#define GEDIT_DOCINFO_PLUGIN(o)			(G_TYPE_CHECK_INSTANCE_CAST ((o), GEDIT_TYPE_DOCINFO_PLUGIN, GeditDocinfoPlugin))
#define GEDIT_DOCINFO_PLUGIN_CLASS(k)		(G_TYPE_CHECK_CLASS_CAST((k), GEDIT_TYPE_DOCINFO_PLUGIN, GeditDocinfoPluginClass))
#define GEDIT_IS_DOCINFO_PLUGIN(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), GEDIT_TYPE_DOCINFO_PLUGIN))
#define GEDIT_IS_DOCINFO_PLUGIN_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), GEDIT_TYPE_DOCINFO_PLUGIN))
#define GEDIT_DOCINFO_PLUGIN_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GEDIT_TYPE_DOCINFO_PLUGIN, GeditDocinfoPluginClass))

typedef struct _GeditDocinfoPlugin	GeditDocinfoPlugin;
typedef struct _GeditDocinfoPluginPrivate	GeditDocinfoPluginPrivate;
typedef struct _GeditDocinfoPluginClass	GeditDocinfoPluginClass;

struct _GeditDocinfoPlugin
{
	PeasExtensionBase parent;

	/*< private >*/
	GeditDocinfoPluginPrivate *priv;
};

struct _GeditDocinfoPluginClass
{
	PeasExtensionBaseClass parent_class;
};

GType	gedit_docinfo_plugin_get_type		(void) G_GNUC_CONST;

G_MODULE_EXPORT void peas_register_types (PeasObjectModule *module);

G_END_DECLS

#endif /* __GEDIT_DOCINFO_PLUGIN_H__ */

/* ex:set ts=8 noet: */
