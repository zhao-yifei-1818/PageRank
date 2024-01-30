
/**
 * @brief Assignment 3 PAGE Rank
 * @name YOUR NAME
 */
#include "Page.h"

Page::Page()
// Should set url to "", both ints to 0 and all links to nullptr
{
  url = "";
  visits = 0;
  for (int i; i < 3; i++) {
    links[i] = nullptr;
  };
  usedLinks = 0;
}

Page::Page(string urlValue)
// Should set url to indicated value, everything else as above
{
  url = urlValue;
}

string Page::getURL()
// Return the Page's URL
{
  return url;
}

int Page::getNumLinks()
// Should return the number of usedLinks
{
  return usedLinks;
}

void Page::addLink(Page* other)
{
  if (usedLinks < 3) {
    // random a number
    links[usedLinks] =
        other; // store this pointer other to next available location,
    usedLinks += 1;
  }
}
// Should store the given pointer into the links array at the next available
// location and increment the number of usedLinks

Page* Page::getRandomLink()
// Should select a random address from the links the page has and return it.
{
  if (usedLinks < 3) {
    return links[rand() % (3 - usedLinks)]; // return a random number, based on
                                            // slots left.
    usedLinks += 1;
  }
  return nullptr;
}

void Page::visit()
// Should add one to the number of visits this page has seen
{
  visits += 1;
}

int Page::getNumVisits()
// Returns the number of visits for this page
{
  return visits;
}