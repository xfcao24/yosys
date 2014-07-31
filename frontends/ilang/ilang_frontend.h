/*
 *  yosys -- Yosys Open SYnthesis Suite
 *
 *  Copyright (C) 2012  Clifford Wolf <clifford@clifford.at>
 *  
 *  Permission to use, copy, modify, and/or distribute this software for any
 *  purpose with or without fee is hereby granted, provided that the above
 *  copyright notice and this permission notice appear in all copies.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 *  ---
 *
 *  A very simple and straightforward frontend for the RTLIL text
 *  representation (as generated by the 'ilang' backend).
 *
 */

#ifndef ILANG_FRONTEND_H
#define ILANG_FRONTEND_H

#include "kernel/yosys.h"
#include <stdio.h>

YOSYS_NAMESPACE_BEGIN

namespace ILANG_FRONTEND {
	void ilang_frontend(FILE *f, RTLIL::Design *design);
	extern RTLIL::Design *current_design;
}

YOSYS_NAMESPACE_END

extern int rtlil_frontend_ilang_yydebug;
int rtlil_frontend_ilang_yylex(void);
void rtlil_frontend_ilang_yyerror(char const *s);
void rtlil_frontend_ilang_yyrestart(FILE *f);
int rtlil_frontend_ilang_yyparse(void);
void rtlil_frontend_ilang_yylex_destroy(void);
int rtlil_frontend_ilang_yyget_lineno(void);

#endif

