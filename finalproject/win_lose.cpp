#include "win_lose.h"

void won() {
	//yay
	//sound
}

void game_over() {
	//resize console window and clear screen
	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL) { MoveWindow(hwnd, 0, 0, 1600, 600, TRUE); }
	system("cls"); //clearing screen

				   //boo sound
	play_music_boo();

	//output GameoveR ASCII art
	cout << "          GGGGGGGGGGGGG                                                                                                                          RRRRRRRRRRRRRRRRR   " << endl; Sleep(500);
	cout << "       GGG::::::::::::G                                                                                                                          R::::::::::::::::R  " << endl; Sleep(500);
	cout << "     GG:::::::::::::::G                                                                                                                          R::::::RRRRRR:::::R " << endl; Sleep(500);
	cout << "    G:::::GGGGGGGG::::G                                                                                                                          RR:::::R     R:::::R" << endl; Sleep(500);
	cout << "   G:::::G       GGGGGG  aaaaaaaaaaaaa      mmmmmmm    mmmmmmm       eeeeeeeeeeee            ooooooooooo vvvvvvv           vvvvvvv eeeeeeeeeeee    R::::R     R:::::R" << endl; Sleep(500);
	cout << "  G:::::G                a::::::::::::a   mm:::::::m  m:::::::mm   ee::::::::::::ee        oo:::::::::::oov:::::v         v:::::vee::::::::::::ee  R::::R     R:::::R" << endl; Sleep(500);
	cout << "  G:::::G                aaaaaaaaa:::::a m::::::::::mm::::::::::m e::::::eeeee:::::ee     o:::::::::::::::ov:::::v       v:::::ve::::::eeeee:::::eeR::::RRRRRR:::::R " << endl; Sleep(500);
	cout << "  G:::::G    GGGGGGGGGG           a::::a m::::::::::::::::::::::me::::::e     e:::::e     o:::::ooooo:::::o v:::::v     v:::::ve::::::e     e:::::eR:::::::::::::RR  " << endl; Sleep(500);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0C); // changes color to red
	cout << "  G:::::G    G::::::::G    aaaaaaa:::::a m:::::mmm::::::mmm:::::me:::::::eeeee::::::e     o::::o     o::::o  v:::::v   v:::::v e:::::::eeeee::::::eR::::RRRRRR:::::R " << endl; Sleep(500);
	cout << "  G:::::G    GGGGG::::G  aa::::::::::::a m::::m   m::::m   m::::me:::::::::::::::::e      o::::o     o::::o   v:::::v v:::::v  e:::::::::::::::::e R::::R     R:::::R" << endl; Sleep(500);
	cout << "  G:::::G        G::::G a::::aaaa::::::a m::::m   m::::m   m::::me::::::eeeeeeeeeee       o::::o     o::::o    v:::::v:::::v   e::::::eeeeeeeeeee  R::::R     R:::::R" << endl; Sleep(500);
	cout << "   G:::::G       G::::Ga::::a    a:::::a m::::m   m::::m   m::::me:::::::e                o::::o     o::::o     v:::::::::v    e:::::::e           R::::R     R:::::R" << endl; Sleep(500);
	cout << "    G:::::GGGGGGGG::::Ga::::a    a:::::a m::::m   m::::m   m::::me::::::::e               o:::::ooooo:::::o      v:::::::v     e::::::::e        RR:::::R     R:::::R" << endl; Sleep(500);
	cout << "     GG:::::::::::::::Ga:::::aaaa::::::a m::::m   m::::m   m::::m e::::::::eeeeeeee       o:::::::::::::::o       v:::::v       e::::::::eeeeeeeeR::::::R     R:::::R" << endl; Sleep(500);
	cout << "       GGG::::::GGG:::G a::::::::::aa:::am::::m   m::::m   m::::m  ee:::::::::::::e        oo:::::::::::oo         v:::v         ee:::::::::::::eR::::::R     R:::::R" << endl; Sleep(500);
	cout << "          GGGGGG   GGGG  aaaaaaaaaa  aaaammmmmm   mmmmmm   mmmmmm    eeeeeeeeeeeeee          ooooooooooo            vvv            eeeeeeeeeeeeeeRRRRRRRR     RRRRRRR" << endl; Sleep(500);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0F); // changes to white 
	Sleep(3000);
}

void byebye() {
	//clear console
	system("cls");
	//~bye~
	cout << "                       BBBBBBBBBBBBBBBBB   YYYYYYY       YYYYYYYEEEEEEEEEEEEEEEEEEEEEE                       " << endl;
	cout << "                       B::::::::::::::::B  Y:::::Y       Y:::::YE::::::::::::::::::::E                       " << endl;
	cout << "                       B::::::BBBBBB:::::B Y:::::Y       Y:::::YE::::::::::::::::::::E                       " << endl;
	cout << "                       BB:::::B     B:::::BY::::::Y     Y::::::YEE::::::EEEEEEEEE::::E                       " << endl;
	cout << "                         B::::B     B:::::BYYY:::::Y   Y:::::YYY  E:::::E       EEEEEE                       " << endl;
	cout << "                         B::::B     B:::::B   Y:::::Y Y:::::Y     E:::::E                                    " << endl;
	cout << "                         B::::BBBBBB:::::B     Y:::::Y:::::Y      E::::::EEEEEEEEEE                          " << endl;
	cout << "    ~~~~~~~~~    ~~~~~~  B:::::::::::::BB       Y:::::::::Y       E:::::::::::::::E       ~~~~~~~~~    ~~~~~~" << endl;
	cout << "  ~~:::::::::~  ~:::::~  B::::BBBBBB:::::B       Y:::::::Y        E:::::::::::::::E     ~~:::::::::~  ~:::::~" << endl;
	cout << " ~:::::~~:::::~~:::::~   B::::B     B:::::B       Y:::::Y         E::::::EEEEEEEEEE    ~:::::~~:::::~~:::::~ " << endl;
	cout << "~:::::~  ~::::::::::~    B::::B     B:::::B       Y:::::Y         E:::::E             ~:::::~  ~::::::::::~  " << endl;
	cout << "~~~~~~    ~~~~~~~~~~     B::::B     B:::::B       Y:::::Y         E:::::E       EEEEEE~~~~~~    ~~~~~~~~~~   " << endl;
	cout << "                       BB:::::BBBBBB::::::B       Y:::::Y       EE::::::EEEEEEEE:::::E                       " << endl;
	cout << "                       B:::::::::::::::::B     YYYY:::::YYYY    E::::::::::::::::::::E                       " << endl;
	cout << "                       B::::::::::::::::B      Y:::::::::::Y    E::::::::::::::::::::E                       " << endl;
	cout << "                       BBBBBBBBBBBBBBBBB       YYYYYYYYYYYYY    EEEEEEEEEEEEEEEEEEEEEE                       " << endl;

	//cout << "p1.name = " << p1.player_name << endl;
	//cout << "p1.moves = " << p1.player_number_of_moves << endl;
}