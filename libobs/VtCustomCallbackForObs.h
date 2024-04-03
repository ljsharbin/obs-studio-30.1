#pragma once

struct custom_callback_for_obs {
	int version;
	int callback_count;
	const char* (*get_callback_label)(int idx);
	const char* (*get_callback_tip)(int idx);
	const char* (*get_callback_icon_path)(int idx);
	void (*custom_callback)(void* data, int idx);
};
