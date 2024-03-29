#ifndef _TLN2000AP_WPT_H_
#define _TLN2000AP_WPT_H_

#include "state.h"

void wpt_displayWaypoint(tln_sm_data_t *data);
void wpt_displayCategory(tln_sm_data_t *data);

void wpt_waypointNext(tln_sm_data_t *data);
void wpt_waypointPrev(tln_sm_data_t *data);

void wpt_select(tln_sm_data_t *data);
void wpt_selectPrevField(tln_sm_data_t *data);
void wpt_selectNextField(tln_sm_data_t *data);
void wpt_selectPrevLetter(tln_sm_data_t *data);
void wpt_selectNextLetter(tln_sm_data_t *data);
void wpt_selectEnter(tln_sm_data_t *data);

void wpt_pagePrev(tln_sm_data_t *data);
void wpt_pageNext(tln_sm_data_t *data);

void wpt_categoryNext(tln_sm_data_t *data);
void wpt_categoryReset(tln_sm_data_t *data);

// void wpt_airport_display(tln_sm_data_t *data);

// void wpt_vor_display(tln_sm_data_t *data);

// void wpt_ndb_display(tln_sm_data_t *data);

// void wpt_int_display(tln_sm_data_t *data);

// void wpt_user_display(tln_sm_data_t *data);

#endif