#include<iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
#include<time.h>

#define TAM 6

using namespace std;

void drawTitle();
void draw(int, string vetor[]); 

int main() {

    srand(time(NULL));
    char key = 0;
    int n = 0;
    int total = 0;
    string vetor[TAM];

    while (key != 27) {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
        drawTitle();
        total = 0;
        for (int i = 0; i < TAM; i++) {
            vetor[i] = "               ";
        }
        for (int i = 0; i < 3; i++) {
            n = rand() % 6 + 1;
            draw(n, vetor);
            total += n;
        }
        for (int i = 0; i < TAM; i++) {
            cout << vetor[i] << "\n";
        }
        cout << "\n\nTotal = " << total << "\n\n";
        cout << "Pressione ENTER ou CTRL+C para sair";
        key = (char)getchar();
    }
    return 0;
}

void draw(int v, string vetor[]) {
    switch (v) {
    case 1:
        vetor[0].append(" -----  ");
        vetor[1].append("|     | ");
        vetor[2].append("|  o  | ");
        vetor[3].append("|     | ");
        vetor[4].append(" -----  ");
        vetor[5].append("   1    ");
        break;
    case 2:
        vetor[0].append(" -----  ");
        vetor[1].append("| o   | ");
        vetor[2].append("|     | ");
        vetor[3].append("|   o | ");
        vetor[4].append(" -----  ");
        vetor[5].append("   2    ");
        break;
    case 3:
        vetor[0].append(" -----  ");
        vetor[1].append("|  o  | ");
        vetor[2].append("|  o  | ");
        vetor[3].append("|  o  | ");
        vetor[4].append(" -----  ");
        vetor[5].append("   3    ");
        break;
    case 4:
        vetor[0].append(" -----  ");
        vetor[1].append("| o o | ");
        vetor[2].append("|     | ");
        vetor[3].append("| o o | ");
        vetor[4].append(" -----  ");
        vetor[5].append("   4    ");
        break;
    case 5:
        vetor[0].append(" -----  ");
        vetor[1].append("| o o | ");
        vetor[2].append("|  o  | ");
        vetor[3].append("| o o | ");
        vetor[4].append(" -----  ");
        vetor[5].append("   5    ");
        break;
    case 6:
        vetor[0].append(" -----  ");
        vetor[1].append("| o o | ");
        vetor[2].append("| o o | ");
        vetor[3].append("| o o | ");
        vetor[4].append(" -----  ");
        vetor[5].append("   6    ");
        break;
    }
}
void drawTitle() {
    string arr[6];

    arr[0] = R"( _____    _                      )";
    arr[1] = R"((____ \  (_)                     )";
    arr[2] = R"( _   \ \  _   ____  ____   ___   )";
    arr[3] = R"(| |   | || | / ___)/ _  ) /___)  )";
    arr[4] = R"(| |__/ / | |( (___( (/ / |___ |  )";
    arr[5] = R"(|_____/  |_| \____)\____)(___/        By @viniciuscgp)";

    for (int i = 0; i < 6; i++) {
        printf("%s\n", arr[i].c_str());
    }
    printf("\n\n");
}
