/* radare - Copyright 2019 pancake */

#include <r_core.h>

static int r_cmd_anal_call(void *user, const char *input) {
	RCore *core = (RCore *) user;
	if (!strncmp (input, "lala", 4)) {
		eprintf ("HANDLING THIS LALA\n");
		return true;
	}
	return false;
}

// PLUGIN Definition Info
RCorePlugin r_core_plugin_lala = {
	.name = "lala",
	.desc = "Testing plugin for the training",
	.license = "LGPL3",
	.call = r_cmd_anal_call,
};

//#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
	.type = R_LIB_TYPE_CORE,
	.data = &r_core_plugin_lala,
	.version = R2_VERSION
};
//#endif
