/**
 * @author Yinka Ashon
 * @created 2015-11-03
 */
#ifndef __FILE_SEARCH_H__
#define __FILE_SEARCH_H__
#include "DMWindow.h"

namespace DupManager {

    class FileSearch {
    public:
        FileSearch();
        FileSearch(const FileSearch & orig);
        virtual ~FileSearch();

        int run(int, char*[]);
    };
}
#endif /* __FILE_SEARCH_H__ */