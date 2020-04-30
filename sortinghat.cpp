#include <iostream>

using namespace std;

int main() {

  // The magic starts here
 
 int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;

//To store answers
 int answer1, answer2, answer3, answer4;

 std::cout << "=====================" << endl;
 std::cout << "The Sorting Hat Quiz!" << endl;
 std::cout << "=====================" << endl;

std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

std::cout << "  1) The Good" << endl;
std::cout << "  2) The Great" << endl;
std::cout << "  3) The Wise" << endl;
std::cout << "  4) The Bold" << endl;

std::cin >> answer1;

std::cout << "=====================" << endl;

if (answer1 == 1) {

  hufflepuff++;

}
else if (answer1 == 2) {

 slytherin++;

}
else if (answer1 == 3) {

  ravenclaw++;

}
else if (answer1 == 4) {

  gryffindor++;

}
else {

  std::cout << "Invalid input" << endl;

}

std::cout << "Q2) Dawn or Dusk\n\n";

std::cout << "  1) Dawn" << endl;
std::cout << "  2) Dusk" << endl;

std::cin >> answer2;


//co
if (answer2 == 1) {

  gryffindor++;
  ravenclaw++;

}
else if (answer2 == 2) {

  // one point to hufflepuff
  hufflepuff++;
  // one point to slytherin
  slytherin++;

}
else {

// output "Invalid input"
std::cout << "Invalid input" << endl;

}

std::cout << "=====================" << endl;

std::cout << "Q3)  Which kind of instrument most pleases your ear?:\n\n";

std::cout << "  1) The violin" << endl;
std::cout << "  2) The trumpet" << endl;
std::cout << "  3) The piano" << endl;
std::cout << "  4) The drum"<< endl;

std::cin >> answer3;


if (answer3 == 1) {

  slytherin++;

}
else if (answer3 == 2) {

  hufflepuff++;

}
else if (answer3 == 3) {

  ravenclaw++;

}
else if (answer3 == 4) {

  gryffindor++;

}
else {

  std::cout << "Invalid input" << endl;

}

std::cout << "=====================" << endl;
std::cout << "Q4)Which road tempts you most?\n\n";

std::cout << "  1) The wide, sunny grassy lane" << endl;
std::cout << "  2) The narrow, dark, lantern-lit all" << endl;
std::cout << "  3) The twisting, leaf-strewn path through woods" << endl;
std::cout << "  4) The cobbled street lined (ancient buildings)"<< endl;

std::cin >> answer4;

if (answer4 == 1) {

  hufflepuff++;

}
else if (answer4 == 2) {

  slytherin++;

}
else if (answer4 == 3) {

  gryffindor++;

}
else if (answer4 == 4) {

  ravenclaw++;

}
else {

  std::cout << "Invalid input" << endl;

}

int max = 0;

std::string house;

// ========== Sorting ==========

if (gryffindor > max) {

  max = gryffindor;
  house = "Gryffindor";

}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";

}

if (ravenclaw > max) {

  max = ravenclaw;
  house = "Ravenclaw";

}

if (slytherin > max) {

  max = slytherin;
  house = "Slytherin";

}

std::cout << "=====================" << endl;
std::cout << house << "!\n";


 return 0;
 
}