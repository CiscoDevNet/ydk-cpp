
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CDP_MIB.hpp"

namespace ydk {
namespace CISCO_CDP_MIB {

CiscoCdpMib::CiscoCdpMib()
    :
    cdpcachetable_(std::make_shared<CiscoCdpMib::Cdpcachetable>())
	,cdpctaddresstable_(std::make_shared<CiscoCdpMib::Cdpctaddresstable>())
	,cdpglobal_(std::make_shared<CiscoCdpMib::Cdpglobal>())
	,cdpinterfaceexttable_(std::make_shared<CiscoCdpMib::Cdpinterfaceexttable>())
	,cdpinterfacetable_(std::make_shared<CiscoCdpMib::Cdpinterfacetable>())
{
    cdpcachetable_->parent = this;

    cdpctaddresstable_->parent = this;

    cdpglobal_->parent = this;

    cdpinterfaceexttable_->parent = this;

    cdpinterfacetable_->parent = this;

    yang_name = "CISCO-CDP-MIB"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::~CiscoCdpMib()
{
}

bool CiscoCdpMib::has_data() const
{
    return (cdpcachetable_ !=  nullptr && cdpcachetable_->has_data())
	|| (cdpctaddresstable_ !=  nullptr && cdpctaddresstable_->has_data())
	|| (cdpglobal_ !=  nullptr && cdpglobal_->has_data())
	|| (cdpinterfaceexttable_ !=  nullptr && cdpinterfaceexttable_->has_data())
	|| (cdpinterfacetable_ !=  nullptr && cdpinterfacetable_->has_data());
}

bool CiscoCdpMib::has_operation() const
{
    return is_set(operation)
	|| (cdpcachetable_ !=  nullptr && cdpcachetable_->has_operation())
	|| (cdpctaddresstable_ !=  nullptr && cdpctaddresstable_->has_operation())
	|| (cdpglobal_ !=  nullptr && cdpglobal_->has_operation())
	|| (cdpinterfaceexttable_ !=  nullptr && cdpinterfaceexttable_->has_operation())
	|| (cdpinterfacetable_ !=  nullptr && cdpinterfacetable_->has_operation());
}

std::string CiscoCdpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoCdpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpCacheTable")
    {
        if(cdpcachetable_ == nullptr)
        {
            cdpcachetable_ = std::make_shared<CiscoCdpMib::Cdpcachetable>();
        }
        return cdpcachetable_;
    }

    if(child_yang_name == "cdpCtAddressTable")
    {
        if(cdpctaddresstable_ == nullptr)
        {
            cdpctaddresstable_ = std::make_shared<CiscoCdpMib::Cdpctaddresstable>();
        }
        return cdpctaddresstable_;
    }

    if(child_yang_name == "cdpGlobal")
    {
        if(cdpglobal_ == nullptr)
        {
            cdpglobal_ = std::make_shared<CiscoCdpMib::Cdpglobal>();
        }
        return cdpglobal_;
    }

    if(child_yang_name == "cdpInterfaceExtTable")
    {
        if(cdpinterfaceexttable_ == nullptr)
        {
            cdpinterfaceexttable_ = std::make_shared<CiscoCdpMib::Cdpinterfaceexttable>();
        }
        return cdpinterfaceexttable_;
    }

    if(child_yang_name == "cdpInterfaceTable")
    {
        if(cdpinterfacetable_ == nullptr)
        {
            cdpinterfacetable_ = std::make_shared<CiscoCdpMib::Cdpinterfacetable>();
        }
        return cdpinterfacetable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cdpcachetable_ != nullptr)
    {
        children["cdpCacheTable"] = cdpcachetable_;
    }

    if(cdpctaddresstable_ != nullptr)
    {
        children["cdpCtAddressTable"] = cdpctaddresstable_;
    }

    if(cdpglobal_ != nullptr)
    {
        children["cdpGlobal"] = cdpglobal_;
    }

    if(cdpinterfaceexttable_ != nullptr)
    {
        children["cdpInterfaceExtTable"] = cdpinterfaceexttable_;
    }

    if(cdpinterfacetable_ != nullptr)
    {
        children["cdpInterfaceTable"] = cdpinterfacetable_;
    }

    return children;
}

void CiscoCdpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoCdpMib::clone_ptr() const
{
    return std::make_shared<CiscoCdpMib>();
}

std::string CiscoCdpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoCdpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoCdpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoCdpMib::Cdpglobal::Cdpglobal()
    :
    cdpglobaldeviceid{YType::str, "cdpGlobalDeviceId"},
    cdpglobaldeviceidformat{YType::enumeration, "cdpGlobalDeviceIdFormat"},
    cdpglobaldeviceidformatcpb{YType::bits, "cdpGlobalDeviceIdFormatCpb"},
    cdpglobalholdtime{YType::int32, "cdpGlobalHoldTime"},
    cdpgloballastchange{YType::uint32, "cdpGlobalLastChange"},
    cdpglobalmessageinterval{YType::int32, "cdpGlobalMessageInterval"},
    cdpglobalrun{YType::boolean, "cdpGlobalRun"}
{
    yang_name = "cdpGlobal"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpglobal::~Cdpglobal()
{
}

bool CiscoCdpMib::Cdpglobal::has_data() const
{
    return cdpglobaldeviceid.is_set
	|| cdpglobaldeviceidformat.is_set
	|| cdpglobaldeviceidformatcpb.is_set
	|| cdpglobalholdtime.is_set
	|| cdpgloballastchange.is_set
	|| cdpglobalmessageinterval.is_set
	|| cdpglobalrun.is_set;
}

bool CiscoCdpMib::Cdpglobal::has_operation() const
{
    return is_set(operation)
	|| is_set(cdpglobaldeviceid.operation)
	|| is_set(cdpglobaldeviceidformat.operation)
	|| is_set(cdpglobaldeviceidformatcpb.operation)
	|| is_set(cdpglobalholdtime.operation)
	|| is_set(cdpgloballastchange.operation)
	|| is_set(cdpglobalmessageinterval.operation)
	|| is_set(cdpglobalrun.operation);
}

std::string CiscoCdpMib::Cdpglobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpGlobal";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpglobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpglobaldeviceid.is_set || is_set(cdpglobaldeviceid.operation)) leaf_name_data.push_back(cdpglobaldeviceid.get_name_leafdata());
    if (cdpglobaldeviceidformat.is_set || is_set(cdpglobaldeviceidformat.operation)) leaf_name_data.push_back(cdpglobaldeviceidformat.get_name_leafdata());
    if (cdpglobaldeviceidformatcpb.is_set || is_set(cdpglobaldeviceidformatcpb.operation)) leaf_name_data.push_back(cdpglobaldeviceidformatcpb.get_name_leafdata());
    if (cdpglobalholdtime.is_set || is_set(cdpglobalholdtime.operation)) leaf_name_data.push_back(cdpglobalholdtime.get_name_leafdata());
    if (cdpgloballastchange.is_set || is_set(cdpgloballastchange.operation)) leaf_name_data.push_back(cdpgloballastchange.get_name_leafdata());
    if (cdpglobalmessageinterval.is_set || is_set(cdpglobalmessageinterval.operation)) leaf_name_data.push_back(cdpglobalmessageinterval.get_name_leafdata());
    if (cdpglobalrun.is_set || is_set(cdpglobalrun.operation)) leaf_name_data.push_back(cdpglobalrun.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpglobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpglobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpglobal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdpGlobalDeviceId")
    {
        cdpglobaldeviceid = value;
    }
    if(value_path == "cdpGlobalDeviceIdFormat")
    {
        cdpglobaldeviceidformat = value;
    }
    if(value_path == "cdpGlobalDeviceIdFormatCpb")
    {
        cdpglobaldeviceidformatcpb[value] = true;
    }
    if(value_path == "cdpGlobalHoldTime")
    {
        cdpglobalholdtime = value;
    }
    if(value_path == "cdpGlobalLastChange")
    {
        cdpgloballastchange = value;
    }
    if(value_path == "cdpGlobalMessageInterval")
    {
        cdpglobalmessageinterval = value;
    }
    if(value_path == "cdpGlobalRun")
    {
        cdpglobalrun = value;
    }
}

CiscoCdpMib::Cdpinterfacetable::Cdpinterfacetable()
{
    yang_name = "cdpInterfaceTable"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpinterfacetable::~Cdpinterfacetable()
{
}

bool CiscoCdpMib::Cdpinterfacetable::has_data() const
{
    for (std::size_t index=0; index<cdpinterfaceentry_.size(); index++)
    {
        if(cdpinterfaceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCdpMib::Cdpinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<cdpinterfaceentry_.size(); index++)
    {
        if(cdpinterfaceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoCdpMib::Cdpinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceTable";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpInterfaceEntry")
    {
        for(auto const & c : cdpinterfaceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry>();
        c->parent = this;
        cdpinterfaceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdpinterfaceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCdpMib::Cdpinterfacetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::Cdpinterfaceentry()
    :
    cdpinterfaceifindex{YType::int32, "cdpInterfaceIfIndex"},
    cdpinterfaceenable{YType::boolean, "cdpInterfaceEnable"},
    cdpinterfacegroup{YType::int32, "cdpInterfaceGroup"},
    cdpinterfacemessageinterval{YType::int32, "cdpInterfaceMessageInterval"},
    cdpinterfacename{YType::str, "cdpInterfaceName"},
    cdpinterfaceport{YType::int32, "cdpInterfacePort"}
{
    yang_name = "cdpInterfaceEntry"; yang_parent_name = "cdpInterfaceTable";
}

CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::~Cdpinterfaceentry()
{
}

bool CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::has_data() const
{
    return cdpinterfaceifindex.is_set
	|| cdpinterfaceenable.is_set
	|| cdpinterfacegroup.is_set
	|| cdpinterfacemessageinterval.is_set
	|| cdpinterfacename.is_set
	|| cdpinterfaceport.is_set;
}

bool CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cdpinterfaceifindex.operation)
	|| is_set(cdpinterfaceenable.operation)
	|| is_set(cdpinterfacegroup.operation)
	|| is_set(cdpinterfacemessageinterval.operation)
	|| is_set(cdpinterfacename.operation)
	|| is_set(cdpinterfaceport.operation);
}

std::string CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceEntry" <<"[cdpInterfaceIfIndex='" <<cdpinterfaceifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpinterfaceifindex.is_set || is_set(cdpinterfaceifindex.operation)) leaf_name_data.push_back(cdpinterfaceifindex.get_name_leafdata());
    if (cdpinterfaceenable.is_set || is_set(cdpinterfaceenable.operation)) leaf_name_data.push_back(cdpinterfaceenable.get_name_leafdata());
    if (cdpinterfacegroup.is_set || is_set(cdpinterfacegroup.operation)) leaf_name_data.push_back(cdpinterfacegroup.get_name_leafdata());
    if (cdpinterfacemessageinterval.is_set || is_set(cdpinterfacemessageinterval.operation)) leaf_name_data.push_back(cdpinterfacemessageinterval.get_name_leafdata());
    if (cdpinterfacename.is_set || is_set(cdpinterfacename.operation)) leaf_name_data.push_back(cdpinterfacename.get_name_leafdata());
    if (cdpinterfaceport.is_set || is_set(cdpinterfaceport.operation)) leaf_name_data.push_back(cdpinterfaceport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdpInterfaceIfIndex")
    {
        cdpinterfaceifindex = value;
    }
    if(value_path == "cdpInterfaceEnable")
    {
        cdpinterfaceenable = value;
    }
    if(value_path == "cdpInterfaceGroup")
    {
        cdpinterfacegroup = value;
    }
    if(value_path == "cdpInterfaceMessageInterval")
    {
        cdpinterfacemessageinterval = value;
    }
    if(value_path == "cdpInterfaceName")
    {
        cdpinterfacename = value;
    }
    if(value_path == "cdpInterfacePort")
    {
        cdpinterfaceport = value;
    }
}

CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceexttable()
{
    yang_name = "cdpInterfaceExtTable"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpinterfaceexttable::~Cdpinterfaceexttable()
{
}

bool CiscoCdpMib::Cdpinterfaceexttable::has_data() const
{
    for (std::size_t index=0; index<cdpinterfaceextentry_.size(); index++)
    {
        if(cdpinterfaceextentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCdpMib::Cdpinterfaceexttable::has_operation() const
{
    for (std::size_t index=0; index<cdpinterfaceextentry_.size(); index++)
    {
        if(cdpinterfaceextentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoCdpMib::Cdpinterfaceexttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceExtTable";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpinterfaceexttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpinterfaceexttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpInterfaceExtEntry")
    {
        for(auto const & c : cdpinterfaceextentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry>();
        c->parent = this;
        cdpinterfaceextentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpinterfaceexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdpinterfaceextentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCdpMib::Cdpinterfaceexttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::Cdpinterfaceextentry()
    :
    ifindex{YType::str, "ifIndex"},
    cdpinterfacecosforuntrustedport{YType::uint32, "cdpInterfaceCosForUntrustedPort"},
    cdpinterfaceextendedtrust{YType::enumeration, "cdpInterfaceExtendedTrust"}
{
    yang_name = "cdpInterfaceExtEntry"; yang_parent_name = "cdpInterfaceExtTable";
}

CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::~Cdpinterfaceextentry()
{
}

bool CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::has_data() const
{
    return ifindex.is_set
	|| cdpinterfacecosforuntrustedport.is_set
	|| cdpinterfaceextendedtrust.is_set;
}

bool CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cdpinterfacecosforuntrustedport.operation)
	|| is_set(cdpinterfaceextendedtrust.operation);
}

std::string CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceExtEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpInterfaceExtTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdpinterfacecosforuntrustedport.is_set || is_set(cdpinterfacecosforuntrustedport.operation)) leaf_name_data.push_back(cdpinterfacecosforuntrustedport.get_name_leafdata());
    if (cdpinterfaceextendedtrust.is_set || is_set(cdpinterfaceextendedtrust.operation)) leaf_name_data.push_back(cdpinterfaceextendedtrust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cdpInterfaceCosForUntrustedPort")
    {
        cdpinterfacecosforuntrustedport = value;
    }
    if(value_path == "cdpInterfaceExtendedTrust")
    {
        cdpinterfaceextendedtrust = value;
    }
}

CiscoCdpMib::Cdpcachetable::Cdpcachetable()
{
    yang_name = "cdpCacheTable"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpcachetable::~Cdpcachetable()
{
}

bool CiscoCdpMib::Cdpcachetable::has_data() const
{
    for (std::size_t index=0; index<cdpcacheentry_.size(); index++)
    {
        if(cdpcacheentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCdpMib::Cdpcachetable::has_operation() const
{
    for (std::size_t index=0; index<cdpcacheentry_.size(); index++)
    {
        if(cdpcacheentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoCdpMib::Cdpcachetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCacheTable";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpcachetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpcachetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpCacheEntry")
    {
        for(auto const & c : cdpcacheentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCdpMib::Cdpcachetable::Cdpcacheentry>();
        c->parent = this;
        cdpcacheentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpcachetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdpcacheentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCdpMib::Cdpcachetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoCdpMib::Cdpcachetable::Cdpcacheentry::Cdpcacheentry()
    :
    cdpcacheifindex{YType::int32, "cdpCacheIfIndex"},
    cdpcachedeviceindex{YType::int32, "cdpCacheDeviceIndex"},
    cdpcacheaddress{YType::str, "cdpCacheAddress"},
    cdpcacheaddresstype{YType::enumeration, "cdpCacheAddressType"},
    cdpcacheapplianceid{YType::uint32, "cdpCacheApplianceID"},
    cdpcachecapabilities{YType::str, "cdpCacheCapabilities"},
    cdpcachedeviceid{YType::str, "cdpCacheDeviceId"},
    cdpcachedeviceport{YType::str, "cdpCacheDevicePort"},
    cdpcacheduplex{YType::enumeration, "cdpCacheDuplex"},
    cdpcachelastchange{YType::uint32, "cdpCacheLastChange"},
    cdpcachemtu{YType::uint32, "cdpCacheMTU"},
    cdpcachenativevlan{YType::int32, "cdpCacheNativeVLAN"},
    cdpcachephyslocation{YType::str, "cdpCachePhysLocation"},
    cdpcacheplatform{YType::str, "cdpCachePlatform"},
    cdpcachepowerconsumption{YType::uint32, "cdpCachePowerConsumption"},
    cdpcacheprimarymgmtaddr{YType::str, "cdpCachePrimaryMgmtAddr"},
    cdpcacheprimarymgmtaddrtype{YType::enumeration, "cdpCachePrimaryMgmtAddrType"},
    cdpcachesecondarymgmtaddr{YType::str, "cdpCacheSecondaryMgmtAddr"},
    cdpcachesecondarymgmtaddrtype{YType::enumeration, "cdpCacheSecondaryMgmtAddrType"},
    cdpcachesysname{YType::str, "cdpCacheSysName"},
    cdpcachesysobjectid{YType::str, "cdpCacheSysObjectID"},
    cdpcacheversion{YType::str, "cdpCacheVersion"},
    cdpcachevlanid{YType::uint32, "cdpCacheVlanID"},
    cdpcachevtpmgmtdomain{YType::str, "cdpCacheVTPMgmtDomain"}
{
    yang_name = "cdpCacheEntry"; yang_parent_name = "cdpCacheTable";
}

CiscoCdpMib::Cdpcachetable::Cdpcacheentry::~Cdpcacheentry()
{
}

bool CiscoCdpMib::Cdpcachetable::Cdpcacheentry::has_data() const
{
    return cdpcacheifindex.is_set
	|| cdpcachedeviceindex.is_set
	|| cdpcacheaddress.is_set
	|| cdpcacheaddresstype.is_set
	|| cdpcacheapplianceid.is_set
	|| cdpcachecapabilities.is_set
	|| cdpcachedeviceid.is_set
	|| cdpcachedeviceport.is_set
	|| cdpcacheduplex.is_set
	|| cdpcachelastchange.is_set
	|| cdpcachemtu.is_set
	|| cdpcachenativevlan.is_set
	|| cdpcachephyslocation.is_set
	|| cdpcacheplatform.is_set
	|| cdpcachepowerconsumption.is_set
	|| cdpcacheprimarymgmtaddr.is_set
	|| cdpcacheprimarymgmtaddrtype.is_set
	|| cdpcachesecondarymgmtaddr.is_set
	|| cdpcachesecondarymgmtaddrtype.is_set
	|| cdpcachesysname.is_set
	|| cdpcachesysobjectid.is_set
	|| cdpcacheversion.is_set
	|| cdpcachevlanid.is_set
	|| cdpcachevtpmgmtdomain.is_set;
}

bool CiscoCdpMib::Cdpcachetable::Cdpcacheentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cdpcacheifindex.operation)
	|| is_set(cdpcachedeviceindex.operation)
	|| is_set(cdpcacheaddress.operation)
	|| is_set(cdpcacheaddresstype.operation)
	|| is_set(cdpcacheapplianceid.operation)
	|| is_set(cdpcachecapabilities.operation)
	|| is_set(cdpcachedeviceid.operation)
	|| is_set(cdpcachedeviceport.operation)
	|| is_set(cdpcacheduplex.operation)
	|| is_set(cdpcachelastchange.operation)
	|| is_set(cdpcachemtu.operation)
	|| is_set(cdpcachenativevlan.operation)
	|| is_set(cdpcachephyslocation.operation)
	|| is_set(cdpcacheplatform.operation)
	|| is_set(cdpcachepowerconsumption.operation)
	|| is_set(cdpcacheprimarymgmtaddr.operation)
	|| is_set(cdpcacheprimarymgmtaddrtype.operation)
	|| is_set(cdpcachesecondarymgmtaddr.operation)
	|| is_set(cdpcachesecondarymgmtaddrtype.operation)
	|| is_set(cdpcachesysname.operation)
	|| is_set(cdpcachesysobjectid.operation)
	|| is_set(cdpcacheversion.operation)
	|| is_set(cdpcachevlanid.operation)
	|| is_set(cdpcachevtpmgmtdomain.operation);
}

std::string CiscoCdpMib::Cdpcachetable::Cdpcacheentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCacheEntry" <<"[cdpCacheIfIndex='" <<cdpcacheifindex <<"']" <<"[cdpCacheDeviceIndex='" <<cdpcachedeviceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpcachetable::Cdpcacheentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpCacheTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpcacheifindex.is_set || is_set(cdpcacheifindex.operation)) leaf_name_data.push_back(cdpcacheifindex.get_name_leafdata());
    if (cdpcachedeviceindex.is_set || is_set(cdpcachedeviceindex.operation)) leaf_name_data.push_back(cdpcachedeviceindex.get_name_leafdata());
    if (cdpcacheaddress.is_set || is_set(cdpcacheaddress.operation)) leaf_name_data.push_back(cdpcacheaddress.get_name_leafdata());
    if (cdpcacheaddresstype.is_set || is_set(cdpcacheaddresstype.operation)) leaf_name_data.push_back(cdpcacheaddresstype.get_name_leafdata());
    if (cdpcacheapplianceid.is_set || is_set(cdpcacheapplianceid.operation)) leaf_name_data.push_back(cdpcacheapplianceid.get_name_leafdata());
    if (cdpcachecapabilities.is_set || is_set(cdpcachecapabilities.operation)) leaf_name_data.push_back(cdpcachecapabilities.get_name_leafdata());
    if (cdpcachedeviceid.is_set || is_set(cdpcachedeviceid.operation)) leaf_name_data.push_back(cdpcachedeviceid.get_name_leafdata());
    if (cdpcachedeviceport.is_set || is_set(cdpcachedeviceport.operation)) leaf_name_data.push_back(cdpcachedeviceport.get_name_leafdata());
    if (cdpcacheduplex.is_set || is_set(cdpcacheduplex.operation)) leaf_name_data.push_back(cdpcacheduplex.get_name_leafdata());
    if (cdpcachelastchange.is_set || is_set(cdpcachelastchange.operation)) leaf_name_data.push_back(cdpcachelastchange.get_name_leafdata());
    if (cdpcachemtu.is_set || is_set(cdpcachemtu.operation)) leaf_name_data.push_back(cdpcachemtu.get_name_leafdata());
    if (cdpcachenativevlan.is_set || is_set(cdpcachenativevlan.operation)) leaf_name_data.push_back(cdpcachenativevlan.get_name_leafdata());
    if (cdpcachephyslocation.is_set || is_set(cdpcachephyslocation.operation)) leaf_name_data.push_back(cdpcachephyslocation.get_name_leafdata());
    if (cdpcacheplatform.is_set || is_set(cdpcacheplatform.operation)) leaf_name_data.push_back(cdpcacheplatform.get_name_leafdata());
    if (cdpcachepowerconsumption.is_set || is_set(cdpcachepowerconsumption.operation)) leaf_name_data.push_back(cdpcachepowerconsumption.get_name_leafdata());
    if (cdpcacheprimarymgmtaddr.is_set || is_set(cdpcacheprimarymgmtaddr.operation)) leaf_name_data.push_back(cdpcacheprimarymgmtaddr.get_name_leafdata());
    if (cdpcacheprimarymgmtaddrtype.is_set || is_set(cdpcacheprimarymgmtaddrtype.operation)) leaf_name_data.push_back(cdpcacheprimarymgmtaddrtype.get_name_leafdata());
    if (cdpcachesecondarymgmtaddr.is_set || is_set(cdpcachesecondarymgmtaddr.operation)) leaf_name_data.push_back(cdpcachesecondarymgmtaddr.get_name_leafdata());
    if (cdpcachesecondarymgmtaddrtype.is_set || is_set(cdpcachesecondarymgmtaddrtype.operation)) leaf_name_data.push_back(cdpcachesecondarymgmtaddrtype.get_name_leafdata());
    if (cdpcachesysname.is_set || is_set(cdpcachesysname.operation)) leaf_name_data.push_back(cdpcachesysname.get_name_leafdata());
    if (cdpcachesysobjectid.is_set || is_set(cdpcachesysobjectid.operation)) leaf_name_data.push_back(cdpcachesysobjectid.get_name_leafdata());
    if (cdpcacheversion.is_set || is_set(cdpcacheversion.operation)) leaf_name_data.push_back(cdpcacheversion.get_name_leafdata());
    if (cdpcachevlanid.is_set || is_set(cdpcachevlanid.operation)) leaf_name_data.push_back(cdpcachevlanid.get_name_leafdata());
    if (cdpcachevtpmgmtdomain.is_set || is_set(cdpcachevtpmgmtdomain.operation)) leaf_name_data.push_back(cdpcachevtpmgmtdomain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpcachetable::Cdpcacheentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpcachetable::Cdpcacheentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpcachetable::Cdpcacheentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdpCacheIfIndex")
    {
        cdpcacheifindex = value;
    }
    if(value_path == "cdpCacheDeviceIndex")
    {
        cdpcachedeviceindex = value;
    }
    if(value_path == "cdpCacheAddress")
    {
        cdpcacheaddress = value;
    }
    if(value_path == "cdpCacheAddressType")
    {
        cdpcacheaddresstype = value;
    }
    if(value_path == "cdpCacheApplianceID")
    {
        cdpcacheapplianceid = value;
    }
    if(value_path == "cdpCacheCapabilities")
    {
        cdpcachecapabilities = value;
    }
    if(value_path == "cdpCacheDeviceId")
    {
        cdpcachedeviceid = value;
    }
    if(value_path == "cdpCacheDevicePort")
    {
        cdpcachedeviceport = value;
    }
    if(value_path == "cdpCacheDuplex")
    {
        cdpcacheduplex = value;
    }
    if(value_path == "cdpCacheLastChange")
    {
        cdpcachelastchange = value;
    }
    if(value_path == "cdpCacheMTU")
    {
        cdpcachemtu = value;
    }
    if(value_path == "cdpCacheNativeVLAN")
    {
        cdpcachenativevlan = value;
    }
    if(value_path == "cdpCachePhysLocation")
    {
        cdpcachephyslocation = value;
    }
    if(value_path == "cdpCachePlatform")
    {
        cdpcacheplatform = value;
    }
    if(value_path == "cdpCachePowerConsumption")
    {
        cdpcachepowerconsumption = value;
    }
    if(value_path == "cdpCachePrimaryMgmtAddr")
    {
        cdpcacheprimarymgmtaddr = value;
    }
    if(value_path == "cdpCachePrimaryMgmtAddrType")
    {
        cdpcacheprimarymgmtaddrtype = value;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddr")
    {
        cdpcachesecondarymgmtaddr = value;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddrType")
    {
        cdpcachesecondarymgmtaddrtype = value;
    }
    if(value_path == "cdpCacheSysName")
    {
        cdpcachesysname = value;
    }
    if(value_path == "cdpCacheSysObjectID")
    {
        cdpcachesysobjectid = value;
    }
    if(value_path == "cdpCacheVersion")
    {
        cdpcacheversion = value;
    }
    if(value_path == "cdpCacheVlanID")
    {
        cdpcachevlanid = value;
    }
    if(value_path == "cdpCacheVTPMgmtDomain")
    {
        cdpcachevtpmgmtdomain = value;
    }
}

CiscoCdpMib::Cdpctaddresstable::Cdpctaddresstable()
{
    yang_name = "cdpCtAddressTable"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpctaddresstable::~Cdpctaddresstable()
{
}

bool CiscoCdpMib::Cdpctaddresstable::has_data() const
{
    for (std::size_t index=0; index<cdpctaddressentry_.size(); index++)
    {
        if(cdpctaddressentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCdpMib::Cdpctaddresstable::has_operation() const
{
    for (std::size_t index=0; index<cdpctaddressentry_.size(); index++)
    {
        if(cdpctaddressentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoCdpMib::Cdpctaddresstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCtAddressTable";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpctaddresstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpctaddresstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpCtAddressEntry")
    {
        for(auto const & c : cdpctaddressentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry>();
        c->parent = this;
        cdpctaddressentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpctaddresstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdpctaddressentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCdpMib::Cdpctaddresstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::Cdpctaddressentry()
    :
    cdpcacheifindex{YType::str, "cdpCacheIfIndex"},
    cdpcachedeviceindex{YType::str, "cdpCacheDeviceIndex"},
    cdpctaddressindex{YType::int32, "cdpCtAddressIndex"},
    cdpctaddress{YType::str, "cdpCtAddress"},
    cdpctaddresstype{YType::enumeration, "cdpCtAddressType"}
{
    yang_name = "cdpCtAddressEntry"; yang_parent_name = "cdpCtAddressTable";
}

CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::~Cdpctaddressentry()
{
}

bool CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::has_data() const
{
    return cdpcacheifindex.is_set
	|| cdpcachedeviceindex.is_set
	|| cdpctaddressindex.is_set
	|| cdpctaddress.is_set
	|| cdpctaddresstype.is_set;
}

bool CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cdpcacheifindex.operation)
	|| is_set(cdpcachedeviceindex.operation)
	|| is_set(cdpctaddressindex.operation)
	|| is_set(cdpctaddress.operation)
	|| is_set(cdpctaddresstype.operation);
}

std::string CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCtAddressEntry" <<"[cdpCacheIfIndex='" <<cdpcacheifindex <<"']" <<"[cdpCacheDeviceIndex='" <<cdpcachedeviceindex <<"']" <<"[cdpCtAddressIndex='" <<cdpctaddressindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpCtAddressTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpcacheifindex.is_set || is_set(cdpcacheifindex.operation)) leaf_name_data.push_back(cdpcacheifindex.get_name_leafdata());
    if (cdpcachedeviceindex.is_set || is_set(cdpcachedeviceindex.operation)) leaf_name_data.push_back(cdpcachedeviceindex.get_name_leafdata());
    if (cdpctaddressindex.is_set || is_set(cdpctaddressindex.operation)) leaf_name_data.push_back(cdpctaddressindex.get_name_leafdata());
    if (cdpctaddress.is_set || is_set(cdpctaddress.operation)) leaf_name_data.push_back(cdpctaddress.get_name_leafdata());
    if (cdpctaddresstype.is_set || is_set(cdpctaddresstype.operation)) leaf_name_data.push_back(cdpctaddresstype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdpCacheIfIndex")
    {
        cdpcacheifindex = value;
    }
    if(value_path == "cdpCacheDeviceIndex")
    {
        cdpcachedeviceindex = value;
    }
    if(value_path == "cdpCtAddressIndex")
    {
        cdpctaddressindex = value;
    }
    if(value_path == "cdpCtAddress")
    {
        cdpctaddress = value;
    }
    if(value_path == "cdpCtAddressType")
    {
        cdpctaddresstype = value;
    }
}

const Enum::YLeaf CiscoCdpMib::Cdpglobal::CdpglobaldeviceidformatEnum::serialNumber {1, "serialNumber"};
const Enum::YLeaf CiscoCdpMib::Cdpglobal::CdpglobaldeviceidformatEnum::macAddress {2, "macAddress"};
const Enum::YLeaf CiscoCdpMib::Cdpglobal::CdpglobaldeviceidformatEnum::other {3, "other"};

const Enum::YLeaf CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::CdpinterfaceextendedtrustEnum::trusted {1, "trusted"};
const Enum::YLeaf CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::CdpinterfaceextendedtrustEnum::noTrust {2, "noTrust"};

const Enum::YLeaf CiscoCdpMib::Cdpcachetable::Cdpcacheentry::CdpcacheduplexEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoCdpMib::Cdpcachetable::Cdpcacheentry::CdpcacheduplexEnum::halfduplex {2, "halfduplex"};
const Enum::YLeaf CiscoCdpMib::Cdpcachetable::Cdpcacheentry::CdpcacheduplexEnum::fullduplex {3, "fullduplex"};


}
}

