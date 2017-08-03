#ifndef _ENTITY_LOOKUP_
#define _ENTITY_LOOKUP_

#include <map>
#include <string>

namespace cisco_ios_xr
{

void cisco_ios_xr_augment_lookup_tables();
extern std::map<std::pair<std::string, std::string>, std::string> cisco_ios_xr_namespace_identity_lookup;

}

#endif /* _ENTITY_LOOKUP_ */
