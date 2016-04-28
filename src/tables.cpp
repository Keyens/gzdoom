// Emacs style mode select	 -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// DESCRIPTION:
//		Lookup tables.
//		Do not try to look them up :-).
//		In the order of appearance: 
//
//		int finesine[10240] 			- Sine lookup.
//		 Guess what, serves as cosine, too.
//		 Remarkable thing is, how to use BAMs with this? 
//		
//	  
//-----------------------------------------------------------------------------

#include "tables.h"

fixed_t finesine[10240];

