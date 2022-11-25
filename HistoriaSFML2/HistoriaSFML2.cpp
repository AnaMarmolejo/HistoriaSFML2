#pragma once
#include <iostream>
#include <list>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>


using namespace std;
using namespace sf;

int main()
{
	sf::Music music;
	music.openFromFile("LightandShadow.wav");
	music.setVolume(50);
	music.play();
	music.setLoop(true);


	Texture texture0, texture1, texture2, texture3, texture4, texture5, texture6, texture7, texture8, texture9, texture10, texture11, texture12;

	if (!texture0.loadFromFile("Images/Portada.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture2.loadFromFile("Images/ImagenBB.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture3.loadFromFile("Images/ImagenFF.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture4.loadFromFile("Images/ImagenJJ.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture5.loadFromFile("Images/ImagenII.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture6.loadFromFile("Images/ImagenKK.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture7.loadFromFile("Images/ImagenLL.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture8.loadFromFile("Images/ImagenNN.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture9.loadFromFile("Images/ImagenOO.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture10.loadFromFile("Images/ImagenRR.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture11.loadFromFile("Images/ImagenSS.png")) {
		cout << "Error a el cargar la imagen";
	}
	if (!texture12.loadFromFile("Images/ImagenTT.png")) {
		cout << "Error a el cargar la imagen";
	}
		char op = 'p';
		Sprite Portada, ImagenB, ImagenF, ImagenJ, ImagenI, ImagenK, ImagenL, ImagenN, ImagenO, ImagenR, ImagenS, ImagenT;
		Portada.setTexture(texture0); Portada.setPosition(0, 0);

		ImagenB.setTexture(texture2); ImagenB.setPosition(0, 0);
		ImagenF.setTexture(texture3); ImagenF.setPosition(0, 0);
		ImagenJ.setTexture(texture4); ImagenJ.setPosition(0, 0);
		ImagenI.setTexture(texture5); ImagenI.setPosition(0, 0);
		ImagenK.setTexture(texture6); ImagenK.setPosition(0, 0);
		ImagenL.setTexture(texture7); ImagenL.setPosition(0, 0);
		ImagenN.setTexture(texture8); ImagenN.setPosition(0, 0);
		ImagenO.setTexture(texture9); ImagenO.setPosition(0, 0);
		ImagenR.setTexture(texture10); ImagenR.setPosition(0, 0);
		ImagenS.setTexture(texture11); ImagenS.setPosition(0, 0);
		ImagenT.setTexture(texture12); ImagenT.setPosition(0, 0);

		
		RenderWindow window(sf::VideoMode(1280, 720), "Guardianas Estelares");
		char _juegas = 'y';
		while (_juegas == 'y' || _juegas == 'Y') {

			while (window.isOpen())
			{
				Event event;
				while (window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
						window.close();
				}
				window.clear();
				window.draw(Portada);
				window.display();
				system("cls");
				cout << "Tecla: ";
				cin >> op;


				if (op == 'B' || op == 'b') {
					window.clear(); window.draw(ImagenB); window.display();
					system("cls"); cout << "Tecla: "; cin >> op;
				}
				
				if (op == 'J' || op == 'j') {
					music.openFromFile("Baron.wav");
					music.setVolume(50);
					music.play();
					window.clear(); window.draw(ImagenJ); window.display();
					system("cls"); cout << "Tecla: "; cin >> op;
				}
			
				if (op == 'I' || op == 'i') {
					music.openFromFile("LightandShadow.wav");
					music.setVolume(50);
					music.setPlayingOffset(sf::seconds(60.f));
					music.play();
					window.clear(); window.draw(ImagenI); window.display();
					system("cls"); cout << "Tecla: "; cin >> op;
				}
				if (op == 'K' || op == 'k') {
					music.openFromFile("Baron.wav");
					music.setVolume(50);
					music.play();
					window.clear(); window.draw(ImagenK); window.display();
					system("cls"); cout << "Tecla: "; cin >> op;
				}   
				if (op == 'l' || op == 'L') {
					music.stop();
					music.openFromFile("StarGuardian.wav");
					music.setVolume(50);
					music.play();
					window.clear(); window.draw(ImagenL); window.display();
					system("cls");
					cout << "quieres volver a jugar?: presiona *y* para continuar o *n* si quieres salir uwu :" << endl;
					cin >> _juegas;
					music.openFromFile("LightandShadow.wav");
					music.setVolume(50);
					music.setPlayingOffset(sf::seconds(4.f));
					music.play();
				}	

				if (op == 'N' || op == 'n') {
					music.openFromFile("LightandShadow.wav");
					music.setVolume(50);
					music.setPlayingOffset(sf::seconds(15.f));
					music.play();
					window.clear(); window.draw(ImagenN); window.display();
					system("cls"); cout << "Tecla: "; cin >> op;
				}
				if (op == 'O' || op == 'o') {
					music.openFromFile("Neeko.wav");
					music.setVolume(50);
					music.setPlayingOffset(sf::seconds(2.f));
					music.play();
					window.clear(); window.draw(ImagenO); window.display();
					system("cls"); cout << "Tecla: "; cin >> op;

				}
				if (op == 'R' || op == 'r') {
					music.openFromFile("LightandShadow.wav");
					music.setVolume(50);
					music.setPlayingOffset(sf::seconds(60.f));
					music.play();
					window.clear(); window.draw(ImagenR); window.display();
					system("cls"); cout << "Tecla: "; cin >> op;
				}
				if (op == 'T' || op == 't') {
					window.clear(); window.draw(ImagenT); window.display();
					system("cls");
					cout << "quieres volver a jugar?: presiona *y* para continuar o *n* si quieres salir uwu :" << endl;
					cin >> _juegas; 
					music.openFromFile("LightandShadow.wav");
					music.setVolume(50);
					music.setPlayingOffset(sf::seconds(4.f));
					music.play();
				}

				if (op == 'S' || op == 's') {
					window.clear(); window.draw(ImagenS); window.display();
					system("cls");
					cout << "quieres volver a jugar?: presiona *y* para continuar o *n* si quieres salir uwu :" << endl;
					cin >> _juegas;
					if (_juegas != 'y') window.close();
					music.openFromFile("LightandShadow.wav");
					music.setVolume(50);
					music.setPlayingOffset(sf::seconds(4.f));
					music.play();
				}
				
				if (_juegas != 'y') window.close();
			}
			return 0;
		}
		
	}
 


//
//void Grafo::loadTextures()
//{
//	if (!texture0.loadFromFile("Images/Portada.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture1.loadFromFile("Images/ImagenA.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture2.loadFromFile("Images/ImagenB.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture3.loadFromFile("Images/ImagenF.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture4.loadFromFile("Images/ImagenJ.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture5.loadFromFile("Images/ImagenI.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture6.loadFromFile("Images/ImagenK.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture7.loadFromFile("Images/ImagenL.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture8.loadFromFile("Images/ImagenN.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture9.loadFromFile("Images/ImagenO.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture10.loadFromFile("Images/ImagenR.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture11.loadFromFile("Images/ImagenS.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture12.loadFromFile("Images/ImagenT.png")) {
//		cout << "Error a el cargar la imagen";if (!texture0.loadFromFile("Images/Portada.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture1.loadFromFile("Images/ImagenA.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture2.loadFromFile("Images/ImagenB.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture3.loadFromFile("Images/ImagenF.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture4.loadFromFile("Images/ImagenJ.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture5.loadFromFile("Images/ImagenI.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture6.loadFromFile("Images/ImagenK.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture7.loadFromFile("Images/ImagenL.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture8.loadFromFile("Images/ImagenN.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture9.loadFromFile("Images/ImagenO.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture10.loadFromFile("Images/ImagenR.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture11.loadFromFile("Images/ImagenS.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//	else if (!texture12.loadFromFile("Images/ImagenT.png")) {
//		cout << "Error a el cargar la imagen";
//	}
//}

