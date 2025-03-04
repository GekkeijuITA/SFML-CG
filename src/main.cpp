#include <SFML/Graphics/RenderWindow.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({100u, 100u}), "Succhiami il pipo");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
