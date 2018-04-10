
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_xe_ietf_yang_push_ext.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_xe_ietf_yang_push_ext {

EncodeTdl::EncodeTdl()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-xe-ietf-yang-push-ext", "cisco-xe-ietf-yang-push-ext", "cisco-xe-ietf-yang-push-ext:encode-tdl")
{

}

EncodeTdl::~EncodeTdl()
{
}

TdlStream::TdlStream()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-xe-ietf-yang-push-ext", "cisco-xe-ietf-yang-push-ext", "cisco-xe-ietf-yang-push-ext:tdl-stream")
{

}

TdlStream::~TdlStream()
{
}


}
}

