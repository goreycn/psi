/*
 * aboutdlg.h
 * Copyright (C) 2001-2003  Justin Karneges, Michail Pishchagin
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef ABOUTDLG_H
#define ABOUTDLG_H

#include <QDialog>

#include "ui_about.h"

class AboutDlg : public QDialog
{
public:
	AboutDlg(QWidget*);

protected:
	QString loadText( const QString & fileName );
	QString details( QString name, QString email, QString jabber, QString www, QString desc );

private:
	Ui::AboutDlg ui_;
};

#endif