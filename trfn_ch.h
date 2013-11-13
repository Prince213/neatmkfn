/* ligatures */
static char *ligs[] = {
	"fh", "fi", "fj", "fk", "fl", "ff", "ffi", "ffj", "ffl", "fft", "ft", "Th"
};

/* AGL exceptions; expanding ligatures */
static char *agl_exceptions[][2] = {
	{"ﬀ", "ff"},
	{"ﬁ", "fi"},
	{"ﬂ", "fl"},
	{"ﬃ", "ffi"},
	{"ﬄ", "ffl"},
	{"ﬆ", "st"},
};

/* troff aliases */
static char *alts[][8] = {
	{"\\", "bs"},
	{"`", "ga"},
	{"¡", "!!"},
	{"¢", "c|", "ct"},
	{"£", "L-", "ps"},
	{"¤", "xo", "cr"},
	{"¥", "Y-", "yn"},
	{"¦", "||"},
	{"§", "so", "sc"},
	{"¨", "\"\"", ":a"},
	{"©", "co"},
	{"ª", "a_"},
	{"«", "<<"},
	{"¬", "-,", "no"},
	{"-", "hy"},
	{"−", "--"},
	{"®", "ro", "rg"},
	{"¯", "a^", "-a"},
	{"°", "0^"},
	{"²", "2^"},
	{"³", "3^"},
	{"´", "\\'", "aa"},
	{"µ", "/u"},
	{"¶", "P!", "pg"},
	{"·", ".^"},
	{"¸", ",,", ",a"},
	{"¹", "1^"},
	{"º", "o_"},
	{"»", ">>"},
	{"¼", "14"},
	{"½", "12"},
	{"¾", "34"},
	{"¿", "??"},
	{"À", "A`"},
	{"Á", "A'"},
	{"Â", "A^"},
	{"Ã", "A~"},
	{"Ä", "A:", "A\""},
	{"Å", "A*"},
	{"Æ", "AE"},
	{"Ç", "C,"},
	{"Č", "C<"},
	{"È", "E`"},
	{"É", "E'"},
	{"Ê", "E^"},
	{"Ë", "E:", "E\""},
	{"Ì", "I`"},
	{"Í", "I'"},
	{"Î", "I^"},
	{"Ï", "I:", "I\""},
	{"Ð", "D-"},
	{"Ď", "D<"},
	{"Ñ", "N~"},
	{"Ò", "O`"},
	{"Ó", "O'"},
	{"Ô", "O^"},
	{"Õ", "O~"},
	{"Ö", "O:"},
	{"Ő", "O\""},
	{"×", "xx", "mu"},
	{"Ø", "O/"},
	{"Ř", "R<"},
	{"Š", "S<"},
	{"Ť", "T<"},
	{"Ù", "U`"},
	{"Ú", "U'"},
	{"Û", "U^"},
	{"Ü", "U:"},
	{"Ű", "U\""},
	{"Ů", "U0"},
	{"Ý", "Y'"},
	{"Ÿ", "Y:", "Y\""},
	{"Ž", "Z<"},
	{"Þ", "TH"},
	{"ß", "ss"},
	{"à", "a`"},
	{"á", "a'"},
	{"â", "a^"},
	{"ã", "a~"},
	{"ä", "a:", "a\""},
	{"å", "a*"},
	{"æ", "ae"},
	{"ç", "c,"},
	{"č", "c<"},
	{"ď", "d<"},
	{"è", "e`"},
	{"é", "e'"},
	{"ê", "e^"},
	{"ë", "e:", "e\""},
	{"ě", "e<"},
	{"ì", "i`"},
	{"í", "i'"},
	{"î", "i^"},
	{"ï", "i\""},
	{"ð", "d-"},
	{"ñ", "n~"},
	{"ň", "n<"},
	{"ò", "o`"},
	{"ó", "o'"},
	{"ô", "o^"},
	{"õ", "o~"},
	{"ö", "o:"},
	{"ő", "o\""},
	{"÷", "-:"},
	{"ø", "o/"},
	{"ř", "r<"},
	{"š", "s<"},
	{"ť", "t<"},
	{"ù", "u`"},
	{"ú", "u'"},
	{"û", "u^"},
	{"ü", "u:"},
	{"ű", "u\""},
	{"ů", "u0"},
	{"ý", "y'"},
	{"ž", "z<"},
	{"þ", "th"},
	{"ÿ", "y:", "y\""},
	{"˘", "Ua"},
	{"˙", ".a"},
	{"˚", "oa"},
	{"˝", "\"a"},
	{"˛", "Ca"},
	{"ˇ", "va"},
	{"∀", "fa"},
	{"∃", "te"},
	{"∋", "st"},
	{"∗", "**"},
	{"+", "pl"},
	{"−", "mi"},
	{"/", "sl"},
	{"=", "eq"},
	{"≅", "cg"},
	{"Α", "*A"},
	{"Β", "*B"},
	{"Χ", "*X"},
	{"∆", "*D"},
	{"Ε", "*E"},
	{"Φ", "*F"},
	{"Γ", "*G"},
	{"Η", "*Y"},
	{"Ι", "*I"},
	{"Κ", "*K"},
	{"Λ", "*L"},
	{"Μ", "*M"},
	{"Ν", "*N"},
	{"Ο", "*O"},
	{"Π", "*P"},
	{"Θ", "*H"},
	{"Ρ", "*R"},
	{"Σ", "*S"},
	{"Τ", "*T"},
	{"Υ", "*U"},
	{"ς", "ts"},
	{"Ω", "*W"},
	{"Ξ", "*C"},
	{"Ψ", "*Q"},
	{"Ζ", "*Z"},
	{"∴", "tf"},
	{"⊥", "pp"},
	{"", "rn"},
	{"α", "*a"},
	{"β", "*b"},
	{"χ", "*x"},
	{"δ", "*d"},
	{"ε", "*e"},
	{"φ", "*f"},
	{"γ", "*g"},
	{"η", "*y"},
	{"ι", "*i"},
	{"κ", "*k"},
	{"λ", "*l"},
	{"μ", "*m"},
	{"ν", "*n"},
	{"ο", "*o"},
	{"π", "*p"},
	{"θ", "*h"},
	{"ρ", "*r"},
	{"σ", "*s"},
	{"τ", "*t"},
	{"υ", "*u"},
	{"ω", "*w"},
	{"ξ", "*c"},
	{"ψ", "*q"},
	{"ζ", "*z"},
	{"|", "or"},
	{"∼", "ap"},
	{"′", "fm"},
	{"≤", "<="},
	{"⁄", "fr"},
	{"∞", "if"},
	{"ƒ", "fn",},
	{"↔", "ab"},
	{"←", "<-"},
	{"↑", "ua"},
	{"→", "->"},
	{"↓", "da"},
	{"°", "de"},
	{"±", "+-"},
	{"≥", ">="},
	{"∝", "pt"},
	{"∂", "pd"},
	{"•", "bu"},
	{"÷", "di"},
	{"≠", "!="},
	{"≡", "=="},
	{"≈", "~~"},
	{"…", "el"},
	{"", "av"},
	{"", "ah"},
	{"↵", "CR"},
	{"ℵ", "af"},
	{"ℑ", "If"},
	{"ℜ", "Rf"},
	{"ℛ", "ws"},
	{"⊗", "Ox"},
	{"⊕", "O+"},
	{"∅", "es"},
	{"∩", "ca"},
	{"∪", "cu"},
	{"⊃", "sp"},
	{"⊇", "ip"},
	{"⊄", "!b"},
	{"⊂", "sb"},
	{"⊆", "ib"},
	{"∈", "mo"},
	{"∉", "!m"},
	{"∠", "an"},
	{"∇", "gr"},
	{"", "rg"},
	{"", "co"},
	{"", "tm"},
	{"∏", "pr"},
	{"√", "sr"},
	{"⋅", "c."},
	{"∧", "l&"},
	{"∨", "l|"},
	{"◊", "lz"},
	{"〈", "b<"},
	{"", "RG"},
	{"", "CO"},
	{"", "TM"},
	{"∑", "su"},
	{"", "LT"},
	{"", "br", "LX"},
	{"", "LB"},
	{"", "lc"},
	{"", "lx"},
	{"", "lf"},
	{"", "lt"},
	{"", "lk"},
	{"", "lb"},
	{"", "bv", "|",},
	{"〉", "b>"},
	{"∫", "is"},
	{"", "RT"},
	{"", "RX"},
	{"", "RB"},
	{"", "rc"},
	{"", "rx"},
	{"", "rf"},
	{"", "rt"},
	{"", "rk"},
	{"", "rb"},
	{"_", "ru", "ul"},
	{"”", "''"},
	{"“", "``"},
	{"†", "dg"},
	{"‡", "dd"},
	{"–", "en", "\\-"},
	{"—", "em"},
	{"ff", "ﬀ"},
	{"fi", "ﬁ"},
	{"fl", "ﬂ"},
	{"ffi", "ﬃ"},
	{"ffl", "ﬄ"},
	{"st", "ﬆ"},
};

/* different shapes of arabic and farsi characters */
static struct achar {
	char *name;
	unsigned c;
	unsigned s;
	unsigned i;
	unsigned m;
	unsigned f;
} achars[] = {
	{"hamza", 0x0621, 0xfe80},
	{"alefwithmaddaabove", 0x0622, 0xfe81, 0, 0, 0xfe82},
	{"alefwithhamzaabove", 0x0623, 0xfe83, 0, 0, 0xfe84},
	{"wawwithhamzaabove", 0x0624, 0xfe85, 0, 0, 0xfe86},
	{"alefwithhamzabelow", 0x0625, 0xfe87, 0, 0, 0xfe88},
	{"yehwithhamzaabove", 0x0626, 0xfe89, 0xfe8b, 0xfe8c, 0xfe8a},
	{"alef", 0x0627, 0xfe8d, 0, 0, 0xfe8e},
	{"arabicalef", 0x0627},
	{"beh", 0x0628, 0xfe8f, 0xfe91, 0xfe92, 0xfe90},
	{"tehmarbuta", 0x0629, 0xfe93, 0, 0, 0xfe94},
	{"teh", 0x062a, 0xfe95, 0xfe97, 0xfe98, 0xfe96},
	{"theh", 0x062b, 0xfe99, 0xfe9b, 0xfe9c, 0xfe9a},
	{"jeem", 0x062c, 0xfe9d, 0xfe9f, 0xfea0, 0xfe9e},
	{"hah", 0x062d, 0xfea1, 0xfea3, 0xfea4, 0xfea2},
	{"khah", 0x062e, 0xfea5, 0xfea7, 0xfea8, 0xfea6},
	{"dal", 0x062f, 0xfea9, 0, 0, 0xfeaa},
	{"thal", 0x0630, 0xfeab, 0, 0, 0xfeac},
	{"reh", 0x0631, 0xfead, 0, 0, 0xfeae},
	{"zain", 0x0632, 0xfeaf, 0, 0, 0xfeb0},
	{"seen", 0x0633, 0xfeb1, 0xfeb3, 0xfeb4, 0xfeb2},
	{"sheen", 0x0634, 0xfeb5, 0xfeb7, 0xfeb8, 0xfeb6},
	{"sad", 0x0635, 0xfeb9, 0xfebb, 0xfebc, 0xfeba},
	{"dad", 0x0636, 0xfebd, 0xfebf, 0xfec0, 0xfebe},
	{"tah", 0x0637, 0xfec1, 0xfec3, 0xfec4, 0xfec2},
	{"zah", 0x0638, 0xfec5, 0xfec7, 0xfec8, 0xfec6},
	{"ain", 0x0639, 0xfec9, 0xfecb, 0xfecc, 0xfeca},
	{"ghain", 0x063a, 0xfecd, 0xfecf, 0xfed0, 0xfece},
	{"tatweel", 0x0640},
	{"feh", 0x0641, 0xfed1, 0xfed3, 0xfed4, 0xfed2},
	{"qaf", 0x0642, 0xfed5, 0xfed7, 0xfed8, 0xfed6},
	{"kaf", 0x0643, 0xfed9, 0xfedb, 0xfedc, 0xfeda},
	{"lam", 0x0644, 0xfedd, 0xfedf, 0xfee0, 0xfede},
	{"meem", 0x0645, 0xfee1, 0xfee3, 0xfee4, 0xfee2},
	{"noon", 0x0646, 0xfee5, 0xfee7, 0xfee8, 0xfee6},
	{"heh", 0x0647, 0xfee9, 0xfeeb, 0xfeec, 0xfeea},
	{"waw", 0x0648, 0xfeed, 0, 0, 0xfeee},
	{"alefmaksura", 0x0649, 0xfeef, 0, 0, 0xfef0},
	{"yeh", 0x064a, 0xfef1, 0xfef3, 0xfef4, 0xfef2},
	{"fathatan", 0x064b, 0xfe70},
	{"dammatan", 0x064c, 0xfe72},
	{"kasratan", 0x064d, 0xfe74},
	{"fatha", 0x064e, 0xfe76, 0, 0xfe77, 0},
	{"damma", 0x064f, 0xfe78, 0, 0xfe79, 0},
	{"kasra", 0x0650, 0xfe7a, 0, 0xfe7b, 0},
	{"shadda", 0x0651, 0xfe7c, 0, 0xfe7c, 0},
	{"sukun", 0x0652, 0xfe7e, 0, 0xfe7f, 0},
	{"peh", 0x067e, 0xfb56, 0xfb58, 0xfb59, 0xfb57},
	{"tcheh", 0x0686, 0xfb7a, 0xfb7c, 0xfb7d, 0xfb7b},
	{"jeh", 0x0698, 0xfb8a, 0, 0, 0xfb8b},
	{"keheh", 0x06a9, 0xfb8e, 0xfb90, 0xfb91, 0xfb8f},
	{"gaf", 0x06af, 0xfb92, 0xfb94, 0xfb95, 0xfb93},
	{"farsiyeh", 0x06cc, 0xfbfc, 0xfbfe, 0xfbff, 0xfbfd},
	{"lamwithalef", 0xfefb, 0xfefb, 0, 0, 0xfefc},
	{"arabiccomma", 0x060c},
	{"arabicsemicolon", 0x061b},
	{"arabicquestionmark", 0x061f},
	{"arabicindicdigitzero", 0x0660},
	{"arabicindicdigitone", 0x0661},
	{"arabicindicdigittwo", 0x0662},
	{"arabicindicdigitthree", 0x0663},
	{"arabicindicdigitfour", 0x0664},
	{"arabicindicdigitfive", 0x0665},
	{"arabicindicdigitsix", 0x0666},
	{"arabicindicdigitseven", 0x0667},
	{"arabicindicdigiteight", 0x0668},
	{"arabicindicdigitnine", 0x0669},
	{"arabicpercentsign", 0x066a},
	{"extendedarabicindicdigitzero", 0x06f0},
	{"extendedarabicindicdigitone", 0x06f1},
	{"extendedarabicindicdigittwo", 0x06f2},
	{"extendedarabicindicdigitthree", 0x06f3},
	{"extendedarabicindicdigitfour", 0x06f4},
	{"extendedarabicindicdigitfive", 0x06f5},
	{"extendedarabicindicdigitsix", 0x06f6},
	{"extendedarabicindicdigitseven", 0x06f7},
	{"extendedarabicindicdigiteight", 0x06f8},
	{"extendedarabicindicdigitnine", 0x06f9},
	{"zeronojoin", 0x200c},
	{"zerojoin", 0x200d},
};

static struct ctype {
	char *ch;	/* character name */
	int type;	/* ascender/descender type */
} ctype[] = {
	{"Ï", 2},
	{"²", 2},
	{"ì", 2},
	{"u", 0},
	{"Ì", 2},
	{"U", 2},
	{"∞", 0},
	{"ú", 2},
	{"∫", 3},
	{"Ú", 2},
	{"a", 0},
	{"ι", 0},
	{"û", 2},
	{"A", 2},
	{"Ι", 2},
	{"Û", 2},
	{"á", 2},
	{"j", 3},
	{"ü", 2},
	{"Á", 2},
	{"J", 3},
	{"Ü", 2},
	{"â", 2},
	{"k", 2},
	{"ù", 2},
	{"Â", 2},
	{"K", 2},
	{"Ù", 2},
	{"´", 2},
	{"κ", 0},
	{"ű", 2},
	{"ä", 2},
	{"Κ", 2},
	{"Ű", 2},
	{"Ä", 2},
	{"l", 2},
	{"_", 1},
	{"æ", 0},
	{"L", 2},
	{"υ", 0},
	{"Æ", 2},
	{"λ", 2},
	{"Υ", 2},
	{"à", 2},
	{"Λ", 2},
	{"ů", 2},
	{"À", 2},
	{"<", 0},
	{"Ů", 2},
	{"α", 0},
	{"≤", 2},
	{"v", 0},
	{"Α", 2},
	{"¬", 0},
	{"V", 2},
	{"&", 2},
	{"◊", 2},
	{"w", 0},
	{"≈", 0},
	{"m", 0},
	{"W", 2},
	{"å", 2},
	{"M", 2},
	{"x", 0},
	{"Å", 2},
	{"¯", 2},
	{"X", 2},
	{"^", 2},
	{"−", 0},
	{"ξ", 3},
	{"~", 0},
	{"µ", 1},
	{"Ξ", 2},
	{"*", 2},
	{"Μ", 2},
	{"y", 1},
	{"@", 3},
	{"×", 0},
	{"Y", 2},
	{"ã", 2},
	{"n", 0},
	{"ý", 3},
	{"Ã", 2},
	{"N", 2},
	{"Ý", 2},
	{"b", 2},
	{"ň", 2},
	{"ÿ", 3},
	{"B", 2},
	{"9", 2},
	{"¥", 2},
	{"\\", 2},
	{"≠", 0},
	{"z", 0},
	{"|", 3},
	{"ñ", 2},
	{"Z", 2},
	{"β", 3},
	{"Ñ", 2},
	{"ž", 2},
	{"Β", 2},
	{"ν", 0},
	{"Ž", 2},
	{"{", 3},
	{"Ν", 2},
	{"0", 2},
	{"}", 3},
	{"#", 2},
	{"ζ", 3},
	{"[", 3},
	{"o", 0},
	{"Ζ", 2},
	{"]", 3},
	{"O", 2},
	{"", 3},
	{"˘", 2},
	{"ó", 2},
	{"", 2},
	{"¦", 3},
	{"Ó", 2},
	{"", 3},
	{"•", 0},
	{"ô", 2},
	{"", 2},
	{"c", 0},
	{"Ô", 2},
	{"", 2},
	{"C", 2},
	{"ö", 2},
	{"", 2},
	{"ˇ", 2},
	{"Ö", 2},
	{"", 2},
	{"č", 2},
	{"˛", 1},
	{"", 2},
	{"Č", 2},
	{"ò", 2},
	{"", 2},
	{"ç", 1},
	{"Ò", 2},
	{"،", 0},
	{"Ç", 3},
	{"ő", 2},
	{"؛", 2},
	{"¸", 1},
	{"Ő", 2},
	{"؟", 2},
	{"¢", 2},
	{"ω", 0},
	{"٠", 0},
	{"χ", 1},
	{"Ω", 2},
	{"١", 2},
	{"Χ", 2},
	{"ο", 0},
	{"٢", 2},
	{"ˆ", 2},
	{"Ο", 2},
	{"٣", 2},
	{":", 0},
	{"1", 2},
	{"٤", 2},
	{",", 1},
	{"½", 2},
	{"٥", 2},
	{"©", 2},
	{"¼", 2},
	{"٦", 2},
	{"¤", 2},
	{"¹", 2},
	{"٧", 2},
	{"d", 2},
	{"ª", 2},
	{"٨", 2},
	{"D", 2},
	{"º", 2},
	{"٩", 2},
	{"ď", 2},
	{"ø", 0},
	{"۰", 0},
	{"Ď", 2},
	{"Ø", 2},
	{"۱", 2},
	{"°", 2},
	{"õ", 2},
	{"۲", 2},
	{"δ", 2},
	{"Õ", 2},
	{"۳", 2},
	{"∆", 2},
	{"p", 1},
	{"۴", 2},
	{"¨", 2},
	{"P", 2},
	{"۵", 2},
	{"÷", 0},
	{"¶", 3},
	{"۶", 2},
	{"$", 2},
	{"(", 3},
	{"۷", 2},
	{"˙", 2},
	{")", 3},
	{"۸", 2},
	{"e", 0},
	{"∂", 2},
	{"۹", 2},
	{"E", 2},
	{"%", 2},
	{"٪", 2},
	{"é", 2},
	{".", 0},
	{"‌", 0},
	{"É", 2},
	{"·", 0},
	{"‍", 0},
	{"ě", 2},
	{"φ", 3},
	{"ê", 2},
	{"Φ", 2},
	{"Ê", 2},
	{"π", 0},
	{"ë", 2},
	{"Π", 2},
	{"Ë", 2},
	{"+", 0},
	{"è", 2},
	{"±", 2},
	{"È", 2},
	{"∏", 2},
	{"8", 2},
	{"ψ", 3},
	{"…", 0},
	{"Ψ", 2},
	{"ε", 0},
	{"q", 1},
	{"Ε", 2},
	{"Q", 3},
	{"=", 0},
	{"?", 2},
	{"η", 1},
	{"¿", 1},
	{"Η", 2},
	{"\"", 2},
	{"ð", 2},
	{"‘", 2},
	{"Ð", 2},
	{"’", 2},
	{"!", 2},
	{"r", 0},
	{"¡", 1},
	{"R", 2},
	{"f", 2},
	{"√", 2},
	{"F", 2},
	{"ř", 2},
	{"ff", 2},
	{"Ř", 2},
	{"ffi", 2},
	{"®", 2},
	{"ffj", 3},
	{"ρ", 1},
	{"ffl", 2},
	{"Ρ", 2},
	{"fi", 2},
	{"˚", 2},
	{"fi", 2},
	{"s", 0},
	{"5", 2},
	{"S", 2},
	{"fj", 3},
	{"š", 2},
	{"fl", 2},
	{"Š", 2},
	{"fl", 2},
	{"§", 2},
	{"ƒ", 3},
	{";", 1},
	{"4", 2},
	{"7", 2},
	{"⁄", 2},
	{"σ", 0},
	{"g", 1},
	{"Σ", 2},
	{"G", 2},
	{"6", 2},
	{"γ", 1},
	{"/", 2},
	{"Γ", 2},
	{"£", 2},
	{"ß", 2},
	{"∑", 2},
	{"`", 2},
	{"t", 2},
	{">", 0},
	{"T", 2},
	{"≥", 2},
	{"τ", 0},
	{"«", 0},
	{"Τ", 2},
	{"»", 0},
	{"ť", 2},
	{"h", 2},
	{"Ť", 2},
	{"H", 2},
	{"Th", 2},
	{"˝", 2},
	{"θ", 2},
	{"-", 0},
	{"Θ", 2},
	{"i", 2},
	{"þ", 3},
	{"I", 2},
	{"Þ", 2},
	{"í", 2},
	{"3", 2},
	{"Í", 2},
	{"¾", 2},
	{"î", 2},
	{"³", 2},
	{"Î", 2},
	{"˜", 2},
	{"ï", 2},
	{"2", 2},
};
