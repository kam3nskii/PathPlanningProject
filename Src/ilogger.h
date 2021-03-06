#ifndef ILOGGER_H
#define ILOGGER_H
#include <list>
#include <unordered_map>

#include "Astar.h"
#include "LPAstar.h"
#include "DstarLite.h"
#include "map.h"
#include "node.h"

class ILogger {
   public:
    ILogger(std::string loglevel) {
        this->loglevel = loglevel;
    }
    virtual bool getLog(const char* FileName, const std::string* LogParams) = 0;
    virtual void saveLog() = 0;
    virtual void saveLog(std::string logName) = 0;
    virtual std::string getLogFilename() = 0;
    virtual void writeToLogMap(const Map& map, const std::list<Node>& path) = 0;
    virtual void writeToLogMap(const Map& map, const std::list<Node>& path, Node* start, Node* goal) = 0;
    virtual void writeToLogOpen(const Map& map, const Astar& search) = 0;
    virtual void writeToLogOpen(const Map& map, const LPAstar& search) = 0;
    virtual void writeToLogOpen(const Map& map, const DstarLite& search) = 0;
    virtual void writeToLogPath(const std::list<Node>& path) = 0;
    virtual void writeToLogHPpath(const std::list<Node>& path) = 0;
    virtual void writeToLogNotFound() = 0;
    virtual void writeToLogSummary(unsigned int numberofsteps, unsigned int nodescreated,
                                   float length, double time, double cellSize) = 0;
    virtual ~ILogger(){};

   protected:
    std::string loglevel;
};

#endif
