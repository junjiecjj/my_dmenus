/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */

static const char *fonts[] = {
	// "monospace:size=16"
	// "JetBrains Mono:size=16"
	// "Fira Code:size=16"
	// "FiraCode Nerd Font:size=16"
	// "FiraCode Nerd Font Mono:size=16"
	// "JetBrainsMono Nerd Font:size=16"
	// "JetBrainsMono Nerd Font Mono:size=16"


    // "JetBrainsMono Nerd Font Mono:style=Bold:size=12"
    // "JetBrainsMono Nerd Font Mono:style=Regular:size=12"
    // "JetBrainsMono Nerd Font Mono:style=ExtraLight:size=12"
    // "JetBrainsMono Nerd Font Mono:style=Light:size=12"

	// "SauceCodePro Nerd Font:size=16"
	// "SauceCodePro Nerd Font Mono:size=16"

	// "Monaco:size=16"
	// "InconsolataGo Nerd Font:size=16"
	// "InconsolataGo Nerd Font Mono:size=16"
	// "InconsolataLGC Nerd Font Medium:size=16"
	// "YaHei Consolas Hybrid:size=16"
	// "YaHei Consolas Hybrid YaHei Consolas Hybrid Regular:size=16"
	// "Cascadia Code:size=16"
    // "Cascadia Code SemiLight:size=16"
    // "Cascadia Code ExtraLight:size=16"


	// "CaskaydiaCove Nerd Font Mono:size=16"
    //  "CaskaydiaCove Nerd Font:style=Regular:size=20"
    //  "CaskaydiaCove Nerd Font:style=SemiLight:size=20"
    //  "CaskaydiaCove Nerd Font:style=Light:size=20"
    //  "CaskaydiaCove Nerd Font:style=ExtraLight:size=20"
    "CaskaydiaCove Nerd Font Mono:style=Regular:size=20"
    /* "CaskaydiaCove Nerd Font Mono:style=SemiLight:size=20" */
    /* "CaskaydiaCove Nerd Font Mono:style=Light:size=20" */
    /* "CaskaydiaCove Nerd Font Mono:style=ExtraLight:size=20" */
    /* "CaskaydiaCove Nerd Font Mono:style=Bold:size=20" */
	/* "WenQuanYi Micro Hei:size=20" */
};


static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
