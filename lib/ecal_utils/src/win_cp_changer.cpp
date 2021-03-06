/* ========================= eCAL LICENSE =================================
*
* Copyright (C) 2016 - 2019 Continental Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
*      http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* ========================= eCAL LICENSE =================================
*/

#include <ecal_utils/win_cp_changer.h>

#ifdef WIN32

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>

namespace EcalUtils
{
  // Constructor
  WinCpChanger::WinCpChanger(const int target_cp)
  {
    initial_cp = GetConsoleOutputCP();
    SetConsoleOutputCP(target_cp);
  }

  // Destructor
  WinCpChanger::~WinCpChanger()
  {
    SetConsoleOutputCP(initial_cp);
  }
}

#endif // WIN32