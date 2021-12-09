/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 400;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#FABD2F","#282828" },
      [SchemeSel] = { "#FB4934","#282828"}, 
	[SchemeSelHighlight] = { "#FB4934","#282828" },
	[SchemeNormHighlight] = { "#FABD2F","#282828" },
	[SchemeOut] = { "#282828","#282828" },
      [SchemeMid] = { "#FABD2F","#282828" },
	[SchemeOutHighlight] = { "#FABD2F","#282828" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;
static unsigned int maxhist    = 64;
static int histnodup           = 1;	/* if 0, record repeated histories */

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 7;
