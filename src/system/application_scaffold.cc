// EPOS Application Scaffold and Application Abstraction Implementation

#include <utility/ostream.h>
#include <application.h>

__BEGIN_SYS

// Global objects
OStream cout;
OStream cerr;

// Application class attributes
char Application::_preheap[];
Segment * Application::_heap_segment;
Heap * Application::_heap;

__END_SYS
