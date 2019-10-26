/*
** EPITECH PROJECT, 2019
** my_osu
** File description:
** object
*/

#ifndef OBJECT_H_
#define OBJECT_H_

#include <string>

typedef class osu_objet_point {
    int time;
    int x;
    int y;
} ptn_t;

typedef class osu_info_header_map{
    
    public:
    std::string Get_audio_filename();
    void Set_audio_filename(std::string);
    //void Set_point(int, int, int);

    private:
    std::string audio_filename = "";
    ptn_t *list_points;

} map_t;

std::string osu_info_header_map::Get_audio_filename() {
    return (audio_filename);
}
void osu_info_header_map::Set_audio_filename(std::string audio) {
    audio_filename = audio;
}
#endif /* !OBJECT_H_ */