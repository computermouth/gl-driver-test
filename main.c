#include "raylib.h"
#include "glad.h"
#include <stdio.h>

int main()
{
    InitWindow(800, 450, "raylib - Get Driver Name");

    const char* glVendor = (const char*)glGetString(GL_VENDOR);
    const char* glRenderer = (const char*)glGetString(GL_RENDERER);

	const char * v = TextFormat("OpenGL Vendor: %s", glVendor);
	const char * r = TextFormat("OpenGL Renderer: %s", glRenderer);
        
	fprintf(stderr, v);
	fprintf(stderr, "\n");
	fprintf(stderr, r);
	fprintf(stderr, "\n");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText(v, 10, 10, 20, DARKGRAY);
        DrawText(r, 10, 40, 20, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
