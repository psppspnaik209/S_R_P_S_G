#include <iostream>
#include <ctime>

char getuserchoice();
char getcompchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main(){
      char player;
      char computer;

      player = getuserchoice();
      std::cout << "Your choice: ";
      showchoice(player);

      computer = getcompchoice();
      std::cout << "Computer's choice: ";
      showchoice(computer);

      choosewinner(player, computer);


  return 0;
}

char getuserchoice(){
    char player;
    std::cout << "******ROCK_PAPER_SCISSORS GAME!******\n";
    do{
        std::cout << "**************************\n";
        std::cout << "Choose one of the options\n";
        std::cout << "**************************\n";
        std::cout << "'r': Rock\n'p': Paper\n's': Scissor\n";
        std::cin >> player;

    }while(player != 'r' && player != 'R' && player != 'p' && player != 'P' && player != 's' && player != 'S');


    return player;

}
char getcompchoice(){
      srand(time(0));
      int num = rand() % 3 + 1;

      switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
      }


      return 0;
}
void showchoice(char choice){
      switch(choice){
        case 'r': std::cout << "Rock\n";
        break;
        case 'R': std::cout << "Rock\n";
        break;
        case 'p': std::cout << "Paper\n";
        break;
        case 'P': std::cout << "Paper\n";
        break;
        case 's': std::cout << "Scissor\n";
        break;
        case 'S': std::cout << "Scissor\n";
        break;
      }

}
void choosewinner(char player, char computer){
    
    switch(player){
     case 'r': if(computer == 'r'){
                    std::cout << "**************************\nIt's a tie\n**************************\n";
                }
                else if(computer == 'p'){
                  std::cout << "**************************\nComputer has won!\n**************************\n";
                }
                else{
                  std::cout << "**************************\nYou have won!\n**************************\n";
                }
                break;
      case 'p': if(computer == 'p'){
                    std::cout << "**************************\nIt's a tie\n**************************\n";
                }
                else if(computer == 's'){
                  std::cout << "**************************\nComputer has won!\n**************************\n";
                }
                else{
                  std::cout << "**************************\nYou have won!\n**************************\n";
                }
                break;
      case 's': if(computer == 's'){
                    std::cout << "**************************\nIt's a tie\n**************************\n";
                }
                else if(computer == 'r'){
                  std::cout << "**************************\nComputer has won!\n**************************\n";
                }
                else{
                  std::cout << "**************************\nYou have won!\n**************************\n";
                }
                break;
    }
    


}