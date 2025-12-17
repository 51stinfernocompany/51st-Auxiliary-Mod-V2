#define MUSIC_NAME(var1) TRIPLES(PREFIX,Music,var1)

#define MUSIC(var1,var2,var3,var4) class MUSIC_NAME(var1) { \
    name = var2; \
    sound[] = {QPATHTOF(data\var1.ogg), "db+0", 1}; \
    duration = var3; \
    musicClass = QCLASS(DOUBLES(MusicBlaze,var4));  \
}
