#include "FileSearch.h"
#include "FSWindow.h"

namespace DupManager {

    FileSearch::FileSearch() {

    }

    FileSearch::FileSearch(const FileSearch &orig) {

    }

    FileSearch::~FileSearch() {

    }

    int FileSearch::run(int argc, char * argv[]) {
        /*
         * We'll create the application so we can run it from here
         */
        Glib::PtrRef<Gtk::Application> application Gkt::Application::create(argc, argv, "");

        FSWindow = new Gtk::Window();
    }

};

