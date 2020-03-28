/**
 * Copyright (c) 2020. The WRENCH Team.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 */

#include <iostream>
#include <vector>
#include <wrench-dev.h>

XBT_LOG_NEW_DEFAULT_CATEGORY(Main, "Log category for Main");

int main(int argc, char **argv) {

    // create and initialize the simulation
    wrench::Simulation simulation;
    simulation.init(&argc, argv);

    // check to make sure there are the right number of arguments
    if (argc != 3) {
        std::cerr << "WRENCH Simulator" << std::endl;
        std::cerr << "Usage: " << argv[0]
                  << " <xml platform file> <JSON or XML workflow file>"
                  << std::endl;
        exit(1);
    }

    //create the platform file and dax file from command line args
    char *platform_file = argv[1];
    char *workflow_file = argv[2];

    return 0;
}
