#ifndef BED122BED6PLUGIN_H
#define BED122BED6PLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class BED122BED6Plugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BED122BED6";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
