/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 **********************************************************************
 * This file is part of the crystalhd device driver.
 *
 * This driver is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 *
 * This driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this driver.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************
 *
 * $brcm_Workfile: bchp_int_id_timer.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:08p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:39 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          unknown
 *                 RDB Parser           3.0
 *                 generate_int_id.pl   1.0
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_int_id_timer.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:08p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#include "bchp.h"
#include "bchp_timer.h"

#ifndef BCHP_INT_ID_TIMER_H__
#define BCHP_INT_ID_TIMER_H__

#define BCHP_INT_ID_TMR0TO                    BCHP_INT_ID_CREATE(BCHP_TIMER_TIMER_IS, BCHP_TIMER_TIMER_IS_TMR0TO_SHIFT)
#define BCHP_INT_ID_TMR1TO                    BCHP_INT_ID_CREATE(BCHP_TIMER_TIMER_IS, BCHP_TIMER_TIMER_IS_TMR1TO_SHIFT)
#define BCHP_INT_ID_TMR2TO                    BCHP_INT_ID_CREATE(BCHP_TIMER_TIMER_IS, BCHP_TIMER_TIMER_IS_TMR2TO_SHIFT)
#define BCHP_INT_ID_TMR3TO                    BCHP_INT_ID_CREATE(BCHP_TIMER_TIMER_IS, BCHP_TIMER_TIMER_IS_TMR3TO_SHIFT)
#define BCHP_INT_ID_WDINT                     BCHP_INT_ID_CREATE(BCHP_TIMER_TIMER_IS, BCHP_TIMER_TIMER_IS_WDINT_SHIFT)

#endif /* #ifndef BCHP_INT_ID_TIMER_H__ */

/* End of File */
