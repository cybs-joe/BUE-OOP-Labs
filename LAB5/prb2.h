#pragma once
#include <iostream>
#include<string>
using namespace std;
class VideoGame{
    private:
    string title;
    string genre;
    double price;
    double rating;
    static int gameCount;

    public:
    VideoGame();
    VideoGame(string t , string g , double p , double r );
    ~VideoGame();
    void setTitle(string t);
    void setGenre(string g);
    void setPrice(double p);
    void setRating(double r);
    string getTitle();
    string getGenre();
    double getPrice();
    double getRating();
    void displayDetails();
    static int getGameCount();
};