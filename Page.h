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

public:
  Page();
  Page(string urlValue);
  string getURL();
  int getNumLinks();
  Page* addLink(Page* other);
  string getRandomLink();
  void visit();
  int getNumVistits();
};
#endif // PAGE_H