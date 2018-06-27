/*
 * Copyright (c) 2017
 *     Leonardo Baroncelli, Giancarlo Zollino,
 *
 * Any information contained in this software
 * is property of the AGILE TEAM and is strictly
 * private and confidential.
*/


#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <ctime>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using std::string;
using std::ofstream;

class FileWriter
{
    public:
      static void write2File(string outputFileName, string input, bool append);
      static string convertToString(int number);
      static string convertToString(float number);
      static string convertToString(double number);

    private:
      FileWriter();
};

#endif // FILEWRITER_H
