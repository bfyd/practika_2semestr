#include "sort_array.h"
#include <fstream>

bool save_array_to_file(const std::string filename, ValueType* array, int size)
{
    if (!array)
    {
        return false;
    }
    std::ofstream fout;
    fout.open(filename);
    if (fout.is_open())
    {
        fout << std::to_string(size) << std::endl;
        for (int i = 0; i < size; i++)
        {
            fout << std::to_string(array[i]) << std::endl;
        }
        fout.close();
        return true;
    }
    return false;
}

bool read_array_from_file(const std::string filename, ValueType* &array, int &size)
{
    array = nullptr;
    size = 0;

    std::ifstream fin;
    fin.open(filename);
    if (fin.is_open())
    {
        std::string line;
        if (std::getline(fin, line))
        {
            size = std::stol(line);
        }
        if (size == 0)
        {
            fin.close();
            return false;
        }

        array = new ValueType[size];
        if (!array)
        {
            fin.close();
            return false;
        }

        int i = 0;
        while (std::getline(fin, line))
        {
            array[i] = std::stoi(line);
            i++;
        }

        fin.close();
        return true;
    }
    return false;
}

ValueType* generate_array(ValueType start, ValueType end, int size)
{
    srand((uint32_t)time(NULL));
    ValueType* array = new ValueType[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % (end - start + 1) + start;
    }
    return array;
}

bool generate_array_to_file(const std::string filename, ValueType start, ValueType end, int size)
{
    ValueType* array = generate_array(start, end, size);
    if (!array)
    {
        return false;
    }
    bool result = save_array_to_file(filename, array, size);
    delete[] array;
    return result;
}

// bubble sorting
bool sort_array(ValueType* array, int size)
{
    if (!array || size == 0)
    {
        return false;
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j+1]);
            }
        }
    }
    return true;
}