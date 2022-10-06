#include "Window.hpp"

namespace Framework
{
	Window::Window() : m_window(nullptr) {}

	bool Window::handleMessage() {

		SDL_Event event;
		while (SDL_PollEvent(&event)) {

			switch (event.type)
			{
			case SDL_QUIT:
				return false;

			default:
				break;
			}
		}

		return true;
	}

	bool Window::start() {

		m_window = SDL_CreateWindow("Vulkan", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1240, 720, SDL_WINDOW_VULKAN);

		if (!m_window) {
			std::cout << "Error: creating SDL window!" << std::endl;
			return false;
		}

		return true;
	}

	void Window::update() {

		while (handleMessage()) {

		}
	}

	Window::operator bool() {
		return m_window != nullptr;
	}

	void Window::stop() {
		SDL_DestroyWindow(m_window);
	}

	uint32_t Window::getWidth() const {
		return SDL_GetWindowSurface(m_window)->w;
	}

	uint32_t Window::getHeight() const {
		return SDL_GetWindowSurface(m_window)->h;
	}

	SDL_Window* Window::getHandle() const {
		return m_window;
	}

	bool Window::init() {

		if (SDL_Init(SDL_INIT_VIDEO) != 0) {
			return false;
		}

		return true;
	}

	void Window::quit() {
		SDL_Quit();
	}
}