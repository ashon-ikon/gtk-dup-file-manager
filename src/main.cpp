#include <iostream>
#include <gtkmm.h>

int main(int argc, char ** argv) {
	Glib::RefPtr<Gtk::Application> app = 
		Gtk::Application::create(argc, argv, "com.ashon-associates.gtk-dup-file.manager");

	Gtk::Window win;

	// Run the application
	return app->run(win);
}