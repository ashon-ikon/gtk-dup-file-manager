/**
 * File:   DMWindow.h
 * @author Yinka Ashon
 * @created 2015-11-08
 */
#ifndef __DMWINDOW_H__
#define	__DMWINDOW_H__

#include <gtkmm/window.h>
#include <iostream>

namespace DupManager {

    class DMWindow {
    public:
        DMWindow();
        DMWindow(const DMWindow& orig);
        virtual ~DMWindow();
        
        int run(int argc, char * argv[]);
    private:
        
    protected:
        void setupWindow(const char*);
        
        
        Glib::RefPtr<Gtk::Application> m_application;
        Gtk::Window * m_window;

    };
}
#endif	/* __DMWINDOW_H__ */

