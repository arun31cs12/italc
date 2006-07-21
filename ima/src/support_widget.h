/*
 * support_widget.h - declaration of support-widget for side-bar
 *
 * Copyright (c) 2006 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 *
 * This file is part of iTALC - http://italc.sourceforge.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */


#ifndef _SUPPORT_WIDGET_H
#define _SUPPORT_WIDGET_H

#include "dialogs/support.uic"
#include "side_bar_widget.h"


class supportWidget : public sideBarWidget
{
	Q_OBJECT
public:
	supportWidget( mainWindow * _main_window, QWidget * _parent );


private slots:
	void supportBtnClicked( void );

} ;




class supportDialog : public QDialog, Ui::support
{
public:
	supportDialog( void ) : QDialog()
	{
		setupUi( this );
	}

	static QString getHost( void )
	{
		supportDialog sd;
		if( sd.exec() == Accepted )
		
		{
			return( sd.hostEdit->text() );
		}
		return( "" );
	}

} ;


#endif