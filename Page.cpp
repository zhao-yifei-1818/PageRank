
/**
 * @brief Assignment 3 PAGE Rank
 * @name YOUR NAME
 */
#include "Page.h"

Page::Page()
{
  url = "";
  visits = 0;
  for (int i; i < 3; i++) {
    links[i] = nullptr;
  };
  usedLinks = 0;
}
// Should set url to "", both ints to 0 and all links to nullptr

Page::Page(string urlValue)
{
  url = urlValue;
}
// Should set url to indicated value, everything else as above

string Page::getURL()
{
  return url;
}
// Return the Page's URL

int Page::getNumLinks()
{
  return usedLinks;
}
// Should return the number of usedLinks

Page::addLink(Page* other)
{
  if (usedLinks < 3) {
    links[usedLinks] =
        other;      // store this pointer other to next available location,
    usedLinks += 1; // increase usedlink.
  }
}
// Should store the given pointer into the links array at the next available
// location and increment the number of usedLinks

string Page::getRandomLink()
{
  // major steps
}
// Should select a random address from the links the page has and return it.

void Page::visit()
{
  visits += 1;
}
// Should add one to the number of visits this page has seen

int Page::getNumVisits()
{
  return visits;
}
// Returns the number of visits for this page