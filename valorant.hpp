#pragma once
#include <cstddef>

/*
Valorant Offsets Repository @apekros
Timestamp: Sat Jan 15 19:38:41 2022
Version: 4.25.4.0
*/

std::ptrdiff_t uworld_state = 0x8e7d100;
std::ptrdiff_t uworld_key = 0x8e7d138;
/*
Classes
*/
std::ptrdiff_t bone_component = 0x548;
std::ptrdiff_t mesh_component = 0x410;
std::ptrdiff_t root_component = 0x210;
std::ptrdiff_t persistent_level = 0x38;
std::ptrdiff_t owning_game_instance = 0x1a8;
std::ptrdiff_t player_state = 0x3d0;
std::ptrdiff_t team_component = 0x580;
std::ptrdiff_t team = 0xf8;
std::ptrdiff_t damage_handler = 0x978;
std::ptrdiff_t cached_life = 0x1b0;
std::ptrdiff_t relative_location = 0x164;
std::ptrdiff_t relative_rotation = 0x170;
std::ptrdiff_t player_controller = 0x38;
std::ptrdiff_t acknowledged_pawn = 0x440;
std::ptrdiff_t player_camera_manager = 0x458;
std::ptrdiff_t camera_cache_private = 0x1f80;
std::ptrdiff_t control_rotation = 0x420;
std::ptrdiff_t uworld_key = 0x874FF38;
std::ptrdiff_t uworld_state = 0x874FF00;
std::ptrdiff_t game_instance = 0x1A8;
std::ptrdiff_t local_player_array = 0x40;
std::ptrdiff_t local_player_controller = 0x38;
std::ptrdiff_t local_player_pawn = 0x440;
std::ptrdiff_t camera_manager = 0x458;
std::ptrdiff_t camera_position = 0x1220;
std::ptrdiff_t camera_rotation = 0x122C;
std::ptrdiff_t camera_fov = 0x1238;
std::ptrdiff_t actor_array = 0xA0;
std::ptrdiff_t actor_count = 0xB8;
std::ptrdiff_t unique_id = 0x38;
std::ptrdiff_t last_render_time = 0x350;
std::ptrdiff_t last_submit_time = 0x358;
std::ptrdiff_t bone_array = 0x558;
std::ptrdiff_t bone_count = 0x560;
std::ptrdiff_t component_to_world = 0x250;
std::ptrdiff_t root_position = 0x164;
std::ptrdiff_t health = 0x1B0;
std::ptrdiff_t dormant = 0x100;
std::ptrdiff_t team_id = 0xF8;
std::ptrdiff_t FresnelIntensity = 0x690;
std::ptrdiff_t FresnelOffset = 0x694;
std::ptrdiff_t CachedFresnelColor = 0x680;
std::ptrdiff_t CachedFresnelOffset = 0x684;
std::ptrdiff_t CachedFresnelIntensity = 0x688;
std::ptrdiff_t CachedLocalFresnelOffset = 0x68c;