#include <iostream>
#include "prb2.h"
#include <string>
using namespace std;
int VideoGame::gameCount = 0;

VideoGame::VideoGame(){
    title = "";
    genre = "";
    price = 0.0;
    rating = 0.0;
    gameCount++;
}
VideoGame::VideoGame(string t , string g , double p , double r ){
    title = t;
    genre = g;
    price = p;
    rating = r;
    gameCount++;
}
VideoGame::~VideoGame(){
    cout << "Video game object destroyed" << endl;
    gameCount--;
}

void VideoGame::setTitle(string t){
    title = t;
}
void VideoGame::setGenre(string g){
    genre = g;
}
void VideoGame::setPrice(double p){
    price = p;
}
void VideoGame::setRating(double r){
    rating = r;
}
string VideoGame::getTitle(){
    return title;
}
string VideoGame::getGenre(){
    return genre;
}
double VideoGame::getPrice(){
    return price;
}
double VideoGame::getRating(){
    return rating;
}
int VideoGame::getGameCount(){
    return gameCount;
}

void VideoGame::displayDetails(){
    cout <<"Title " <<  title << endl;
    cout <<"Genre " <<  genre << endl;
    cout <<"Price " << price << endl;
    cout <<"Rating " << rating <<endl;
}