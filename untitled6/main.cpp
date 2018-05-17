#include <iostream>
#include <cstdlib>
#include <ctime>
int t1[3][3];
int t2[3][3];
int t3[3][3];
int t4[3][3];
int t5[3][3];
int t6[3][3];

int affiche(){
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            std::cout << t1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Face droite" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            std::cout << t2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Face arriere" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            std::cout << t3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Face gauche" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            std::cout << t4[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Face dessus" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            std::cout << t5[i][j] <<" " ;
        }
        std::cout << std::endl;
    }

    std::cout << "Face dessous" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            std::cout << t6[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){


    //int t1[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            t1[i][j] = rand();

    //int t2[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            t2[i][j] = i + j;

    //int t3[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            t3[i][j] = i + j;

    //int t4[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            t4[i][j] = i + j;

    //int t5[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            t5[i][j] = i + j;

    //int t6[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            t6[i][j] = i + j;

    int choix;
    int colonne;
    int ligne;

    //Menu de selection
    std::cout << "Liste des choix :" << std::endl;
    std::cout << "Choix 1 : Afficher les faces" << std::endl;
    std::cout << "Choix 2 : Rotation horizontale" << std::endl;
    std::cout << "Choix 3 : Rotation Verticale" << std::endl;

    std::cin >> choix ;

    if (choix==1)
    {
        std::cout << "Affichage des faces" << std::endl;
        std::cout << "Face Avant" << std::endl;
        affiche();
    }
    else if (choix==2)
    {
        std::cout << "Sur quelle ligne effectuer la rotation" << std::endl;
        std::cout << "1" << std::endl;
        std::cout << "2" << std::endl;
        std::cout << "3" << std::endl;
        std::cin >> ligne ;

    }
    else if (choix==3)
    {
        std::cout << "Sur quelle colonne effectuer la rotation" << std::endl;
        std::cout << "1" << std::endl;
        std::cout << "2" << std::endl;
        std::cout << "3" << std::endl;
        std::cin >> colonne ;
    }

    else
    {
        std::cout << "Vous avez essayé de planter le prog" << std::endl;
    }


}




