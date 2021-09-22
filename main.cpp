#include <iostream>
#include <SFML/Graphics.hpp>
#include "logic.h"
#include <string>


using namespace sf;

const int size = 15;
int arr[size];
std::string s;

int main(){

    fillArray(arr);

    RenderWindow window (VideoMode(1270,920), "bubble sort");

    window.setFramerateLimit(5);

    Text text;
    Font font;
    font.loadFromFile("impact2.ttf");
    text.setColor(sf::Color::Red);
    text.setFont(font);
    text.setPosition(0,0);
    text.setCharacterSize(32);

    while(window.isOpen()){
        Event event;
        while(window.pollEvent(event)){
            if(event.type == Event::Closed){
                window.close();
            }
        }

       for(int i = 0; i < size; i++){
            makeSort(arr, i);
                for(int i = 0; i < size; i++){
                s += std::to_string(arr[i]) + " ";
                }
            text.setString(s);
            s = "";

            window.clear();
            window.draw(text);
            window.display(); 
       }
      
    }

    //delete(arr);
    return 0;
}