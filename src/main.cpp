#include <SFML/Graphics.hpp>

int main(int argc, char* argv[])
{
  sf::Window win(sf::VideoMode(800, 600), "myproject");

  while( win.isOpen() )
  {
    sf::Event Event;
    
    while( win.pollEvent(Event) )
    {
      if( Event.type == sf::Event::Closed )
	win.close();
    }
    
    win.display();
  }
}