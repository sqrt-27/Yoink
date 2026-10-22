#ifndef PATTERNS_H
#define PATTERNS_H

// Im gonna be real for once, these patterns were done by an LLM (DeepSeek), so that's probably why they're long lol
#define P_pushcclosure  "55 48 89 E5 41 57 41 56 41 55 41 54 53 50 4D 89 C4 89 4D D4 49 89 D7 49 89 F6 48 89 FB 48 8B 47 28 48 8B 48 08 48 3B 08 72 0D 48 89 DF BE 01 00"
#define P_setfield      "55 48 89 E5 41 57 41 56 41 54 53 48 83 EC 20 49 89 D6 48 89 FB 4C 8B 25 ?? ?? ?? ?? 49 8B 04 24 48 89 45 D8 85 F6 7E 22 48 8B 43 30 89 F1 48 C1"
#define P_pushstring    "55 48 89 E5 41 56 53 49 89 FE 48 85 F6 74 1D 48 89 F3 48 89 F7 E8 ?? ?? ?? ?? 4C 89 F7 48 89 DE 48 89 C2 5B 41 5E 5D E9 ?? ?? ?? ?? 4C 89 F7 5B"
#define P_loadstring    "55 48 89 E5 41 57 41 56 41 55 41 54 53 48 83 EC 48 48 89 FB 48 8B 05 ?? ?? ?? ?? 48 8B 00 48 89 45 D0 48 8D 3D ?? ?? ?? ?? E8 ?? ?? ?? ?? 49 89"
#define P_pcall         "55 48 89 E5 53 50 48 89 FB BE 01 00 00 00 E8 ?? ?? ?? ?? 48 8B 73 18 48 2B 73 30 48 C1 EE 04 FF CE 48 89 DF BA FF FF FF FF 31 C9 48 83 C4 08 5B"
#define P_getfield      "55 48 89 E5 41 57 41 56 41 54 53 48 83 EC 20 49 89 D6 41 89 F7 48 89 FB 4C 8B 25 ?? ?? ?? ?? 49 8B 04 24 48 89 45 D8 8A 47 01 A8 04 74 15 48 8B"
#define P_tostring      "55 48 89 E5 53 50 48 89 FB BE 01 00 00 00 E8 ?? ?? ?? ?? 48 89 DF BE 01 00 00 00 31 D2 E8 ?? ?? ?? ?? B8 01 00 00 00 48 83 C4 08 5B 5D C3"

#endif