
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSEC_POLICY_MAP_MIB.hpp"

namespace ydk {
namespace CISCO_IPSEC_POLICY_MAP_MIB {

CiscoIpsecPolicyMapMib::CiscoIpsecPolicyMapMib()
    :
    ikepolmaptable(std::make_shared<CiscoIpsecPolicyMapMib::Ikepolmaptable>())
	,ipsecpolmaptable(std::make_shared<CiscoIpsecPolicyMapMib::Ipsecpolmaptable>())
{
    ikepolmaptable->parent = this;

    ipsecpolmaptable->parent = this;

    yang_name = "CISCO-IPSEC-POLICY-MAP-MIB"; yang_parent_name = "CISCO-IPSEC-POLICY-MAP-MIB";
}

CiscoIpsecPolicyMapMib::~CiscoIpsecPolicyMapMib()
{
}

bool CiscoIpsecPolicyMapMib::has_data() const
{
    return (ikepolmaptable !=  nullptr && ikepolmaptable->has_data())
	|| (ipsecpolmaptable !=  nullptr && ipsecpolmaptable->has_data());
}

bool CiscoIpsecPolicyMapMib::has_operation() const
{
    return is_set(operation)
	|| (ikepolmaptable !=  nullptr && ikepolmaptable->has_operation())
	|| (ipsecpolmaptable !=  nullptr && ipsecpolmaptable->has_operation());
}

std::string CiscoIpsecPolicyMapMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpsecPolicyMapMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecPolicyMapMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ikePolMapTable")
    {
        if(ikepolmaptable == nullptr)
        {
            ikepolmaptable = std::make_shared<CiscoIpsecPolicyMapMib::Ikepolmaptable>();
        }
        return ikepolmaptable;
    }

    if(child_yang_name == "ipSecPolMapTable")
    {
        if(ipsecpolmaptable == nullptr)
        {
            ipsecpolmaptable = std::make_shared<CiscoIpsecPolicyMapMib::Ipsecpolmaptable>();
        }
        return ipsecpolmaptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecPolicyMapMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ikepolmaptable != nullptr)
    {
        children["ikePolMapTable"] = ikepolmaptable;
    }

    if(ipsecpolmaptable != nullptr)
    {
        children["ipSecPolMapTable"] = ipsecpolmaptable;
    }

    return children;
}

void CiscoIpsecPolicyMapMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIpsecPolicyMapMib::clone_ptr() const
{
    return std::make_shared<CiscoIpsecPolicyMapMib>();
}

std::string CiscoIpsecPolicyMapMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpsecPolicyMapMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpsecPolicyMapMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmaptable()
{
    yang_name = "ikePolMapTable"; yang_parent_name = "CISCO-IPSEC-POLICY-MAP-MIB";
}

CiscoIpsecPolicyMapMib::Ikepolmaptable::~Ikepolmaptable()
{
}

bool CiscoIpsecPolicyMapMib::Ikepolmaptable::has_data() const
{
    for (std::size_t index=0; index<ikepolmapentry.size(); index++)
    {
        if(ikepolmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecPolicyMapMib::Ikepolmaptable::has_operation() const
{
    for (std::size_t index=0; index<ikepolmapentry.size(); index++)
    {
        if(ikepolmapentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecPolicyMapMib::Ikepolmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ikePolMapTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecPolicyMapMib::Ikepolmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecPolicyMapMib::Ikepolmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ikePolMapEntry")
    {
        for(auto const & c : ikepolmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry>();
        c->parent = this;
        ikepolmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecPolicyMapMib::Ikepolmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ikepolmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecPolicyMapMib::Ikepolmaptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry::Ikepolmapentry()
    :
    ikepolmaptunindex{YType::int32, "ikePolMapTunIndex"},
    ikepolmappolicynum{YType::int32, "ikePolMapPolicyNum"}
{
    yang_name = "ikePolMapEntry"; yang_parent_name = "ikePolMapTable";
}

CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry::~Ikepolmapentry()
{
}

bool CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry::has_data() const
{
    return ikepolmaptunindex.is_set
	|| ikepolmappolicynum.is_set;
}

bool CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ikepolmaptunindex.operation)
	|| is_set(ikepolmappolicynum.operation);
}

std::string CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ikePolMapEntry" <<"[ikePolMapTunIndex='" <<ikepolmaptunindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB/ikePolMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ikepolmaptunindex.is_set || is_set(ikepolmaptunindex.operation)) leaf_name_data.push_back(ikepolmaptunindex.get_name_leafdata());
    if (ikepolmappolicynum.is_set || is_set(ikepolmappolicynum.operation)) leaf_name_data.push_back(ikepolmappolicynum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ikePolMapTunIndex")
    {
        ikepolmaptunindex = value;
    }
    if(value_path == "ikePolMapPolicyNum")
    {
        ikepolmappolicynum = value;
    }
}

CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmaptable()
{
    yang_name = "ipSecPolMapTable"; yang_parent_name = "CISCO-IPSEC-POLICY-MAP-MIB";
}

CiscoIpsecPolicyMapMib::Ipsecpolmaptable::~Ipsecpolmaptable()
{
}

bool CiscoIpsecPolicyMapMib::Ipsecpolmaptable::has_data() const
{
    for (std::size_t index=0; index<ipsecpolmapentry.size(); index++)
    {
        if(ipsecpolmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecPolicyMapMib::Ipsecpolmaptable::has_operation() const
{
    for (std::size_t index=0; index<ipsecpolmapentry.size(); index++)
    {
        if(ipsecpolmapentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecPolicyMapMib::Ipsecpolmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipSecPolMapTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecPolicyMapMib::Ipsecpolmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecPolicyMapMib::Ipsecpolmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipSecPolMapEntry")
    {
        for(auto const & c : ipsecpolmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry>();
        c->parent = this;
        ipsecpolmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecPolicyMapMib::Ipsecpolmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipsecpolmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecPolicyMapMib::Ipsecpolmaptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry::Ipsecpolmapentry()
    :
    ipsecpolmaptunindex{YType::int32, "ipSecPolMapTunIndex"},
    ipsecpolmapacestring{YType::str, "ipSecPolMapAceString"},
    ipsecpolmapaclstring{YType::str, "ipSecPolMapAclString"},
    ipsecpolmapcryptomapname{YType::str, "ipSecPolMapCryptoMapName"},
    ipsecpolmapcryptomapnum{YType::int32, "ipSecPolMapCryptoMapNum"}
{
    yang_name = "ipSecPolMapEntry"; yang_parent_name = "ipSecPolMapTable";
}

CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry::~Ipsecpolmapentry()
{
}

bool CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry::has_data() const
{
    return ipsecpolmaptunindex.is_set
	|| ipsecpolmapacestring.is_set
	|| ipsecpolmapaclstring.is_set
	|| ipsecpolmapcryptomapname.is_set
	|| ipsecpolmapcryptomapnum.is_set;
}

bool CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsecpolmaptunindex.operation)
	|| is_set(ipsecpolmapacestring.operation)
	|| is_set(ipsecpolmapaclstring.operation)
	|| is_set(ipsecpolmapcryptomapname.operation)
	|| is_set(ipsecpolmapcryptomapnum.operation);
}

std::string CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipSecPolMapEntry" <<"[ipSecPolMapTunIndex='" <<ipsecpolmaptunindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB/ipSecPolMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsecpolmaptunindex.is_set || is_set(ipsecpolmaptunindex.operation)) leaf_name_data.push_back(ipsecpolmaptunindex.get_name_leafdata());
    if (ipsecpolmapacestring.is_set || is_set(ipsecpolmapacestring.operation)) leaf_name_data.push_back(ipsecpolmapacestring.get_name_leafdata());
    if (ipsecpolmapaclstring.is_set || is_set(ipsecpolmapaclstring.operation)) leaf_name_data.push_back(ipsecpolmapaclstring.get_name_leafdata());
    if (ipsecpolmapcryptomapname.is_set || is_set(ipsecpolmapcryptomapname.operation)) leaf_name_data.push_back(ipsecpolmapcryptomapname.get_name_leafdata());
    if (ipsecpolmapcryptomapnum.is_set || is_set(ipsecpolmapcryptomapnum.operation)) leaf_name_data.push_back(ipsecpolmapcryptomapnum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipSecPolMapTunIndex")
    {
        ipsecpolmaptunindex = value;
    }
    if(value_path == "ipSecPolMapAceString")
    {
        ipsecpolmapacestring = value;
    }
    if(value_path == "ipSecPolMapAclString")
    {
        ipsecpolmapaclstring = value;
    }
    if(value_path == "ipSecPolMapCryptoMapName")
    {
        ipsecpolmapcryptomapname = value;
    }
    if(value_path == "ipSecPolMapCryptoMapNum")
    {
        ipsecpolmapcryptomapnum = value;
    }
}


}
}

