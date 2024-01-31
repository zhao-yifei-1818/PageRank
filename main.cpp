#include "Page.cpp"
#include "Page.h"
#include <iostream>
using namespace std;

int main()
{
  Page page1;
  Page page2;
  Page page3;
  Page page4;

  Page* p1 = &page1;
  Page* p2 = &page2;
  Page* p3 = &page3;
  Page* p4 = &page4;

  page1.addLink(p1);
  page1.addLink(p3);

  page2.addLink(p3);

  page3.addLink(p4);

  page4.addLink(p1);
  page4.addLink(p3);

  int random = 1 + (rand() % 100);
  if Page
    newPage;
  Page* np = &newPage;
}
