#ifndef DIALOGUE_MANAGER_HPP
#define DIALOGUE_MANAGER_HPP

#include <string>
#include <cstdlib>
#include "Defensive.hpp"
#include "Extrovert.hpp"
#include "Stoic.hpp"
#include "Temperamental.hpp"
#include "Obsessive.hpp"

int get_tier(int nilai){
    if(nilai<=3) return 0;
    if(nilai<=7) return 1;
    return 2;
}
std::string ambil_respon(int trait_id, int menu_id, int affinity, int mood){
    int aff_idx=get_tier(affinity);
    int mood_idx=get_tier(mood);
    int var_idx=std::rand() % 3;

    switch(trait_id){
        case 0: return janeDoeDefensive[menu_id][aff_idx][mood_idx][var_idx];
        case 1: return janeDoeExtrovert[menu_id][aff_idx][mood_idx][var_idx];
        case 2: return janeDoeStoic[menu_id][aff_idx][mood_idx][var_idx];
        case 3: return janeDoeTemperamental[menu_id][aff_idx][mood_idx][var_idx];
        case 4: return janeDoeObsessive[menu_id][aff_idx][mood_idx][var_idx];
        default: return "Jane Doe: ...";
    }
}
#endif