#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>

#include "IWindow.hpp"

namespace Framework
{
	class Window : public IWindow
	{
		private:
			SDL_Window* m_window;

		private:
			bool handleMessage();

		public:
			Window();
			bool start();
			void update();
			explicit operator bool();
			void stop();

		public:
			uint32_t getWidth() const;
			uint32_t getHeight() const;
			SDL_Window* getHandle() const;

		public:
			static bool init();
			static void quit();
	};
}

#endif // WINDOW_HPP