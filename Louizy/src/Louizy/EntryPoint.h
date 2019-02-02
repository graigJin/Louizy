#pragma once

#ifdef LZ_PLATFORM_WINDOWS

extern Louizy::Application* Louizy::CreateApplication();

int main(int argc, char** argv)
{
	printf("Louizy Engine\n");
	auto app = Louizy::CreateApplication();
	app->Run();
	delete app;
}

#endif
