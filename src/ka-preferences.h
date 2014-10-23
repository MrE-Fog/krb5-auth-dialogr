/* ka-preferences.h */

#ifndef KA_PREFERENCES_H
#define KA_PREFERENCES_H

#include <gtk/gtk.h>

#include "ka-applet.h"

G_BEGIN_DECLS

void ka_preferences_window_create (KaApplet *applet);
void ka_preferences_window_destroy (void);
void ka_preferences_window_show (KaApplet *applet);


G_END_DECLS

#endif /* KA_PREFERENCES */

/*
 * vim:ts:sts=4:sw=4:et:
 */
