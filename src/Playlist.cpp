#include "../header/Playlist.hpp"
#include <iostream>

Playlist::Playlist(string n){
	name = n;
	length = 0;
}

void Playlist::display() {
   std::string option = "B";
   while(option != "E") {
       std::cout << name << std::endl;
       std::cout << std::endl;
       // display_songs();

       std::cout << "(A) - ADD SONG" << std::endl;
       // std::cout << std::endl;
       std::cout << "(D) - DELETE SONG" << std::endl;
       // std::cout << std::endl;
       std::cout << "(H) - HIDE/UNHIDE SONG" << std::endl;
       //std::cout << std::endl;
       std::cout << "(P) - PLAY" << std::endl;
       // std::cout << std::endl;
       std::cout << "(PS) - PLAY SONG" << std::endl;
       // std::cout << std::endl;
       std::cout << "(S) - SHUFFLE" << std::endl;
       // std::cout << std::endl;
       std::cout << "(A) - ANALYTICS" << std::endl;
       // std::cout << endl;
       std::cout << "(E) - EXIT" << std::endl;
       std::cout << "ENTER OPTION:" << endl;

       std::cin >> option;
       
       if (option == "AS") {
       cout << endl;
       //add_song();
       }
    
       else if (option == "DS") {
       cout << endl;
       //delete_song();
       }

       else if(option == "HS") {
       cout << endl;
       //hid_unhide_song();
       }

       else if(option == "P") {
       cout << endl;
       //play();
       }
       else if(option == "PS") {
       cout << endl;
       //play_song();
       }
       else if(option == "S") {
       cout << endl;
       //shuffle();
       }
       else if(option == "A") {
       cout << endl;
       //analytics();
       }

   }       
             
}
       
void Playlist::add_song(){
	//insert implementation
}

void Playlist::delete_song(){
	//insert implementation
}

void Playlist::hide_unhide_song(){
	//insert implementation
}

void Playlist::play(){
	//insert implementation
}

void Playlist::play_song(){
	//insert implementation
}

void Playlist::shuffle(){
	//insert implementation
}

void Playlist::analytics(){
	//insert implementation
}
