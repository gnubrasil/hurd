/*
   Copyright (C) 2014 Free Software Foundation, Inc.
   Written by Justus Winter.

   This file is part of the GNU Hurd.

   The GNU Hurd is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2, or (at
   your option) any later version.

   The GNU Hurd is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with the GNU Hurd.  If not, see <http://www.gnu.org/licenses/>.  */
/*
    Copyright (C) 2014 Free Software Foundation, Inc.
    Escrito por Justus Winter.
    Este arquivo faz parte do GNU Hurd.
    O GNU Hurd é um software livre; você pode redistribuí-lo e / ou
    modifique-o sob os termos da GNU General Public License como
    publicado pela Free Software Foundation; ou versão 2, ou (em
    sua opção) qualquer versão posterior.
    O GNU Hurd é distribuído na esperança de que seja útil, mas
    SEM QUALQUER GARANTIA; sem mesmo a garantia implícita de
    COMERCIABILIDADE ou ADEQUAÇÃO A UM DETERMINADO FIM. Veja o GNU
    Licença Pública Geral para mais detalhes.
    Você deve ter recebido uma cópia da Licença Pública Geral GNU
    junto com o GNU Hurd. Caso contrário, consulte <http://www.gnu.org/licenses/>. */

#ifndef __AUTH_H__
#define __AUTH_H__

#include <hurd/ports.h>

extern struct port_bucket *auth_bucket;
extern struct port_class *authhandle_portclass;

#endif /* __AUTH_H__ */
