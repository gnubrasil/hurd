# Copyright (C) 1991, 93, 94, 95, 96, 2000, 2012 Free Software Foundation, Inc.
#
# This file is part of the GNU Hurd.
#
# The GNU Hurd is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
#
# The GNU Hurd is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with the GNU Hurd; see the file COPYING.  If not, write to
# the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.


# Copyright (C) 1991, 93, 94, 95, 96, 2000, 2012 Free Software Foundation, Inc.
#
# Este arquivo faz parte do GNU Hurd.
#
# O GNU Hurd é um software livre; você pode redistribuí-lo e / ou modificar
# sob os termos da GNU General Public License publicada por
# a Fundação para o Software Livre; ou a versão 2, ou (por sua opção)
# qualquer versão posterior.
#
# O GNU Hurd é distribuído na esperança de ser útil,
# mas SEM QUALQUER GARANTIA; sem mesmo a garantia implícita de
# COMERCIABILIDADE ou ADEQUAÇÃO A UMA FINALIDADE ESPECÍFICA. Veja o
# GNU General Public License para mais detalhes.
#
# Você deve ter recebido uma cópia da Licença Pública Geral GNU
# junto com o GNU Hurd; veja o arquivo COPYING. Se não, escreva para
# the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, EUA.
dir := auth
makemode := server

SRCS = auth.c
OBJS = auth.o authServer.o auth_replyUser.o
target = auth
HURDLIBS = ports ihash shouldbeinlibc
LDLIBS = -lpthread

MIGSFLAGS = -imacros $(srcdir)/mig-mutate.h

include ../Makeconf
