
all: raylib/src/libraylib.a
	$(CC) main.c -I./raylib/src/ -I./raylib/src/external/ -L./raylib/src/ -lraylib -lm

raylib/src/libraylib.a:
	$(MAKE) GLFW_LINUX_ENABLE_WAYLAND=TRUE -C raylib/src
