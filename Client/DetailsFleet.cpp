/*
Copyright 2005 Elliott Kleinrock

This file is part of FreeStars, a free clone of the Stars! game.

FreeStars is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

FreeStars is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with FreeStars; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

The full GPL Copyright notice should be in the file COPYING.txt

Contact:
Email Elliott at 9jm0tjj02@sneakemail.com
*/

#include "FSClient.h"

#include "DetailsFleet.h"

using namespace FreeStars;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_EVENT_TABLE(DetailsFleet, wxPanel)
END_EVENT_TABLE()

DetailsFleet::DetailsFleet(MainWindow * parent, wxWindow * frame)
	: wxPanel(frame)
{
	mMainWindow = parent;
}

DetailsFleet::~DetailsFleet()
{
}

void DetailsFleet::SetLocation(const Fleet * fleet)
{
	string t;
	t = fleet->GetName(TheGame->GetCurrentPlayer());
	if (!t.empty())
		t = " - " + t;

	t = "Details" + t;
	GetParent()->SetTitle(t.c_str());
}
