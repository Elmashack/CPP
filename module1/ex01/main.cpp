//
// Created by Nakloz Luya on 2/23/22.
//

#include "Zombie.h"

int main()
{
    std::string	name[5];

	name[0] = "Bobo";
	name[1] = "Daisy";
	name[2] = "Vince";
	name[3] = "Paul";
	name[4] = "Drill";

	for (int i = 0; i < 3; ++i) {
		int N = rand() % 4;
		int	index = rand() % 5;
		Zombie	*arr_zomb = zombieHorde(N, name[index]);
		for (int j = 0; j < N; ++j)
			arr_zomb[j].announce();
		delete [] arr_zomb;
	}
    return 0;
}
