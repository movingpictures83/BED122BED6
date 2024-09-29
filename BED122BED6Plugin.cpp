#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BED122BED6Plugin.h"

void BED122BED6Plugin::input(std::string file) {
 inputfile = file;
}

void BED122BED6Plugin::run() {}

void BED122BED6Plugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "bed12ToBed6 -i";
myCommand += " ";
myCommand += inputfile + " >& "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<BED122BED6Plugin> BED122BED6PluginProxy = PluginProxy<BED122BED6Plugin>("BED122BED6", PluginManager::getInstance());
