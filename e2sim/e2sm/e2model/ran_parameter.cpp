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

#include "ran_parameter.hpp"

#include <algorithm>

int RANParameter::getParamId() {
    return paramId;
}

std::string const &RANParameter::getParamName() const {
    return paramName;
}

ran_parameter_type_e RANParameter::getParamType() {
    return paramType;
}

void RANParameter::addSubParameter(std::shared_ptr<RANParameter> sub_parameter) {
    subParameters.emplace_back(sub_parameter);
}

std::shared_ptr<RANParameter> const RANParameter::getSubParameter(int subparam_id) const {
    for (auto &subparam : subParameters) {
        if (subparam->getParamId() == subparam_id) {
            return subparam;
        }
    }

    return std::shared_ptr<RANParameter>();
}

std::vector<std::shared_ptr<RANParameter>> const RANParameter::getSubParameters() const {
    return subParameters;
}
