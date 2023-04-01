#include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>			
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

void game_title();
void consele_print();
void console_secmek();
void player_lohve_qurulus();
void player_comp_lohve_qurulus();
void attack_etmek_yazi();
void attackin_duzugunluyu();
void player_ilk_qoyulus();
void playerde_hv_qoyulmasi();
void oyun_xal_gosterme();
void loadingBar();
void komputer_gemilerin_qoyulmasi();
void komputerde_yoxlanis();
void komputer_hv();
void compter_attak();
void komputer_atack_yoxlama();
void setir_yoxlama();
void sutun_yoxlama();
void herf_yoxlama();
void komputer_attak_vurus();
void komputer_gemi_yoxlama();
void komputer_vurma_herf();
void how_to_play();
void main();
void gamerWin();
void clear_hit();
void exit1();


const int console_sutun = 3;
const int console_setir = 18;

char hucum_lohvesi[11][13] =
{
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
};

char player_lohve[11][13] = {
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
	{'#','-','-','-','-','-','-','-','-','-','-','%'},
};

char computer_lohve[11][13] =
{
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
	{'#','-','-','-','-','-','-','-','-','-','-','#'},
};


void game_title() {
	system("color 2");
	cout << R"( _________       ___  ____________  ____________  ___       ________   _________  __    __   __       _______)" << endl;
	cout << R"(|     _  "\     /"""\("  BATTLE  ")("   SHEAP  ")|"  |     /"BATTLE"| /" SHEAP ")/" |  | "\ |" \     |      "\)" << endl;
	cout << R"((.   |_)  :)   /     \)__/   \\__/  )__/   \\__/ ||  |    (: _______)(:    \___/(:  (__)  :)||  |    (. |__) :))" << endl;
	cout << R"(|:        \/  /  / \  \  \\_  /        \\_  /    |:  |     \/    |    \___   \   \/      \/ |:  |    |:  ____/)" << endl;
	cout << R"((|    _  \\  /  '___'  \ |.   |        |.   |     \  |___  // ___)_    __/   \\  //  __  \\ |.  |    (|  /)" << endl;
	cout << R"(|:   |_)  :)/  //   \\  \\:   |        \:   |    ( \_|:  \(:      "|  /" \    :)(:  (  )  :)/\  |\  /|__/ \)" << endl;
	cout << R"((_________/(___/     \___)\___|         \___|     \_______)\_______)(________ /  \__|  |__/(__\_|_)(_______))" << endl << endl << endl;
}

char console[console_sutun][console_setir] = {
  {' ','<','<',' ','N','E','W',' ','G','A','M','E',' ','>','>',' '},
  {' ','<','<',' ','H','O','W',' ','T','O',' ','P','L','A','Y',' ','>','>'},
  {' ',' ',' ','<','<',' ','E','X','I','T',' ','>','>',' ',' ',' '},
};

char hv[10];
char player_ship_coordinates[10];
char hucumcu_kordinat[10];
int a = 65, b = 65;
int computer_gemilerin_sayi = 14;
int player_gemilerin_sayi = 14;
int console_secim_sutun = 0, console_secim_setir = 0;
int patrol_boat_size = 2, player_patrol_boat_size = 2;
int submarine_size = 3, player_submarine_size = 3;
int destroyer_size = 4, player_destroyer_size = 4;
int helicarrier_size = 5, player_helicarrier_size = 5;
int sutun, setir;
int attack_sutun, attack_setir;
int computer_sutun, komputer_setir;
int komputer_attack_sutun, komputer_attack_setir;
int computer_hv;
char console_move;
char console_move2;
char komputer_attack_herf;
int ship_number = 0;
int computer_ship = 0;
bool gemi_duzgun_yoxlama;
bool komputer_duzgun_gemi_yoxlama;
bool attack_duzgun_yoxlama;
bool komputer_attack_yoxlama;
bool patrol_boat_hit = false;
bool submarine_hit = false;
bool destroyer_hit = false;
bool helicarrier_hit = false;



void consele_print() {
	for (int i = 0; i < console_sutun; i++) {
		cout << setw(46);
		for (int j = 0; j < console_setir; j++) {
			if (i == console_secim_sutun && j == console_secim_setir) cout << (char)16;
			cout << console[i][j];
		}cout << endl;
	}
}

void console_secmek() {
	bool yoxlama = true;
	while (yoxlama) {
		if (_kbhit()) {
			console_move = _getch();
			if (console_secim_sutun == 0 && console_secim_setir == 0 && console_move == 13) {
				system("CLS");
				komputer_gemilerin_qoyulmasi();
				player_lohve_qurulus();
				attack_etmek_yazi();
				player_comp_lohve_qurulus();
				system("cls");
				loadingBar();
				compter_attak();
			}
			else if (console_secim_sutun == 1 && console_secim_setir == 0 && console_move == 13) {
				system("CLS");
				how_to_play();
			}
			else if (console_secim_sutun == 2 && console_secim_setir == 0 && console_move == 13) {
				system("CLS");
				exit1();
			}
			else if (console_move == 27) {
				system("CLS");
				consele_print();
			}
			else if (console_move == -32) {
				console_move2 = _getch();
				switch (console_move2) {
				case 72:
					if (console_secim_sutun > 0) {
						console_secim_sutun--;
					}
					break;
				case 80:
					if (console_secim_sutun < console_sutun - 1) {
						console_secim_sutun++;
					}
					break;
				}
				system("CLS");
				game_title();
				consele_print();
			}
		}
	}
}

void player_lohve_qurulus() {
	system("CLS");
	cout << setw(52) << "0 1 2 3 4 5 6 7 8 9" << endl;
	cout << setw(32) << (char)218;
	for (int j = 0; j < 21; j++) {
		cout << (char)196;
	}cout << (char)191 << endl;

	for (int k = 0; k < 10; k++) {
		if ((char)a == 'A') cout << " ";
		cout << setw(29) << (char)a++ << " ";
		for (int l = 0; l < 12; l++) {
			if (player_lohve[k][l] == '-') {
				cout << (char)248 << " ";
			}
			else if (player_lohve[k][l] == '#') {
				cout << (char)179 << " ";
			}
			else if (player_lohve[k][l] == '%') {
				cout << (char)179 << endl << " ";
			}
			else if (player_lohve[k][l] == 'P') {
				cout << (char)80 << " ";
			}
			else if (player_lohve[k][l] == 'S') {
				cout << (char)83 << " ";
			}
			else if (player_lohve[k][l] == 'D') {
				cout << (char)68 << " ";
			}
			else if (player_lohve[k][l] == 'H') {
				cout << (char)72 << " ";
			}
			else if (player_lohve[k][l] == '!') {
				cout << (char)33 << " ";
			}
			else if (player_lohve[k][l] == '$') {
				cout << (char)237 << " ";
			}
		}
	}a = 65;
	cout << setw(31) << (char)192;
	for (int o = 0; o < 21; o++) {
		cout << (char)196;
	}cout << (char)217 << endl << endl << endl;
}
void oyun_xal_gosterme() {
	system("CLS");
	cout << setw(63) << "Computer's Ship Status " << (char)179 << " " << "Player" << "'s Ship Status" << endl;
	cout << setw(43) << (char)201;
	for (int i = 0; i < 40; i++) {
		cout << (char)205;
	}cout << (char)187 << endl;
	cout << setw(43) << (char)186 << "Patrol Boat: " << patrol_boat_size << setw(7) << (char)179 << setw(18) << "Patrol Boat: " << player_patrol_boat_size << (char)186 << endl;
	cout << setw(43) << (char)186 << "Submarine: " << submarine_size << setw(9) << (char)179 << setw(18) << "Submarine: " << player_submarine_size << (char)186 << endl;
	cout << setw(43) << (char)186 << "Destroyer: " << destroyer_size << setw(9) << (char)179 << setw(18) << "Destroyer: " << player_destroyer_size << (char)186 << endl;
	cout << setw(43) << (char)186 << "Helicarrier: " << helicarrier_size << setw(7) << (char)179 << setw(18) << "Helicarrier: " << player_helicarrier_size << (char)186 << endl;
	cout << setw(43) << (char)200;
	for (int i = 0; i < 40; i++) {
		cout << (char)205;
	}cout << (char)188 << endl;
}

void player_comp_lohve_qurulus() {
	oyun_xal_gosterme();
	system("color 2");
	for (int i = 0; i < 2; i++) {
		cout << endl;
	}
	cout << setw(49) << "Player Board" << setw(40) << "Enemy Board" << endl << endl;
	cout << setw(52) << "0 1 2 3 4 5 6 7 8 9" << setw(41) << "0 1 2 3 4 5 6 7 8 9" << endl;
	cout << setw(32) << (char)218;
	for (int j = 0; j < 21; j++) {
		cout << (char)196;
	}cout << (char)191 << setw(19) << (char)218;
	for (int n = 0; n < 21; n++) {
		cout << (char)196;
	}cout << (char)191 << endl;
	for (int k = 0; k < 10; k++) {
		cout << setw(30) << (char)a++ << " ";
		for (int l = 0; l < 12; l++) {
			if (player_lohve[k][l] == '-') {
				cout << (char)248 << " ";
			}
			else if (player_lohve[k][l] == '#') {
				cout << (char)179 << " ";
			}
			else if (player_lohve[k][l] == '%') {
				cout << (char)179 << " ";
			}
			else if (player_lohve[k][l] == 'P') {
				cout << (char)80 << " ";
			}
			else if (player_lohve[k][l] == 'S') {
				cout << (char)83 << " ";
			}
			else if (player_lohve[k][l] == 'D') {
				cout << (char)68 << " ";
			}
			else if (player_lohve[k][l] == 'H') {
				cout << (char)72 << " ";
			}
			else if (player_lohve[k][l] == '!') {
				cout << (char)33 << " ";
			}
			else if (player_lohve[k][l] == '$') {
				cout << (char)237 << " ";
			}
		}
		cout << setw(17) << (char)b++;
		for (int m = 0; m < 12; m++) {
			if (hucum_lohvesi[k][m] == '-') {
				cout << (char)248 << " ";
			}
			else if (hucum_lohvesi[k][m] == '#') {
				cout << (char)179 << " ";
			}
			else if (hucum_lohvesi[k][m] == '!') {
				cout << (char)33 << " ";
			}
			else if (hucum_lohvesi[k][m] == '$') {
				cout << (char)237 << " ";
			}
		}cout << endl;
	}a = 65;
	b = 65;
	cout << setw(32) << (char)192;
	for (int o = 0; o < 21; o++) {
		cout << (char)196;
	}cout << (char)217 << setw(19) << (char)192;
	for (int p = 0; p < 21; p++) {
		cout << (char)196;
	}cout << (char)217 << endl << endl;
}

void attack_etmek_yazi() {
	do {
		gemi_duzgun_yoxlama = true;
		if (ship_number == 0) {
			cout << setw(70) << "Enter The Coordinate For Your Patrol Boat (2 spots): ";
		}
		else if (ship_number == 1) {
			cout << setw(70) << "Enter The Coordinate For Your Submarine (3 spots): ";
		}
		else if (ship_number == 2) {
			cout << setw(70) << "Enter The Coordinate For Your Destroyer (4 spots): ";
		}
		else if (ship_number == 3) {
			cout << setw(70) << "Enter The Coordinate For Your Heli-Carrier (5 spots): ";
		}
		cin.getline(player_ship_coordinates, 11, '\n');
		cout << endl << endl;
		attackin_duzugunluyu();
		player_lohve_qurulus();
		if (gemi_duzgun_yoxlama == true) {
			ship_number++;
		}
	} while (!gemi_duzgun_yoxlama || ship_number < 4);
}

void attackin_duzugunluyu() {

	if (player_ship_coordinates[0] < 'a' || player_ship_coordinates[0] > 'j' ||
		player_ship_coordinates[1] < '0' || player_ship_coordinates[1] > '9')
	{
		gemi_duzgun_yoxlama = false;
		system("color 4");
		player_lohve_qurulus();
		cout << "\a";
		cout << setw(75) << "Sorry. It Seams Like You Have Entered Invalid Coordinates." << endl;
		cout << setw(82) << "Make Sure The Coordinate Is An Alphabet Followed By A Number. E.g = a3" << endl;
		Sleep(5000);
		system("color 2");
	}
	else {
		setir_yoxlama();
		player_ilk_qoyulus();
	}
}

void player_ilk_qoyulus() {
	if (player_lohve[sutun][setir] == '-') {
		if (ship_number == 0) {
			player_lohve[sutun][setir] = 'P';
		}
		else if (ship_number == 1) {
			player_lohve[sutun][setir] = 'S';
		}
		else if (ship_number == 2) {
			player_lohve[sutun][setir] = 'D';
		}
		else if (ship_number == 3) {
			player_lohve[sutun][setir] = 'H';
		}
		playerde_hv_qoyulmasi();
	}
	else {
		system("color 4");
		player_lohve_qurulus();
		cout << "\a\a";
		cout << setw(70) << "Sorry, It Seems Like That Spot Has Already Been Occupied." << endl << endl;
		Sleep(3000);
		gemi_duzgun_yoxlama = false;
		system("color 2");
	}
}

void playerde_hv_qoyulmasi() {

	player_lohve_qurulus();
	cout << setw(20) << player_ship_coordinates[0] << player_ship_coordinates[1] << " Press (h) To Set Your Ship Horizontally Or (v) To Set It Vertically: ";
	cin.getline(hv, 10, '\n');
	if (hv[0] == 'h') {
		if (ship_number == 0 && player_lohve[sutun][setir + 1] == '-') {
			player_lohve[sutun][setir + 1] = 'P';
		}
		else if (ship_number == 1 && player_lohve[sutun][setir + 1] == '-' && player_lohve[sutun][setir + 2] == '-') {
			player_lohve[sutun][setir + 1] = 'S';
			player_lohve[sutun][setir + 2] = 'S';
		}
		else if (ship_number == 2 && player_lohve[sutun][setir + 1] == '-' && player_lohve[sutun][setir + 2] == '-' && player_lohve[sutun][setir + 3] == '-') {
			player_lohve[sutun][setir + 1] = 'D';
			player_lohve[sutun][setir + 2] = 'D';
			player_lohve[sutun][setir + 3] = 'D';
		}
		else if (ship_number == 3 && player_lohve[sutun][setir + 1] == '-' && player_lohve[sutun][setir + 2] == '-' && player_lohve[sutun][setir + 3] == '-' && player_lohve[sutun][setir + 4] == '-') {
			player_lohve[sutun][setir + 1] = 'H';
			player_lohve[sutun][setir + 2] = 'H';
			player_lohve[sutun][setir + 3] = 'H';
			player_lohve[sutun][setir + 4] = 'H';
		}
		else {
			system("color 4");
			player_lohve_qurulus();
			cout << "\a\a";
			cout << setw(70) << "Sorry, Not Enough Space To Set It Horizontally." << endl << endl;
			Sleep(3000);
			player_lohve[sutun][setir] = '-';
			gemi_duzgun_yoxlama = false;
			system("color 2");
		}
	}
	else if (hv[0] == 'v') {
		if (ship_number == 0 && player_lohve[sutun + 1][setir] == '-') {
			player_lohve[sutun + 1][setir] = 'P';
		}
		else if (ship_number == 1 && player_lohve[sutun + 1][setir] == '-' && player_lohve[sutun + 2][setir] == '-') {
			player_lohve[sutun + 1][setir] = 'S';
			player_lohve[sutun + 2][setir] = 'S';
		}
		else if (ship_number == 2 && player_lohve[sutun + 1][setir] == '-' && player_lohve[sutun + 2][setir] == '-' && player_lohve[sutun + 3][setir] == '-') {
			player_lohve[sutun + 1][setir] = 'D';
			player_lohve[sutun + 2][setir] = 'D';
			player_lohve[sutun + 3][setir] = 'D';
		}
		else if (ship_number == 3 && player_lohve[sutun + 1][setir] == '-' && player_lohve[sutun + 2][setir] == '-' && player_lohve[sutun + 3][setir] == '-' && player_lohve[sutun + 4][setir] == '-') {
			player_lohve[sutun + 1][setir] = 'H';
			player_lohve[sutun + 2][setir] = 'H';
			player_lohve[sutun + 3][setir] = 'H';
			player_lohve[sutun + 4][setir] = 'H';
		}
		else {
			system("color 4");
			player_lohve_qurulus();
			cout << '\a\a';
			cout << setw(85) << "Sorry, Not Enough Space To Set It Vertically." << endl << endl;
			Sleep(3000);
			player_lohve[sutun][setir] = '-';
			gemi_duzgun_yoxlama = false;
			system("color 2");
		}
	}
	else {
		system("color 4");
		player_lohve_qurulus();
		cout << "\a\a";
		cout << setw(105) << "Please Enter The Letter 'h' To Set Your Boat Horizontally Or 'v' To Set It Vertically." << endl << endl;
		player_lohve[sutun][setir] = '-';
		Sleep(5000);
		gemi_duzgun_yoxlama = false;
		system("color 2");
	}
}
void komputer_gemilerin_qoyulmasi() {
	do {
		system("cls");
		printf("The computer deploys it's Ships...");
		loadingBar();
		komputer_duzgun_gemi_yoxlama = true;
		srand(time(0));
		computer_sutun = rand() % 11;
		komputer_setir = rand() % 11;
		komputerde_yoxlanis();
		if (komputer_duzgun_gemi_yoxlama == true) computer_ship++;
	} while (computer_ship < 4 || !komputer_duzgun_gemi_yoxlama);
}

void loadingBar() {
	system("color 2");
	char a = 177, b = 219;
	printf("\n\n\n\n");
	printf("\n\n\n\n\t\t\t\t\t""LOADING...\n\n");
	printf("\t\t\t\t\t");
	for (int i = 0; i < 26; i++) printf("%c", a);
	printf("\r");
	printf("\t\t\t\t\t");
	for (int i = 0; i < 26; i++) {
		printf("%c", b);
		Sleep(10);
	}
}

void komputerde_yoxlanis() {
	if (computer_lohve[computer_sutun][komputer_setir] == '-') {
		if (computer_ship == 0) {
			computer_lohve[computer_sutun][komputer_setir] = 'P';
		}
		else if (computer_ship == 1) {
			computer_lohve[computer_sutun][komputer_setir] = 'S';
		}
		else if (computer_ship == 2) {
			computer_lohve[computer_sutun][komputer_setir] = 'D';
		}
		else if (computer_ship == 3) {
			computer_lohve[computer_sutun][komputer_setir] = 'H';
		}
		komputer_hv();
	}
	else {
		komputer_duzgun_gemi_yoxlama = false;
	}
}


void komputer_hv() {
	computer_hv = 1 + rand() % 2;
	if (computer_hv == 1) {
		if (computer_ship == 0 && computer_lohve[computer_sutun][komputer_setir + 1] == '-') {
			computer_lohve[computer_sutun][komputer_setir + 1] = 'P';
		}
		else if (computer_ship == 1 && computer_lohve[computer_sutun][komputer_setir + 1] == '-' && computer_lohve[computer_sutun][komputer_setir + 2] == '-') {
			computer_lohve[computer_sutun][komputer_setir + 1] = 'S';
			computer_lohve[computer_sutun][komputer_setir + 2] = 'S';
		}
		else if (computer_ship == 2 && computer_lohve[computer_sutun][komputer_setir + 1] == '-' && computer_lohve[computer_sutun][komputer_setir + 2] == '-' && computer_lohve[computer_sutun][komputer_setir + 3] == '-') {
			computer_lohve[computer_sutun][komputer_setir + 1] = 'D';
			computer_lohve[computer_sutun][komputer_setir + 2] = 'D';
			computer_lohve[computer_sutun][komputer_setir + 3] = 'D';
		}
		else if (computer_ship == 3 && computer_lohve[computer_sutun][komputer_setir + 1] == '-' && computer_lohve[computer_sutun][komputer_setir + 2] == '-' && computer_lohve[computer_sutun][komputer_setir + 3] == '-' && computer_lohve[computer_sutun][komputer_setir + 4] == '-') {
			computer_lohve[computer_sutun][komputer_setir + 1] = 'H';
			computer_lohve[computer_sutun][komputer_setir + 2] = 'H';
			computer_lohve[computer_sutun][komputer_setir + 3] = 'H';
			computer_lohve[computer_sutun][komputer_setir + 4] = 'H';
		}
		else {
			computer_lohve[computer_sutun][komputer_setir = 0] = '-';
			komputer_duzgun_gemi_yoxlama = false;
		}
	}
	else if (computer_hv == 2) {
		if (computer_ship == 0 && computer_lohve[computer_sutun + 1][komputer_setir] == '-') {
			computer_lohve[computer_sutun + 1][komputer_setir] = 'P';
		}
		else if (computer_ship == 1 && computer_lohve[computer_sutun + 1][komputer_setir] == '-' && computer_lohve[computer_sutun + 2][komputer_setir] == '-') {
			computer_lohve[computer_sutun + 1][komputer_setir] = 'S';
			computer_lohve[computer_sutun + 2][komputer_setir] = 'S';
		}
		else if (computer_ship == 2 && computer_lohve[computer_sutun + 1][komputer_setir] == '-' && computer_lohve[computer_sutun + 2][komputer_setir] == '-' && computer_lohve[computer_sutun + 3][komputer_setir] == '-') {
			computer_lohve[computer_sutun + 1][komputer_setir] = 'D';
			computer_lohve[computer_sutun + 2][komputer_setir] = 'D';
			computer_lohve[computer_sutun + 3][komputer_setir] = 'D';
		}
		else if (computer_ship == 3 && computer_lohve[computer_sutun + 1][komputer_setir] == '-' && computer_lohve[computer_sutun + 2][komputer_setir] == '-' && computer_lohve[computer_sutun + 3][komputer_setir] == '-' && computer_lohve[computer_sutun + 4][komputer_setir] == '-') {
			computer_lohve[computer_sutun + 1][komputer_setir] = 'H';
			computer_lohve[computer_sutun + 2][komputer_setir] = 'H';
			computer_lohve[computer_sutun + 3][komputer_setir] = 'H';
			computer_lohve[computer_sutun + 4][komputer_setir] = 'H';
		}
		else {
			computer_lohve[computer_sutun][komputer_setir] = '-';
			komputer_duzgun_gemi_yoxlama = false;
		}
	}
	system("CLS");
}

void gamerWin() {
	system("CLS");
	system("color 6");
	const char* T = "Congratulaaaaaationssss";
	const char* T1 = "\n\n\n\n\n\n\t\t\tCongratulaaaaaationssss";
	const char* T2 = "\n\n\n\n\n\n\t\t\t\t\t\tCongratulaaaaaationssss";
	for (int i = 0; T[i] != '\0'; i++) {
		cout << T[i];
		Sleep(100);
	}
	system("color 4");
	for (int i = 0; T1[i] != '\0'; i++) {
		cout << T1[i];
		Sleep(100);
	}
	system("color 2");
	for (int i = 0; T2[i] != '\0'; i++) {
		cout << T2[i];
		Sleep(100);
	}
	system("cls");
	system("color 4");
	double x, y,
		size = 10;
	char ch = 3;
	string message(" You , Win ");
	int print_line = 4;
	if (message.length() % 2 != 0)
		message += " ";
	for (x = 0; x < size; x++)
	{
		for (y = 0; y <= 4 * size; y++)
		{
			double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
			double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));
			if (dist1 < size + 0.5 || dist2 < size + 0.5) cout << ch;
			else cout << " ";
		}
		cout << "\n";
	}
	for (x = 1; x < 2 * size; x++)

	{
		for (y = 0; y < x; y++) cout << " ";
		for (y = 0; y < 4 * size + 1 - 2 * x; y++)
		{
			if (x >= print_line - 1 && x <= print_line + 1) {
				int idx = y - (4 * size - 2 * x - message.length()) / 2;
				if (idx < message.length() && idx >= 0) {
					if (x == print_line) cout << message[idx];
					else cout << " ";
				}
				else cout << ch;
			}
			else cout << ch;
		}
		cout << endl;
	}
}
void compter_attak() {
	do {
		attack_duzgun_yoxlama = true;
		player_comp_lohve_qurulus();
		cout << setw(76) << "Enter Attack Coordinates: ";
		cin.getline(hucumcu_kordinat, 10, '\n');

		komputer_atack_yoxlama();
		if (computer_gemilerin_sayi == 0) {
			gamerWin();
			exit(0);
		}
		else if (attack_duzgun_yoxlama == true) {
			Sleep(3000);
			player_comp_lohve_qurulus();
			komputer_gemi_yoxlama();
		}
	} while (!attack_duzgun_yoxlama || computer_gemilerin_sayi > 0);
}

void komputer_atack_yoxlama() {
	if (hucumcu_kordinat[0] < 'a' || hucumcu_kordinat[0] > 'j' ||
		hucumcu_kordinat[1] < '0' || hucumcu_kordinat[1] > '9') {
		attack_duzgun_yoxlama = false;
		system("CLS");
		system("color 4");
		player_comp_lohve_qurulus();
		cout << "\a\a";
		cout << setw(91) << "Sorry. It Seams Like You Have Entered Invalid Coordinates." << endl;
		cout << setw(98) << "Make Sure The Coordinate Is An Alphabet Followed By A Number. E.g = a3" << endl;
		Sleep(3000);
		system("color 2");
	}
	else {
		sutun_yoxlama();
		komputer_attak_vurus();
	}
}

void setir_yoxlama() {

	if (player_ship_coordinates[0] == 'a') {
		sutun = 0;
	}
	else if (player_ship_coordinates[0] == 'b') {
		sutun = 1;
	}
	else if (player_ship_coordinates[0] == 'c') {
		sutun = 2;
	}
	else if (player_ship_coordinates[0] == 'd') {
		sutun = 3;
	}
	else if (player_ship_coordinates[0] == 'e') {
		sutun = 4;
	}
	else if (player_ship_coordinates[0] == 'f') {
		sutun = 5;
	}
	else if (player_ship_coordinates[0] == 'g') {
		sutun = 6;
	}
	else if (player_ship_coordinates[0] == 'h') {
		sutun = 7;
	}
	else if (player_ship_coordinates[0] == 'i') {
		sutun = 8;
	}
	else if (player_ship_coordinates[0] == 'j') {
		sutun = 9;
	}

	if (player_ship_coordinates[1] == '0') {
		setir = 1;
	}
	else if (player_ship_coordinates[1] == '1') {
		setir = 2;
	}
	else if (player_ship_coordinates[1] == '2') {
		setir = 3;
	}
	else if (player_ship_coordinates[1] == '3') {
		setir = 4;
	}
	else if (player_ship_coordinates[1] == '4') {
		setir = 5;
	}
	else if (player_ship_coordinates[1] == '5') {
		setir = 6;
	}
	else if (player_ship_coordinates[1] == '6') {
		setir = 7;
	}
	else if (player_ship_coordinates[1] == '7') {
		setir = 8;
	}
	else if (player_ship_coordinates[1] == '8') {
		setir = 9;
	}
	else if (player_ship_coordinates[1] == '9') {
		setir = 10;
	}
}

void sutun_yoxlama() {

	if (hucumcu_kordinat[0] == 'a') {
		attack_sutun = 0;
	}
	else if (hucumcu_kordinat[0] == 'b') {
		attack_sutun = 1;
	}
	else if (hucumcu_kordinat[0] == 'c') {
		attack_sutun = 2;
	}
	else if (hucumcu_kordinat[0] == 'd') {
		attack_sutun = 3;
	}
	else if (hucumcu_kordinat[0] == 'e') {
		attack_sutun = 4;
	}
	else if (hucumcu_kordinat[0] == 'f') {
		attack_sutun = 5;
	}
	else if (hucumcu_kordinat[0] == 'g') {
		attack_sutun = 6;
	}
	else if (hucumcu_kordinat[0] == 'h') {
		attack_sutun = 7;
	}
	else if (hucumcu_kordinat[0] == 'i') {
		attack_sutun = 8;
	}
	else if (hucumcu_kordinat[0] == 'j') {
		attack_sutun = 9;
	}

	if (hucumcu_kordinat[1] == '0') {
		attack_setir = 1;
	}
	else if (hucumcu_kordinat[1] == '1') {
		attack_setir = 2;
	}
	else if (hucumcu_kordinat[1] == '2') {
		attack_setir = 3;
	}
	else if (hucumcu_kordinat[1] == '3') {
		attack_setir = 4;
	}
	else if (hucumcu_kordinat[1] == '4') {
		attack_setir = 5;
	}
	else if (hucumcu_kordinat[1] == '5') {
		attack_setir = 6;
	}
	else if (hucumcu_kordinat[1] == '6') {
		attack_setir = 7;
	}
	else if (hucumcu_kordinat[1] == '7') {
		attack_setir = 8;
	}
	else if (hucumcu_kordinat[1] == '8') {
		attack_setir = 9;
	}
	else if (hucumcu_kordinat[1] == '9') {
		attack_setir = 10;
	}
}

void herf_yoxlama() {
	if (komputer_attack_sutun == 0) {
		komputer_attack_herf = 'a';
	}
	else if (komputer_attack_sutun == 1) {
		komputer_attack_herf = 'b';
	}
	else if (komputer_attack_sutun == 2) {
		komputer_attack_herf = 'c';
	}
	else if (komputer_attack_sutun == 3) {
		komputer_attack_herf = 'd';
	}
	else if (komputer_attack_sutun == 4) {
		komputer_attack_herf = 'e';
	}
	else if (komputer_attack_sutun == 5) {
		komputer_attack_herf = 'f';
	}
	else if (komputer_attack_sutun == 6) {
		komputer_attack_herf = 'g';
	}
	else if (komputer_attack_sutun == 7) {
		komputer_attack_herf = 'h';
	}
	else if (komputer_attack_sutun == 8) {
		komputer_attack_herf = 'i';
	}
	else if (komputer_attack_sutun == 9) {
		komputer_attack_herf = 'j';
	}
}



void komputer_attak_vurus() {
	if (hucum_lohvesi[attack_sutun][attack_setir] == '!' || hucum_lohvesi[attack_sutun][attack_setir] == '$') {
		system("color 4");
		player_comp_lohve_qurulus();
		cout << "\a\a";
		cout << setw(82) << "You Have Already Attacked That Position.";
		Sleep(3000);
		attack_duzgun_yoxlama = false;
		system("color 2");
	}
	else if (computer_lohve[attack_sutun][attack_setir] == 'P') {
		player_comp_lohve_qurulus();
		cout << setw(84) << "You Have Hit The Patrol Boat Of The Computer.";
		hucum_lohvesi[attack_sutun][attack_setir] = '!';
		patrol_boat_size--;
		computer_gemilerin_sayi--;
	}
	else if (computer_lohve[attack_sutun][attack_setir] == 'S') {
		player_comp_lohve_qurulus();
		cout << setw(84) << "You Have Hit The Submarine Of The Computer.";
		hucum_lohvesi[attack_sutun][attack_setir] = '!';
		submarine_size--;
		computer_gemilerin_sayi--;
	}
	else if (computer_lohve[attack_sutun][attack_setir] == 'D') {
		player_comp_lohve_qurulus();
		cout << setw(84) << "You Have Hit The Destroyer Of The Computer.";
		hucum_lohvesi[attack_sutun][attack_setir] = '!';
		destroyer_size--;
		computer_gemilerin_sayi--;
	}
	else if (computer_lohve[attack_sutun][attack_setir] == 'H') {
		player_comp_lohve_qurulus();
		cout << setw(84) << "You Have Hit The Heli-Carrier Of The Computer.";
		hucum_lohvesi[attack_sutun][attack_setir] = '!';
		helicarrier_size--;
		computer_gemilerin_sayi--;
	}
	else {
		player_comp_lohve_qurulus();
		cout << setw(71) << "Nope. You Missed." << endl << endl;
		hucum_lohvesi[attack_sutun][attack_setir] = '$';
	}

}

void komputer_gemi_yoxlama() {
	do {
		komputer_attack_yoxlama = true;
		komputer_attack_sutun = rand() % 11;
		komputer_attack_setir = rand() % 11;

		if (patrol_boat_hit == true) {
			if (player_lohve[komputer_attack_sutun][komputer_attack_setir] == 'P') {
				komputer_vurma_herf();
			}
			else {
				komputer_attack_yoxlama = false;
			}
		}
		else if (submarine_hit == true) {
			if (player_lohve[komputer_attack_sutun][komputer_attack_setir] == 'S') {
				komputer_vurma_herf();
			}
			else {
				komputer_attack_yoxlama = false;
			}
		}
		else if (destroyer_hit == true) {
			if (player_lohve[komputer_attack_sutun][komputer_attack_setir] == 'D') {
				komputer_vurma_herf();
			}
			else {
				komputer_attack_yoxlama = false;
			}
		}
		else if (helicarrier_hit == true) {
			if (player_lohve[komputer_attack_sutun][komputer_attack_setir] == 'H') {
				komputer_vurma_herf();
			}
			else {
				komputer_attack_yoxlama = false;
			}
		}
		if (patrol_boat_hit == false && submarine_hit == false
			&& destroyer_hit == false && helicarrier_hit == false) {
			komputer_vurma_herf();
		}

	} while (!komputer_attack_yoxlama || player_gemilerin_sayi > 0);
}

void komputer_vurma_herf() {
	herf_yoxlama();
	if (player_lohve[komputer_attack_sutun][komputer_attack_setir] == 'P') {
		cout << setw(82) << "The Computer Has Hit Your Patrol Boat: " << komputer_attack_herf << komputer_attack_setir - 1 << endl << endl;
		patrol_boat_hit = true;
		player_lohve[komputer_attack_sutun][komputer_attack_setir] = '!';
		player_gemilerin_sayi--;
		player_patrol_boat_size--;
	}
	else if (player_lohve[komputer_attack_sutun][komputer_attack_setir] == 'S') {
		cout << setw(81) << "The Computer Has Hit Your Submarine: " << komputer_attack_herf << komputer_attack_setir - 1 << endl << endl;
		submarine_hit = true;
		player_lohve[komputer_attack_sutun][komputer_attack_setir] = '!';
		player_gemilerin_sayi--;
		player_submarine_size--;
	}
	else if (player_lohve[komputer_attack_sutun][komputer_attack_setir] == 'D') {
		cout << setw(81) << "The Computer Has Hit Your Destroyer: " << komputer_attack_herf << komputer_attack_setir - 1 << endl << endl;
		destroyer_hit = true;
		player_lohve[komputer_attack_sutun][komputer_attack_setir] = '!';
		player_gemilerin_sayi--;
		player_destroyer_size--;
	}
	else if (player_lohve[komputer_attack_sutun][komputer_attack_setir] == 'H') {
		cout << setw(81) << "The Computer Has Hit Your Heli-Carrier: " << komputer_attack_herf << komputer_attack_setir - 1 << endl << endl;
		helicarrier_hit = true;
		player_lohve[komputer_attack_sutun][komputer_attack_setir] = '!';
		player_gemilerin_sayi--;
		player_helicarrier_size--;
	}
	else if (player_lohve[komputer_attack_sutun][komputer_attack_setir] == '-') {
		cout << setw(73) << "The Computer Missed: " << komputer_attack_herf << komputer_attack_setir - 1 << endl << endl;
		player_lohve[komputer_attack_sutun][komputer_attack_setir] = '$';
	}
	else {
		komputer_attack_yoxlama = false;
	}
	clear_hit();
	if (player_gemilerin_sayi == 0) {
		system("CLS");
		system("color 4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t";
		const char* S = "Unfortunately, the computer won";
		for (int i = 0; S[i] != '\0'; i++) {
			cout << S[i];
			Sleep(100);
		}
		cout << "\n\n\n\n\n\n\n";
		exit(0);
	}
	else if (komputer_attack_yoxlama == true) {
		Sleep(3000);
		compter_attak();
	}
}

void how_to_play() {
	system("CLS");
	const char* a1 = "Hello ! Thank you for playing Battleship.";
	for (int i = 0; a1[i] != '\0'; i++) {
		printf("\033[0;33m");
		cout << a1[i];
		Sleep(100);
	}
	cout << endl << endl;
	printf("\033[0;32m");
	cout << "CLASSIC BATTLESHIP GAME: Kids ages 7 and up can enjoy playing this classic game of naval combat" << endl;
	cout << "This Battleship board game is easy to store and take on the go" << endl;
	cout << "In this classic Battleship game for 2 players, sink an opponent's ships for the win" << endl;
	cout << "The Battleship board game comes with a Salvo feature that lets advanced players launch multiple attacks" << endl;
	cout << "PACKAGING MAY VARY.SUBJECT TO AVAILABILITY.\n" << endl;
	const char* a2 = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	const char* a3 = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	for (int i = 0; a2[i] != '\0'; i++) {
		printf(" \033[0;31m");
		cout << a2[i];
		Sleep(100);
	}
	cout << "\n\t\t\t\t\tBATTLESHIP GAME ;)\n";
	for (int i = 0; a3[i] != '\0'; i++) {
		printf(" \033[0;31m");
		cout << a3[i];
		Sleep(100);
	}
	cout << endl << endl;
	printf("\033[0;32m");
	cout << "You need to enter the coordinates to set and attack ships. E.g :- a3, j9, b1, c5 etc. Make sure that while entering" << endl;
	cout << "coordinates, any alphabet from a-j, followed by a number from 0-9 is entered." << endl << endl;
	Sleep(1000);
	printf("\033[0;33m");
	cout << "A Patrol Boat, represented by the letter 'P', a Submarine 'S', a Destroyer 'D', and of course, " << endl;
	cout << "a Heli-Carrier which is represented by the letter 'H'." << endl << endl;
	Sleep(1000);
	printf("\033[0;34m");
	cout << "The symbol (" << (char)237 << ") represents the fact that you attacked a particular position but missed" << endl;
	cout << "thus, disabling you to attack the same position." << endl << endl;
	cout << "On the other hand (" << (char)33 << ") represents the fact that you/computer have hit one of the opponent's ships." << endl;
	cout << "Thats all you need to know. So, press the 'esc' button to return to the main menu and start a new game." << endl << endl;
	const char* a4 = "Press any key to exit...";
	printf("\033[0;37m");
	for (int i = 0; a4[i] != '\0'; i++) {
		cout << a4[i];
		Sleep(100);
	}
	_getch();
	system("CLS");
	main();
}

void clear_hit() {
	if (player_helicarrier_size == 0) {
		helicarrier_hit = false;
	}if (player_submarine_size == 0) {
		submarine_hit = false;
	}if (player_patrol_boat_size == 0) {
		patrol_boat_hit = false;
	}if (player_destroyer_size == 0) {
		destroyer_hit = false;
	}
}

void exit1() {
	int secim = 0;
	const char* a1 = "Do You Really want to EXIT ???";
	const char* a2 = "Confirm Your Selection -> ";
	const char* a3 = "Bye :(";
	const char* a4 = "Thank you for choosing us";
	system("CLS");
	for (int i = 0; a1[i] != '\0'; i++) {
		printf("\033[0;31m");
		cout << a1[i];
		Sleep(100);
	}
	cout << "\n\nE X I T ~ 1" << endl;
	printf("\033[0;32m");
	cout << "C A N E L ~ 2\n\n";


	while (true)
	{
		for (int i = 0; a2[i] != '\0'; i++) {
			printf("\033[0;33m");
			cout << a2[i];
			Sleep(100);
		}
		cin >> secim;

		if (secim == 1) {
			system("CLS");
			for (int i = 0; a3[i] != '\0'; i++) {
				printf("\033[0;32m");
				cout << a3[i];
				Sleep(100);
			}
			cout << "   ";
			for (int i = 0; a4[i] != '\0'; i++) {
				printf("\033[0;32m");
				cout << a4[i];
				Sleep(100);
			}
			exit(0);
		}
		else if (secim == 2) {
			system("CLS");
			main();
		}
		else
		{
			cout << endl;
			printf("\033[0;31m");
			cout << "\a\aChoice Wrong !!! Please Enter Correct Choice" << endl;
		}
	}
}

void main() {
	game_title();
	consele_print();
	console_secmek();
}






