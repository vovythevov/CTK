/*=============================================================================

  Library: CTK

  Copyright (c) 2010 German Cancer Research Center,
    Division of Medical and Biological Informatics

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/

#include "ctkQtServiceRegistration_p.h"
#include "ctkQtServiceRegistrationPrivate.h"

#include <QServiceInterfaceDescriptor>


  ctkQtServiceRegistration::ctkQtServiceRegistration(ctkPluginPrivate* plugin,
                                               QtMobility::QServiceInterfaceDescriptor serviceDescriptor,
                                               const ServiceProperties& props)
    : ctkServiceRegistration(*new ctkQtServiceRegistrationPrivate(this, plugin, serviceDescriptor, props))
  {

  }


