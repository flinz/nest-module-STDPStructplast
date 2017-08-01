/*
 *  stdp_structpl_module.h
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

#ifndef STDPSTRUCTPLMODULE_H
#define STDPSTRUCTPLMODULE_H

// Includes from sli:
#include "slifunction.h"
#include "slimodule.h"

// Put your stuff into your own namespace.
namespace stdpstructpl
{

/**
 * Class defining your model.
 * @note For each model, you must define one such class, with a unique name.
 */
class STDPStructplastModule : public SLIModule
{
public:
  // Interface functions ------------------------------------------

  /**
   * @note The constructor registers the module with the dynamic loader.
   *       Initialization proper is performed by the init() method.
   */
  STDPStructplastModule();

  /**
   * @note The destructor does not do much in modules.
   */
  ~STDPStructplastModule();

  /**
   * Initialize module.
   * @param SLIInterpreter* SLI interpreter
   */
  void init( SLIInterpreter* );

  /**
   * Return the name of your model.
   */
  const std::string name( void ) const;

  /**
   * Return the name of a sli file to execute when STDPStructplastModule is loaded.
   * This mechanism can be used to define SLI commands associated with your
   * module, in particular, set up type tries for functions you have defined.
   */
  const std::string commandstring( void ) const;
};
} // namespace stdpstructpl

#endif
