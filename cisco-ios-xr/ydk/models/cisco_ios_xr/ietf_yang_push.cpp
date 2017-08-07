
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_yang_push.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace ietf_yang_push {

YangPush::YangPush()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-yang-push", "ietf-yang-push", "ietf-yang-push:yang-push")
{
}

YangPush::~YangPush()
{
}

CustomStream::CustomStream()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-yang-push", "ietf-yang-push", "ietf-yang-push:custom-stream")
{
}

CustomStream::~CustomStream()
{
}

ErrorDataNotAuthorized::ErrorDataNotAuthorized()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-yang-push", "ietf-yang-push", "ietf-yang-push:error-data-not-authorized")
{
}

ErrorDataNotAuthorized::~ErrorDataNotAuthorized()
{
}

Http2::Http2()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-yang-push", "ietf-yang-push", "ietf-yang-push:http2")
{
}

Http2::~Http2()
{
}

const Enum::YLeaf ChangeType::create {0, "create"};
const Enum::YLeaf ChangeType::delete_ {1, "delete"};
const Enum::YLeaf ChangeType::modify {2, "modify"};


}
}

