#ifndef PROJECT2_SNAPSHOT_API
#define PROJECT2_SNAPSHOT_API

#include "project2.h"
#include "stdio.h"

/*********************************************
 * Main Snapshot Save/Load functions
 *********************************************/
extern int save_snapshot(const char *szFilePath, size_t nCycle,
                      inC_project2 *inC,
                      outC_project2 *outC);
extern int load_snapshot(const char *szFilePath, size_t *nCycle,
                      inC_project2 *inC,
                      outC_project2 *outC);

/**********************************************
 * Operators context Save/Load sub-functions
 *********************************************/
extern int save_inC_project2(const char *cpath, const inC_project2 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_inC_project2(inC_project2 *pValue, FILE *snsFile);
extern int save_outC_project2(const char *cpath, const outC_project2 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_project2(outC_project2 *pValue, FILE *snsFile);
#endif /*PROJECT2_SNAPSHOT_API*/
