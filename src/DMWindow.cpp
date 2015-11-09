/* 
 * File:   FSWindow.cpp
 * Author: yinka
 * 
 * Created on 8 November 2015, 7:50 PM
 */

#include "DMWindow.h"
#include <gtkmm/window.h>

namespace DupManager {
    
    DMWindow::DMWindow() {
    }

    DMWindow::DMWindow(const DMWindow& orig) {
    }

    DMWindow::~DMWindow() {
    }
    
    /**
     * Main Application entry
     * @param argc
     * @param argc
     * @return 
     */
    int DMWindow::run(int argc, char* argc[]) {
        m_application = Gtk::Application::create(argc, argv, "com.ashon-associates.gtk-dup-file.manager");
        
        setupWindow("Window Name");
        return this->m_application->run(this->m_window);
    }
    
    void DMWindow::setupWindow(const char* title) {
        m_window = new Gtk::Window();
        m_window->set_title(title);
//        m_window->set_
    }
};
