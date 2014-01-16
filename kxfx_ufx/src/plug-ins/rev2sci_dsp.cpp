// kX DSP Generated file

// 10kX microcode
// Patch name: 'rev2'

char *rev2_copyright="";
char *rev2_engine="Emu10kX";
char *rev2_comment="v1.2 debug";
char *rev2_created="Oct 30 2002";
char *rev2_guid="80100009-0ADF-11D6-BFBC-D4F706E10C52";

char *rev2_name="Reverb R";
int rev2_itramsize=2942,rev2_xtramsize=62592;

efx_register_info rev2_info[]={
	{ "inl",0x4000,0x7,0xffff,0x0 },
	{ "inr",0x4001,0x7,0xffff,0x0 },
	{ "outl",0x8000,0x8,0xffff,0x0 },
	{ "outr",0x8001,0x8,0xffff,0x0 },
	{ "routl",0x8002,0x8,0xffff,0x0 },
	{ "routr",0x8003,0x8,0xffff,0x0 },
	{ "decay",0x8004,0x4,0xffff,0x0 },
	{ "dfsn",0x8005,0x4,0xffff,0x5fffffff },
	{ "elev",0x8006,0x4,0xffff,0x0 },
	{ "revlev",0x8007,0x4,0xffff,0x7fffffff },
	{ "drymix",0x8008,0x4,0xffff,0x0 },
	{ "l",0x8009,0x1,0xffff,0x0 },
	{ "r",0x800a,0x1,0xffff,0x0 },
	{ "revL",0x800b,0x1,0xffff,0x0 },
	{ "revR",0x800c,0x1,0xffff,0x0 },
	{ "revlFb",0x800d,0x1,0xffff,0x0 },
	{ "revrFb",0x800e,0x1,0xffff,0x0 },
	{ "hideczL",0x800f,0x1,0xffff,0x0 },
	{ "hideczR",0x8010,0x1,0xffff,0x0 },
	{ "hidecf",0x8011,0x1,0xffff,0x0 },
	{ "hideck",0x8012,0x1,0xffff,0x0 },
	{ "hicutrevzL",0x8013,0x1,0xffff,0x0 },
	{ "hicutrevzR",0x8014,0x1,0xffff,0x0 },
	{ "hicutrevf",0x8015,0x1,0xffff,0x0 },
	{ "hicutrevk",0x8016,0x1,0xffff,0x0 },
	{ "hicutezL",0x8017,0x1,0xffff,0x0 },
	{ "hicutezR",0x8018,0x1,0xffff,0x0 },
	{ "hicutef",0x8019,0x1,0xffff,0x0 },
	{ "locutzL",0x801a,0x1,0xffff,0x0 },
	{ "locutzR",0x801b,0x1,0xffff,0x0 },
	{ "locutf",0x801c,0x1,0xffff,0x0 },
	{ "cp0",0x801d,0x1,0xffff,0x0 },
	{ "cp1",0x801e,0x1,0xffff,0x0 },
	{ "cp2",0x801f,0x1,0xffff,0x0 },
	{ "cp3",0x8020,0x1,0xffff,0x0 },
	{ "_AC33333332",0x8021,0x1,0xffff,0x33333332 },
	{ "_AC19999999",0x8022,0x1,0xffff,0x19999999 },
	{ "t0",0x8023,0x3,0xffff,0x0 },
	{ "t1",0x8024,0x3,0xffff,0x0 },
	{ "t2",0x8025,0x3,0xffff,0x0 },
	{ "t3",0x8026,0x3,0xffff,0x0 },
	{ "t4",0x8027,0x3,0xffff,0x0 },
	{ "dEAlw",0x8028,0x49,0xffff,0x0 },
	{ "&dEAlw",0x8029,0xb,0xffff,0x0 },
	{ "dEAlr0",0x802a,0x29,0xffff,0x7a },
	{ "&dEAlr0",0x802b,0xb,0xffff,0x7a },
	{ "dEArw",0x802c,0x49,0xffff,0xa2 },
	{ "&dEArw",0x802d,0xb,0xffff,0xa2 },
	{ "dEArr0",0x802e,0x29,0xffff,0x123 },
	{ "&dEArr0",0x802f,0xb,0xffff,0x123 },
	{ "dElw",0x8030,0x49,0xffff,0x14e },
	{ "&dElw",0x8031,0xb,0xffff,0x14e },
	{ "dElr0",0x8032,0x29,0xffff,0x31e },
	{ "&dElr0",0x8033,0xb,0xffff,0x31e },
	{ "dElr1",0x8034,0x29,0xffff,0x4f5 },
	{ "&dElr1",0x8035,0xb,0xffff,0x4f5 },
	{ "dElr2",0x8036,0x29,0xffff,0x4f6 },
	{ "&dElr2",0x8037,0xb,0xffff,0x4f6 },
	{ "dElr3",0x8038,0x29,0xffff,0x543 },
	{ "&dElr3",0x8039,0xb,0xffff,0x543 },
	{ "dElr4",0x803a,0x29,0xffff,0x61a },
	{ "&dElr4",0x803b,0xb,0xffff,0x61a },
	{ "dErw",0x803c,0x49,0xffff,0x61b },
	{ "&dErw",0x803d,0xb,0xffff,0x61b },
	{ "dErr0",0x803e,0x29,0xffff,0x7d6 },
	{ "&dErr0",0x803f,0xb,0xffff,0x7d6 },
	{ "dErr1",0x8040,0x29,0xffff,0x9e1 },
	{ "&dErr1",0x8041,0xb,0xffff,0x9e1 },
	{ "dErr2",0x8042,0x29,0xffff,0x9e2 },
	{ "&dErr2",0x8043,0xb,0xffff,0x9e2 },
	{ "dErr3",0x8044,0x29,0xffff,0xaad },
	{ "&dErr3",0x8045,0xb,0xffff,0xaad },
	{ "dErr4",0x8046,0x29,0xffff,0xadc },
	{ "&dErr4",0x8047,0xb,0xffff,0xadc },
	{ "dESlw",0x8048,0x49,0xffff,0xadd },
	{ "&dESlw",0x8049,0xb,0xffff,0xadd },
	{ "dESlr0",0x804a,0x29,0xffff,0xb2c },
	{ "&dESlr0",0x804b,0xb,0xffff,0xb2c },
	{ "dESrw",0x804c,0x49,0xffff,0xb2e },
	{ "&dESrw",0x804d,0xb,0xffff,0xb2e },
	{ "dESrr0",0x804e,0x29,0xffff,0xb7d },
	{ "&dESrr0",0x804f,0xb,0xffff,0xb7d },
	{ "dA1lw",0x8050,0x4a,0xffff,0x0 },
	{ "&dA1lw",0x8051,0xb,0xffff,0x0 },
	{ "dA1lr0",0x8052,0x2a,0xffff,0x54e },
	{ "&dA1lr0",0x8053,0xb,0xffff,0x54e },
	{ "dA2lw",0x8054,0x4a,0xffff,0x54f },
	{ "&dA2lw",0x8055,0xb,0xffff,0x54f },
	{ "dA2lr0",0x8056,0x2a,0xffff,0xb97 },
	{ "&dA2lr0",0x8057,0xb,0xffff,0xb97 },
	{ "dA3lw",0x8058,0x4a,0xffff,0xb98 },
	{ "&dA3lw",0x8059,0xb,0xffff,0xb98 },
	{ "dA3lr0",0x805a,0x2a,0xffff,0x107b },
	{ "&dA3lr0",0x805b,0xb,0xffff,0x107b },
	{ "dA4lw",0x805c,0x4a,0xffff,0x107c },
	{ "&dA4lw",0x805d,0xb,0xffff,0x107c },
	{ "dA4lr0",0x805e,0x2a,0xffff,0x1bda },
	{ "&dA4lr0",0x805f,0xb,0xffff,0x1bda },
	{ "dA5lw",0x8060,0x4a,0xffff,0x1bdb },
	{ "&dA5lw",0x8061,0xb,0xffff,0x1bdb },
	{ "dA5lr0",0x8062,0x2a,0xffff,0x2bfe },
	{ "&dA5lr0",0x8063,0xb,0xffff,0x2bfe },
	{ "dA6lw",0x8064,0x4a,0xffff,0x2bff },
	{ "&dA6lw",0x8065,0xb,0xffff,0x2bff },
	{ "dA6lr0",0x8066,0x2a,0xffff,0x388e },
	{ "&dA6lr0",0x8067,0xb,0xffff,0x388e },
	{ "dA1rw",0x8068,0x4a,0xffff,0x3890 },
	{ "&dA1rw",0x8069,0xb,0xffff,0x3890 },
	{ "dA1rr0",0x806a,0x2a,0xffff,0x3d6a },
	{ "&dA1rr0",0x806b,0xb,0xffff,0x3d6a },
	{ "dA2rw",0x806c,0x4a,0xffff,0x3d6b },
	{ "&dA2rw",0x806d,0xb,0xffff,0x3d6b },
	{ "dA2rr0",0x806e,0x2a,0xffff,0x4538 },
	{ "&dA2rr0",0x806f,0xb,0xffff,0x4538 },
	{ "dA3rw",0x8070,0x4a,0xffff,0x4539 },
	{ "&dA3rw",0x8071,0xb,0xffff,0x4539 },
	{ "dA3rr0",0x8072,0x2a,0xffff,0x4e8b },
	{ "&dA3rr0",0x8073,0xb,0xffff,0x4e8b },
	{ "dA4rw",0x8074,0x4a,0xffff,0x4e8c },
	{ "&dA4rw",0x8075,0xb,0xffff,0x4e8c },
	{ "dA4rr0",0x8076,0x2a,0xffff,0x57c7 },
	{ "&dA4rr0",0x8077,0xb,0xffff,0x57c7 },
	{ "dA5rw",0x8078,0x4a,0xffff,0x57c8 },
	{ "&dA5rw",0x8079,0xb,0xffff,0x57c8 },
	{ "dA5rr0",0x807a,0x2a,0xffff,0x6385 },
	{ "&dA5rr0",0x807b,0xb,0xffff,0x6385 },
	{ "dA6rw",0x807c,0x4a,0xffff,0x6386 },
	{ "&dA6rw",0x807d,0xb,0xffff,0x6386 },
	{ "dA6rr0",0x807e,0x2a,0xffff,0x711e },
	{ "&dA6rr0",0x807f,0xb,0xffff,0x711e },
	{ "dPl",0x8080,0x4a,0xffff,0x7120 },
	{ "&dPl",0x8081,0xb,0xffff,0x7120 },
	{ "dPl_",0x8082,0x2a,0xffff,0x75d0 },
	{ "&dPl_",0x8083,0xb,0xffff,0x75d0 },
	{ "dPr",0x8084,0x4a,0xffff,0xb2d0 },
	{ "&dPr",0x8085,0xb,0xffff,0xb2d0 },
	{ "dPr_",0x8086,0x2a,0xffff,0xb780 },
	{ "&dPr_",0x8087,0xb,0xffff,0xb780 },
};

efx_code rev2_code[]={
	{ 0x0,0x8009,0x2040,0x4000,0x204f },
	{ 0x0,0x800a,0x2040,0x4001,0x204f },
	{ 0xe,0x8013,0x8009,0x8015,0x8013 },
	{ 0xe,0x801a,0x8009,0x801c,0x801a },
	{ 0x1,0x8030,0x8009,0x2040,0x801a },
	{ 0x0,0x8023,0x2040,0x8032,0x204d },
	{ 0x1,0x8023,0x8023,0x8034,0x204c },
	{ 0x1,0x8023,0x8023,0x8036,0x204c },
	{ 0x0,0x8023,0x8023,0x8038,0x204b },
	{ 0x1,0x8023,0x8023,0x803a,0x204b },
	{ 0x0,0x8026,0x802a,0x8023,0x2054 },
	{ 0x1,0x8028,0x8023,0x8026,0x2054 },
	{ 0xe,0x8017,0x8026,0x8019,0x8017 },
	{ 0xe,0x8026,0x8017,0x204f,0x8026 },
	{ 0xe,0x8048,0x8026,0x204d,0x8017 },
	{ 0x1,0x8026,0x8026,0x804e,0x204f },
	{ 0xe,0x8024,0x8009,0x8016,0x8013 },
	{ 0x1,0x8080,0x8024,0x2040,0x801a },
	{ 0x0,0x8024,0x8082,0x800e,0x8004 },
	{ 0x1,0x8024,0x8024,0x800d,0x8004 },
	{ 0xe,0x800f,0x8024,0x8011,0x800f },
	{ 0xe,0x8024,0x8024,0x8012,0x800f },
	{ 0x0,0x8023,0x8052,0x8024,0x8005 },
	{ 0x1,0x8050,0x8024,0x8023,0x8005 },
	{ 0x0,0x800b,0x2040,0x8023,0x2040 },
	{ 0x0,0x8024,0x8056,0x8023,0x8005 },
	{ 0x1,0x8054,0x8023,0x8024,0x8005 },
	{ 0x0,0x800b,0x800b,0x8024,0x2040 },
	{ 0x0,0x8023,0x805a,0x8024,0x8005 },
	{ 0x1,0x8058,0x8024,0x8023,0x8005 },
	{ 0x0,0x800b,0x800b,0x8023,0x2040 },
	{ 0x0,0x8024,0x805e,0x8023,0x8005 },
	{ 0x1,0x805c,0x8023,0x8024,0x8005 },
	{ 0x0,0x800c,0x2040,0x8024,0x2040 },
	{ 0x0,0x8023,0x8062,0x8024,0x8005 },
	{ 0x1,0x8060,0x8024,0x8023,0x8005 },
	{ 0x0,0x800b,0x800b,0x8023,0x2040 },
	{ 0x0,0x800c,0x800c,0x8023,0x2040 },
	{ 0x0,0x8024,0x8066,0x8023,0x8005 },
	{ 0x1,0x8064,0x8023,0x8024,0x8005 },
	{ 0x0,0x800b,0x800b,0x8024,0x2040 },
	{ 0xe,0x800d,0x8024,0x800d,0x8004 },
	{ 0xe,0x8014,0x800a,0x8015,0x8014 },
	{ 0xe,0x801b,0x800a,0x801c,0x801b },
	{ 0x1,0x803c,0x800a,0x2040,0x801b },
	{ 0x0,0x8023,0x2040,0x803e,0x8021 },
	{ 0x0,0x8023,0x8023,0x8040,0x204c },
	{ 0x0,0x8023,0x8023,0x8042,0x204c },
	{ 0x1,0x8023,0x8023,0x8044,0x8022 },
	{ 0x0,0x8023,0x8023,0x8046,0x8022 },
	{ 0x0,0x8027,0x802e,0x8023,0x2054 },
	{ 0x1,0x802c,0x8023,0x8027,0x2054 },
	{ 0xe,0x8018,0x8027,0x8019,0x8018 },
	{ 0xe,0x8027,0x8018,0x204f,0x8027 },
	{ 0xe,0x804c,0x8027,0x204d,0x8018 },
	{ 0x1,0x8027,0x8027,0x804a,0x204f },
	{ 0xe,0x8024,0x800a,0x8016,0x8014 },
	{ 0x1,0x8084,0x8024,0x2040,0x801b },
	{ 0x1,0x8024,0x8086,0x800d,0x8004 },
	{ 0x1,0x8024,0x8024,0x800e,0x8004 },
	{ 0xe,0x8010,0x8024,0x8011,0x8010 },
	{ 0xe,0x8024,0x8024,0x8012,0x8010 },
	{ 0x0,0x8023,0x806a,0x8024,0x8005 },
	{ 0x1,0x8068,0x8024,0x8023,0x8005 },
	{ 0x0,0x800c,0x800c,0x8023,0x2040 },
	{ 0x0,0x8024,0x806e,0x8023,0x8005 },
	{ 0x1,0x806c,0x8023,0x8024,0x8005 },
	{ 0x0,0x800c,0x800c,0x8024,0x2040 },
	{ 0x0,0x8023,0x8072,0x8024,0x8005 },
	{ 0x1,0x8070,0x8024,0x8023,0x8005 },
	{ 0x0,0x800c,0x800c,0x8023,0x2040 },
	{ 0x0,0x8024,0x8076,0x8023,0x8005 },
	{ 0x1,0x8074,0x8023,0x8024,0x8005 },
	{ 0x0,0x800b,0x800b,0x8024,0x2040 },
	{ 0x0,0x8023,0x807a,0x8024,0x8005 },
	{ 0x1,0x8078,0x8024,0x8023,0x8005 },
	{ 0x0,0x800c,0x800c,0x8023,0x2040 },
	{ 0x0,0x800b,0x800b,0x8023,0x2040 },
	{ 0x0,0x8024,0x807e,0x8023,0x8005 },
	{ 0x1,0x807c,0x8023,0x8024,0x8005 },
	{ 0x0,0x800c,0x800c,0x8024,0x2040 },
	{ 0x0,0x800e,0x8024,0x800e,0x8004 },
	{ 0xe,0x8024,0x2040,0x800b,0x8007 },
	{ 0x0,0x8025,0x2056,0x8026,0x8006 },
	{ 0x0,0x8000,0x2056,0x8009,0x8008 },
	{ 0xe,0x8002,0x8024,0x804a,0x8006 },
	{ 0xe,0x8024,0x2040,0x800c,0x8007 },
	{ 0x0,0x8025,0x2056,0x8027,0x8006 },
	{ 0x0,0x8001,0x2056,0x800a,0x8008 },
	{ 0xe,0x8003,0x8024,0x804e,0x8006 },
};
