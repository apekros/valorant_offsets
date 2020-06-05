#pragma once
#include <cstddef>

/*
Valorant Offsets Repository @apekros
Timestamp: Sat June  4 13:34:20 2020
Version: 1.0
*/

/*
Globals
*/
std::ptrdiff_t world_xor_1 = read(0x5d07df8);
std::ptrdiff_t world_xor_2 = read(0x5d07dd8);
std::ptrdiff_t world_ptr = read(world_xor_1^world_xor_2);
std::ptrdiff_t g_objects = 0x631BBF0; //deref twice
std::ptrdiff_t g_names = 0x62E2B40;


/*
Classes
*/
std::ptrdiff_t root_component = 0x238;
std::ptrdiff_t persistent_level = 0x38;
std::ptrdiff_t owning_game_instance = 0x190;
std::ptrdiff_t player_state = 0x3c8;
std::ptrdiff_t team_component = 0x5b0;
std::ptrdiff_t team = 0x118;
std::ptrdiff_t damage_handler = 0xa38;
std::ptrdiff_t cached_life = 0x190;
std::ptrdiff_t relative_location = 0x184;
std::ptrdiff_t relative_rotation = 0x190;
std::ptrdiff_t mesh_component = 0x408;

std::ptrdiff_t static_mesh = 0x548; 
/*
Other
*/
std::ptrdiff_t actor_count = 0xA8;
std::ptrdiff_t actor_data = 0xA0;


