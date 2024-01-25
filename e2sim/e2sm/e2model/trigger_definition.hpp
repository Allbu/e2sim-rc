/*****************************************************************************
#                                                                            *
# Copyright 2023 Alexandre Huff                                              *
#                                                                            *
# Licensed under the Apache License, Version 2.0 (the "License");            *
# you may not use this file except in compliance with the License.           *
# You may obtain a copy of the License at                                    *
#                                                                            *
#      http://www.apache.org/licenses/LICENSE-2.0                            *
#                                                                            *
# Unless required by applicable law or agreed to in writing, software        *
# distributed under the License is distributed on an "AS IS" BASIS,          *
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
# See the License for the specific language governing permissions and        *
# limitations under the License.                                             *
#                                                                            *
******************************************************************************/

#ifndef TRIGGER_DEFINITION_HPP
#define TRIGGER_DEFINITION_HPP

#include <string>

#include <envman/environment_manager.h>

class TriggerDefinition {
public:
    TriggerDefinition(int style_type, std::string style_name) : styleType(style_type), styleName(style_name) { }

    int getStyleType();
    std::string getStyleName();

private:
    int styleType;
    std::string styleName;

};

#endif