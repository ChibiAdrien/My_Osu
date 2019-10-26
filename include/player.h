/*
** EPITECH PROJECT, 2019
** my_osu
** File description:
** player
*/

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

typedef class osu_object_player {

    public:
    osu_object_player(std::string, unsigned int );
    std::string get_name(void);
    unsigned int get_pp(void);

    private: 
    std::string name;
    unsigned int pp;
} player_t;

std::string osu_object_player::get_name (void) {
    return (name); 
};

unsigned int osu_object_player::get_pp (void) {
    return (pp);
}

osu_object_player::osu_object_player(std::string user_name, unsigned int user_pp) {
    name = user_name;
    pp = user_pp;
}
 
player_t player;

#endif /* !PLAYER_H_ */
