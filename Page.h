#ifndef PAGE_H
#define PAGE_H
/**
 * @brief Assignment 3 PAGE Rank
 * @name YOUR NAME
 */
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
  int usedLinks;

public:
  Page();
  // Should set url to "", both ints to 0 and all links to nullptr

  Page(string urlValue);
  // Should set url to indicated value, everything else as above

  string getURL();
  // Return the Page's URL

  int getNumLinks();
  // Should return the number of usedLinks

  void addLink(Page* other);
  // Should store the given pointer into the links array at the next available
  // location and increment the number of usedLinks

  Page* getRandomLink();
  // Should select a random address from the links the page has and return it.

  void visit();
  // Should add one to the number of visits this page has seen

  int getNumVisits();
  // Returns the number of visits for this page
};
#endif // PAGE_H