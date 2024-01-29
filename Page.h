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
  // Should set url to "", both ints to 0 and all links to nullptr

  Page(string urlValue);
  // Should set url to indicated value, everything else as above

  string getURL();
  // Return the Page's URL

  int getNumLinks();
  // Should return the number of usedLinks

  Page* addLink(Page* other);
  // Should store the given pointer into the links array at the next available
  // location and increment the number of usedLinks
  string getRandomLink();
  void visit();
  int getNumVistits();
};
#endif // PAGE_H