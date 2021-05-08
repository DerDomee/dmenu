/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */


/* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 1;

/* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int fuzzy = 1;

/* -c option; centers dmenu on screen */
static int centered = 0;

/* minimum width when centered */
static int min_width = 500;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Code Nerd Font:size=12",
  "JoyPixels:pixelsize=20:antialias=true:autohint=true"
};


/* -p  option; prompt to the left of input field */
static const char *prompt      = NULL;

/* Color Scheme */
static const char *colors[SchemeLast][2] = {
	/*                           fg          bg       */
	[SchemeNorm] =          { "#ebdbb2", "#282828" }, /* Normal item unselected */
	[SchemeNormHighlight] = { "#e60053", "#282828" }, /* Fuzzyfound item unselected */
	[SchemeSel] =           { "#282828", "#65b619" }, /* Normal item selected + BG = Border*/
	[SchemeSelHighlight] =  { "#417510", "#65b619" }, /* Fuzzyfound item selected */
	[SchemeOut] =           { "#000001", "#B0ff38" }, /* Multiselected item */
	[SchemeHp] =            { "#ebdbb2", "#282828"}, /* High priority item */
};

/* -l option; if nonzero, dmenu uses vertical list with i
 * given number of lines */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/* -h option; minimum height of a menu line     */
static unsigned int lineheight = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
