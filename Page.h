#ifndef PAGE_H
#define PAGE_H

#include <string>

using namespace std;

/**
 * @brief 111
 */
class Page {
private:
  string url;
  int visits;
  Page* links[3];
};
#endif // PAGE_H