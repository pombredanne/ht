/* 
 *	HT Editor
 *	analy_ia64.h
 *
 *	Copyright (C) 1999-2002 Sebastian Biallas (sb@web-productions.de)
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License version 2 as
 *	published by the Free Software Foundation.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef ANALY_IL_H
#define ANALY_IL_H

#include "analy.h"
#include "ia64dis.h"

class AnalyIA64Disassembler: public AnalyDisassembler {
public:
			void			init(Analyser *A);
	virtual   void	     	done();
	virtual	OBJECT_ID		object_id();

	virtual	Address		*branchAddr(OPCODE *opcode, branch_enum_t branchtype, bool examine);
			Address		*createAddress(dword offset);
	virtual	void			examineOpcode(OPCODE *opcode);
	virtual	branch_enum_t 	isBranch(OPCODE *opcode);
};

#endif