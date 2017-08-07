#ifndef _ENTITY_LOOKUP_
#define _ENTITY_LOOKUP_

#include <map>
#include <string>

namespace ietf
{

void ietf_augment_lookup_tables();
extern std::map<std::pair<std::string, std::string>, std::string> ietf_namespace_identity_lookup;

}

#endif /* _ENTITY_LOOKUP_ */
