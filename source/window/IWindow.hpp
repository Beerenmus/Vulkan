#ifndef IWINDOW_HPP
#define IWINDOW_HPP

#define SDL_MAIN_HANDLED
#include <SDL.h>

namespace Framework {

	class IWindow {
		
		public:
			virtual uint32_t getWidth() const = 0;
			virtual uint32_t getHeight() const = 0;
			virtual SDL_Window* getHandle() const = 0;
	};
}

#endif // !IWINDOW_HPP