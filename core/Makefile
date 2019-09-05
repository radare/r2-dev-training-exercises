PLUGDIR=$(shell r2 -H R2_USER_PLUGINS)
LIBEXT=$(shell r2 -H R2_LIBEXT)
R2FLAGS=$(shell pkg-config --cflags --libs r_core)

all:
	$(CC) -fPIC -shared core_test.c $(R2FLAGS) -o coretest.$(LIBEXT)
	cp -f coretest.$(LIBEXT) $(PLUGDIR)
