// kX Driver / kX Driver Interface / kX Driver Effects Library
// Copyright (c) Eugene Gavrilov, Soeren Bovbjerg 2001-2005.
// All rights reserved

/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

// 10kX microcode
// Patch name: 'EQ_Highshelf'

char *Freq_Splitter_copyright="(c) Soeren Bovbjerg, 2002";
char *Freq_Splitter_engine="kX";
char *Freq_Splitter_comment="Frequency splitter";
char *Freq_Splitter_created="2002/06/30";
char *Freq_Splitter_guid="e4e2da89-23d4-4b6a-8238-4315035e1dde";

char *Freq_Splitter_name="Freq Splitter";
int Freq_Splitter_itramsize=0,Freq_Splitter_xtramsize=0;

#define R_HB0	0x8002
#define R_HB1	0x8003
#define R_HB2	0x8004
#define R_HA1	0x8005
#define R_HA2	0x8006
#define R_LB0	0x8007
#define R_LB1	0x8008
#define R_LB2	0x8009
#define R_LA1	0x800A
#define R_LA2	0x800B

dsp_register_info Freq_Splitter_info[]={
	{ "in",0x4000,0x7,0xffff,0x0 },
	{ "outhigh",0x8000,0x8,0xffff,0x0 },
	{ "outlow",0x8001,0x8,0xffff,0x0 },
	{ "hb0",0x8002,0x1,0xffff,0x7fffffff },
	{ "hb1",0x8003,0x1,0xffff,0x0 },
	{ "hb2",0x8004,0x1,0xffff,0x0 },
	{ "ha1",0x8005,0x1,0xffff,0x0 },
	{ "ha2",0x8006,0x1,0xffff,0x0 },
	{ "lb0",0x8007,0x1,0xffff,0x7fffffff },
	{ "lb1",0x8008,0x1,0xffff,0x0 },
	{ "lb2",0x8009,0x1,0xffff,0x0 },
	{ "la1",0x800a,0x1,0xffff,0x0 },
	{ "la2",0x800b,0x1,0xffff,0x0 },
	{ "sca",0x800c,0x1,0xffff,0x2 },
	{ "lx1",0x800d,0x1,0xffff,0x0 },
	{ "lx2",0x800e,0x1,0xffff,0x0 },
	{ "ly1",0x800f,0x1,0xffff,0x0 },
	{ "ly2",0x8010,0x1,0xffff,0x0 },
	{ "rx1",0x8011,0x1,0xffff,0x0 },
	{ "rx2",0x8012,0x1,0xffff,0x0 },
	{ "ry1",0x8013,0x1,0xffff,0x0 },
	{ "ry2",0x8014,0x1,0xffff,0x0 },
	{ "t1",0x8015,0x3,0xffff,0x0 },
	{ "t2",0x8016,0x3,0xffff,0x0 },
};

dsp_code Freq_Splitter_code[]={
	{ 0x0,0x2040,0x2040,0x2040,0x2040 },
	{ 0x7,0x800e,0x800d,0x800e,0x8004 },
	{ 0x7,0x800d,0x4000,0x800d,0x8003 },
	{ 0x7,0x8015,0x8015,0x4000,0x8002 },
	{ 0x7,0x8010,0x800f,0x8010,0x8006 },
	{ 0x7,0x8015,0x8015,0x800f,0x8005 },
	{ 0x0,0x8016,0x2056,0x2040,0x2040 },
	{ 0x4,0x800f,0x2040,0x8016,0x800c },
	{ 0x0,0x8000,0x800f,0x2040,0x2040 },
	{ 0x0,0x2040,0x2040,0x2040,0x2040 },
	{ 0x7,0x8012,0x8011,0x8012,0x8009 },
	{ 0x7,0x8011,0x4000,0x8011,0x8008 },
	{ 0x7,0x8015,0x8015,0x4000,0x8007 },
	{ 0x7,0x8014,0x8013,0x8014,0x800b },
	{ 0x7,0x8015,0x8015,0x8013,0x800a },
	{ 0x0,0x8016,0x2056,0x2040,0x2040 },
	{ 0x4,0x8013,0x2040,0x8016,0x800c },
	{ 0x0,0x8001,0x8013,0x2040,0x2040 },
};
