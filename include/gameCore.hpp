#ifndef GAME_CORE_HPP
#define GAME_CORE_HPP

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/RenderTexture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Window/Event.hpp>

class GameCore
{
public:
    GameCore(void);
    ~GameCore(void);

    void loop(void);
    void update(void);
    void draw(void);
    void calcScale(void);

	sf::RenderWindow window;
	bool fullscreen;
	sf::String windowTitle;
	sf::Event event;

	sf::RenderTexture render;
    sf::Vector2u renderSize;
    sf::Vector2i renderOffset;
	int scale;
	sf::View renderView;
	sf::Sprite renderSprite;
};

#endif