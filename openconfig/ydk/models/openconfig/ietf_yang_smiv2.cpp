
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_yang_smiv2.hpp"

using namespace ydk;

namespace openconfig {
namespace ietf_yang_smiv2 {

ObjectIdentity::ObjectIdentity()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-yang-smiv2", "ietf-yang-smiv2", "ietf-yang-smiv2:object-identity")
{
}

ObjectIdentity::~ObjectIdentity()
{
}


}
}

