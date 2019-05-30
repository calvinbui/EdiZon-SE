#pragma once

#include <switch.h>
#include <unistd.h>
#include <stdio.h>
#include <cstring>

#define CONFIG_PATH "/switch/EdiZon/config.dat"

namespace Config {
  typedef struct ConfigData {
    char magic[8];
    bool hideSX;
    char latestCommit[40];
  } config_data_t;

  void readConfig();
  void writeConfig();
  config_data_t* getConfig();
}