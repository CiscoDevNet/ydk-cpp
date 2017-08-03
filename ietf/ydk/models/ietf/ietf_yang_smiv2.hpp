#ifndef _IETF_YANG_SMIV2_
#define _IETF_YANG_SMIV2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ietf {
namespace ietf_yang_smiv2 {

class ObjectIdentity : public virtual ydk::Identity
{
    public:
        ObjectIdentity();
        ~ObjectIdentity();


}; // ObjectIdentity


}
}

#endif /* _IETF_YANG_SMIV2_ */

