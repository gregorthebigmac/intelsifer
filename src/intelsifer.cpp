#include "command/command.hpp"

using std::cout;
using std::endl;
using std::string;
using std::vector;

command cmd;

int main() {
    cmd.toggle_debug();     // Toggling debug on. Default is off.
    vector<string> terminal_feedback, error_list;
    cmd.exec("echo \"test\"", terminal_feedback, error_list);
    return 0;
}
