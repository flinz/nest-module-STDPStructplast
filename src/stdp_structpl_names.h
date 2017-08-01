/*
 *  stdp_structpl_names.h
 *
 *  This file is part of STDPStructplast.
 *
 *  Copyright (C) 2017, see AUTHORS.
 *
 *  STDPStructplast is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  STDPStructplast is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with STDPStructplast.  If not, see <http://www.gnu.org/licenses/>.
 *
 * For more information see: https://github.com/flinz/nest-module-STDPStructplast
 */

#ifndef STDPSTRUCTPL_NAMES_H
#define STDPSTRUCTPL_NAMES_H

#include "name.h"

namespace stdpstructpl
{
  /**
   * This namespace contains global Name objects. These can be used in
   * Node::get_status and Node::set_status to make data exchange
   * more efficient and consistent. Creating a Name from a std::string
   * is in O(log n), for n the number of Names already created. Using
   * predefined names should make data exchange much more efficient.
   */
  namespace names
  {
    // names specific to structural plasticity model stdp_spl_synapse
    extern const Name tau_slow;
    extern const Name tau;
    extern const Name A2_corr;
    extern const Name A4_post;
    extern const Name A4_corr;
    extern const Name alpha;
    extern const Name lambda;
    extern const Name w0;
    extern const Name wmax;
    extern const Name p_fail;
    extern const Name t_cache;
    extern const Name t_grace_period;
    extern const Name safe_mode;
    extern const Name sleep_mode;
    extern const Name n_pot_conns;
    extern const Name n_create;
    extern const Name n_delete;
    extern const Name w_jk;
    extern const Name r_post_jk;
    extern const Name R_post_jk;
    extern const Name c_jk;
    extern const Name r_jk;
    extern const Name w_create_steps;
  }
}
#endif
