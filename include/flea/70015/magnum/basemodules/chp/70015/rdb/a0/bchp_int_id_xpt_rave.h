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
 * $brcm_Workfile: bchp_int_id_xpt_rave.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:09p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:42 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_int_id_xpt_rave.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:09p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#include "bchp.h"
#include "bchp_xpt_rave.h"

#ifndef BCHP_INT_ID_XPT_RAVE_H__
#define BCHP_INT_ID_XPT_RAVE_H__

#define BCHP_INT_ID_XPT_RAVE_CC_ERROR_INT     BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_CC_ERROR_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_CDB_LOWER_THRESH_INT BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_CDB_LOWER_THRESH_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_CDB_OVERFLOW_INT BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_CDB_OVERFLOW_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_CDB_UPPER_THRESH_INT BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_CDB_UPPER_THRESH_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_EMU_ERROR_INT    BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_EMU_ERROR_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_ITB_LOWER_THRESH_INT BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_ITB_LOWER_THRESH_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_ITB_OVERFLOW_INT BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_ITB_OVERFLOW_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_ITB_UPPER_THRESH_INT BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_ITB_UPPER_THRESH_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_LAST_CMD_INT     BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_LAST_CMD_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_PUSI_ERROR_INT   BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_PUSI_ERROR_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_SCD_INDEX        BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_SCD_INDEX_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_SPLICE_INT       BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_SPLICE_INT_SHIFT)
#define BCHP_INT_ID_XPT_RAVE_TEI_ERROR_INT    BCHP_INT_ID_CREATE(BCHP_XPT_RAVE_INT_CX5, BCHP_XPT_RAVE_INT_CX5_TEI_ERROR_INT_SHIFT)

#endif /* #ifndef BCHP_INT_ID_XPT_RAVE_H__ */

/* End of File */
