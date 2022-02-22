#include <iostream>
#include <string>
#include <random>

std::string com()
{
    std::string comChoice;
    std::string validChoices[3] = { "rock", "paper", "scissors" };

    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(0,2);

    auto r = uni(rng);

    comChoice = validChoices[r];

    return comChoice;
}

std::string rps(std::string user, std::string com)
{
    std::string result;

    if (user == "rock")
    {
        if (com == "rock") 
        {
            result = "rock vs. rock: a draw!";
        }
        else if (com == "paper")
        {
            result = "rock vs. paper: com wins!";
        }
        else 
        {
            result = "rock vs. scissors: user wins!";
        }
    }
    else if (user == "paper")
    {
        if (com == "rock") 
        {
            result = "paper vs. rock: user wins!";
        }
        else if (com == "paper")
        {
            result = "paper vs. paper: a draw!";
        }
        else 
        {
            result = "paper vs. scissors: com wins!";
        }
    }
    else if (user == "scissors")
    {
        if (com == "rock") 
        {
            result = "scissors vs. rock: com wins!";
        }
        else if (com == "paper")
        {
            result = "scissors vs. paper: user wins!";
        }
        else 
        {
            result = "scissors vs. scissors: a draw!";
        }
    }
    else
    {
        result = user + " is not a valid option!";
    }
    
    return result;
}

int main()
{
    std::string user;

    std::cout << "rock, paper, or scissors?" << std::endl;

    std::cin >> user;

    std::string comCh = com();

    std::cout << rps(user, comCh);

    return 0;
}
