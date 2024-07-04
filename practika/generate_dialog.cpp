#include "generate_dialog.h"

namespace practic 
{
    std::string marshal_string(String^ s)
    {
        using namespace Runtime::InteropServices;
        const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
        std::string os = chars;
        Marshal::FreeHGlobal(IntPtr((void*)chars));
        return os;
    }
}