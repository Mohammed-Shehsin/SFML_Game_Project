#ifndef GOLD_HPP
#define GOLD_HPP

#include <SFML/Graphics.hpp>
#include "Pickable.hpp"
#include "Player.hpp"

class Gold : public Pickable
{
public:
    Gold(const std::string& texturePath);
    bool checkCollision(Player& player);
    void collision(const std::vector<std::unique_ptr<Immovable>>& platforms) ;
    void update(const std::vector<std::unique_ptr<Immovable>>& platforms, const sf::RenderWindow& window);
};

#endif // GOLD_HPP
