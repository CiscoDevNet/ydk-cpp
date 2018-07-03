#ifndef _ENTITY_LOOKUP_
#define _ENTITY_LOOKUP_

#include <map>
#include <string>
#include <vector>
#include <unordered_map>

namespace cisco_nx_os
{

void cisco_nx_os_augment_lookup_tables();
extern std::map<std::pair<std::string, std::string>, std::string> cisco_nx_os_namespace_identity_lookup;

}

#endif /* _ENTITY_LOOKUP_ */
