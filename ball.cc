#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

//g++ -Wall -o bin/"%e" "%f" -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

class Ball{
    
    publics: 
        Ball(int rad, int x, int y, int r, int g, int b):
        sf::CircleShape C; //must be public so we can draw it
        void move(float x, float y); 
        void update(); 
        //sf::Sprite sprite; 
        
    private: 
        //sf::Texture texture;
}; 

int main()
{
    Ball ball(50, 100, 30, 250, 0, 0); 
    
    sf::Event event; 
    sf::RenderWindow window(sf::VideoMode(800,600), "SFML Test"); 
    while(window.isOpen())
    {
        while(window.pollEvent))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                window.close(); 
                break; 
            }
        }
        
        ball.update(); 
        window.clear(sf::Color::Black);
        window.draw(ball.sprite); 
        window.display(); 
    }
    return 0; 
}

Ball::Ball(int rad, int x, int r, int g, int b)
{
    C.setRadius(rad); 
    C.setFillColor(sf::Color(r,g,b)); 
    C.setPosition(x,y); 
    
    //texture.loadFromFile("ufo.jpg"); 
    //sprite.setTexture(texture);
}

void Ball::update(){
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        C.move(-1,0); 
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        C.move(1,0); 
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        C.move(0,1); 
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        C.move(0,-1); 
    }
}





