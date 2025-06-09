#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window;
    window.create(sf::VideoMode({ 800u, 600u }), "Planeta Tierra");

    // Fondo espacial (negro)
    sf::RectangleShape space({ 800.f, 600.f });
    space.setFillColor(sf::Color::Black);
    space.setPosition({ 0.f, 0.f });

    // Algunas estrellas de fondo
    sf::CircleShape star1(1);
    star1.setFillColor(sf::Color::White);
    star1.setPosition({ 100.f, 80.f });

    sf::CircleShape star2(1.5f);
    star2.setFillColor(sf::Color::White);
    star2.setPosition({ 200.f, 150.f });

    sf::CircleShape star3(1);
    star3.setFillColor(sf::Color::White);
    star3.setPosition({ 650.f, 100.f });

    // Planeta Tierra (grande y centrado)
    sf::CircleShape earth(150);
    earth.setFillColor(sf::Color(0, 100, 200)); // Azul océano
    earth.setPosition({ 250.f, 150.f }); // Centrado

    // Continentes (formas verdes sobre la Tierra)
    sf::CircleShape continent1(40);
    continent1.setFillColor(sf::Color(34, 139, 34)); // Verde
    continent1.setPosition({ 320.f, 200.f });

    sf::CircleShape continent2(30);
    continent2.setFillColor(sf::Color(34, 139, 34)); // Verde
    continent2.setPosition({ 280.f, 250.f });

    sf::CircleShape continent3(25);
    continent3.setFillColor(sf::Color(34, 139, 34)); // Verde
    continent3.setPosition({ 350.f, 280.f });

    while (window.isOpen())
    {
        while (auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();

        // Dibujar espacio
        window.draw(space);

        // Dibujar estrellas
        window.draw(star1);
        window.draw(star2);
        window.draw(star3);

        // Dibujar Tierra
        window.draw(earth);
        window.draw(continent1);
        window.draw(continent2);
        window.draw(continent3);

        window.display();
    }

    return 0;
}