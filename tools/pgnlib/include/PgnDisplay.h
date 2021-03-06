#pragma once

/**
 * @file PgnDisplay.h
 * @author bigillu
 * @brief Displays the extracted pgn game moves
 * @version 0.1
 * @date 2019-03-23
 *
 * @copyright Copyright (c) 2019
 *
 */

/*! Headers */
#include "DataTypes.h"

namespace PgnLib {
/**
 * @brief Displays the extracted the pgn move maps
 *
 */
class PgnDisplay {
 public:
  /**
   * @brief	Constructor that takes a parameter.
   *
   * @param	parameter	Parameter Description.
   */
  PgnDisplay(PgnMoveMaps* data);

  /**
   * @brief	Destructor that destroys the necessary.
   *
   */
  ~PgnDisplay();

  /**
   * @brief	Print the move maps of all the games
   * in the pgn file.
   *
   * @return void
   */
  void PrintGameMaps() const;

 private:
  std::unique_ptr<PgnMoveMaps> mDisplayData;
};
}  // namespace PgnLib