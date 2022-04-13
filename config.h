#define CMDLENGTH 60
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("cpu",5,1),
	BLOCK("echo \"|\"", 0, 0),
	BLOCK("cpu-bars", 5, 1),
	BLOCK("echo \"|\"", 0, 0),
	BLOCK("memory",3, 1),
	BLOCK("echo \"|\"", 0, 0),
	BLOCK("netstat", 3, 1),
	BLOCK("echo \"|\"", 0, 0),
	BLOCK("volume", 1, 1),
	BLOCK("echo \"|\"", 0, 0),
	BLOCK("date \"+%Y %b %d (%a) %T\"",1,17),

};
