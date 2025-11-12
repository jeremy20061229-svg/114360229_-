#include <iostream>

using namespace std;

void towersOfHanoi(int disks, char source, char destination, char auxiliary) {
   
    if (disks == 1) {
     
        cout << "Move disk 1 from peg " << source << " to peg " << destination << endl;
        return;
    }
    towersOfHanoi(disks - 1, source, auxiliary, destination);
    cout << "Move disk " << disks << " from peg " << source << " to peg " << destination << endl;
    towersOfHanoi(disks - 1, auxiliary, destination, source);
}
int main() {
    int num_disks = 3; 
    char peg_A = 'A';  
    char peg_B = 'B';  
    char peg_C = 'C';  
    towersOfHanoi(num_disks, peg_A, peg_C, peg_B);

    return 0;
}
//其實這題太懂在做甚麼