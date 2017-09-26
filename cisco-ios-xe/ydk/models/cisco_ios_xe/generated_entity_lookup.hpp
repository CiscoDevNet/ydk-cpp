#ifndef _ENTITY_LOOKUP_
#define _ENTITY_LOOKUP_

#include <map>
#include <string>
#include <vector>
#include <unordered_map>

namespace cisco_ios_xe
{

void cisco_ios_xe_augment_lookup_tables();
extern std::map<std::pair<std::string, std::string>, std::string> cisco_ios_xe_namespace_identity_lookup;

}

#endif /* _ENTITY_LOOKUP_ */
