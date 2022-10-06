#include <iostream>

#include "window/Window.hpp"

int main() {

	if (Framework::Window::init()) {

		Framework::Window wnd;

		if (wnd.start()) {
			wnd.update();
			wnd.stop();
		}

		Framework::Window::quit();
	}


	return 0;
}