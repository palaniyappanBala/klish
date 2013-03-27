/*
 * plugin private.h
 */

#include "lub/list.h"
#include "clish/plugin.h"

/*---------------------------------------------------------
 * PRIVATE TYPES
 *--------------------------------------------------------- */

struct clish_sym_s {
	char *name; /* Symbol name */
	void *func; /* Function address */
	int type; /* Function type */
	bool_t permanent; /* If permanent the dry-run can't switch it off */
	clish_plugin_t *plugin; /* Parent plugin */
};

struct clish_plugin_s {
	char *file; /* Plugin file name. Must be unique. */
	char *name; /* Local plugin name. Can be used in builtin ref. */
	lub_list_t *syms; /* List of plugin symbols */
	void *dlhan; /* Handler of dlopen() */
};