#pragma once
#include <stdint.h>
#include <string>

using ValueType = int32_t;

static const size_t MAX_ARRAY_VALUE_COUNT = 50000;

bool save_array_to_file(const std::string filename, ValueType* array, int size);

bool read_array_from_file(const std::string filename, ValueType*& array, int& size);

bool generate_array_to_file(const std::string filename, ValueType start, ValueType end, int size);

bool sort_array(ValueType* array, int size);
