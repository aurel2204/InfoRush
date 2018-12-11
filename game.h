#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <deque>
#include <vector>
#include <memory>
#include <algorithm>

#include "Obstacle.h"
#include "Constants.h"
#include "Circle.h"
#include "Triangle.h"
#include "Car.h"

using namespace std;

class Game
{
public:
	Game();
	void run();
private:
	void newGame();
	void gameOver();
	static bool isGameOver(Car::Lane carLane, Car::Lane objLane,Obstacle *o);

	sf::RenderWindow m_window;

	sf::VertexArray m_dividers;
	//vector<Obstacle*> m_obstacles;
	deque<Obstacle *> m_obstacles;
	Car m_leftCar;
	//m_rightCar;

	sf::Font m_font;
	sf::Text m_prompt;
	sf::RectangleShape m_overlayBg;

	sf::Music m_bgMusic;

	sf::Clock m_timer;
	int m_score;
	bool m_playing;
	float m_distance,
		m_velocity;
};

#endif // GAME_H
