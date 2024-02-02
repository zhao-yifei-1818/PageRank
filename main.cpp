/**
 * @brief Assignment 3 PAGE Rank
 * @name Yifei Zhao
 */
#include "Page.cpp"

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

// print function
void printVisits(Page** pages, int numOfPages)
// print visits , takes an array of pointer and number of pages which is 4)
{
  double percentage;
  // for each page
  for (int i = 0; i < numOfPages; i++) {
    // get pageObject's visits by -> as its a pointer, calculate out percentage
    // specifically to 2 decimal.
    percentage =
        (static_cast<double>(pages[i]->getNumVisits()) / 1000000) * 100.0;
    // now cout nice and clear
    cout << "Page " << i + 1 << " contributes " << fixed << setprecision(2)
         << percentage << "% of visits" << endl;
  }
}

int main()
{
  srand(static_cast<unsigned int>(
      time(nullptr))); // Seed the random number generator
  // initialize
  Page page1;
  Page page2;
  Page page3;
  Page page4;
  // and connect to pointer
  Page* pages[4];
  pages[0] = &page1;
  pages[1] = &page2;
  pages[2] = &page3;
  pages[3] = &page4;

  page1.addLink(pages[1]); // p1 connect p2
  page1.addLink(pages[2]); // and p3

  page2.addLink(pages[2]); // p2 connect p3

  page3.addLink(pages[3]);

  page4.addLink(pages[0]);
  page4.addLink(pages[2]);

  Page* currentPage = pages[0];     // start at p1
  for (int i = 0; i < 1000000; i++) // do the following 1mil times
  {
    int rand1_100 = rand() % 100 + 1; // i roll 1~100
    // if i roll <= 15 or the page has no link yet, I assign a random page
    // form 4.
    if (rand1_100 <= 15 || currentPage->getNumLinks() == 0) {
      currentPage = pages[rand() % 3];
    } // otherwise
    else {
      currentPage =
          currentPage->getRandomLink(); // get random link with member function
                                        // and link to current.
    }
    currentPage->visit();
  };
  printVisits(pages, 4); // print our array.
  return 0;
}
