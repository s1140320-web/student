#include <iostream>

int main()
{
    int score[3] = {95, 68, 42};
    int temp;
    
    temp = score[2];
    score[2] = score[0];// {95, 68, 95}
    score[0] = temp;
    for (int i=0;i<3;i++) {
        std::cout << score[i] << " ";
    }
    //score[0]
    //score[1]
     //score[2]
    return 0;