/**
 * File:   DMWindow.h
 * @author Yinka Ashon
 * @created 2015-11-08
 */
#ifndef __FSWINDOW_H__
#define	__FSWINDOW_H__

#include <iostream>
#include <gtkmm/window.h>

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
        Gtk::Window * m_window = nullptr;

    };
};
#endif	/* __FSWINDOW_H__ */

