
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "TUNNEL_MIB.hpp"

namespace ydk {
namespace TUNNEL_MIB {

TunnelMib::TunnelMib()
    :
    tunnelconfigtable_(std::make_shared<TunnelMib::Tunnelconfigtable>())
	,tunneliftable_(std::make_shared<TunnelMib::Tunneliftable>())
	,tunnelinetconfigtable_(std::make_shared<TunnelMib::Tunnelinetconfigtable>())
{
    tunnelconfigtable_->parent = this;

    tunneliftable_->parent = this;

    tunnelinetconfigtable_->parent = this;

    yang_name = "TUNNEL-MIB"; yang_parent_name = "TUNNEL-MIB";
}

TunnelMib::~TunnelMib()
{
}

bool TunnelMib::has_data() const
{
    return (tunnelconfigtable_ !=  nullptr && tunnelconfigtable_->has_data())
	|| (tunneliftable_ !=  nullptr && tunneliftable_->has_data())
	|| (tunnelinetconfigtable_ !=  nullptr && tunnelinetconfigtable_->has_data());
}

bool TunnelMib::has_operation() const
{
    return is_set(operation)
	|| (tunnelconfigtable_ !=  nullptr && tunnelconfigtable_->has_operation())
	|| (tunneliftable_ !=  nullptr && tunneliftable_->has_operation())
	|| (tunnelinetconfigtable_ !=  nullptr && tunnelinetconfigtable_->has_operation());
}

std::string TunnelMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TUNNEL-MIB:TUNNEL-MIB";

    return path_buffer.str();

}

const EntityPath TunnelMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> TunnelMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnelConfigTable")
    {
        if(tunnelconfigtable_ == nullptr)
        {
            tunnelconfigtable_ = std::make_shared<TunnelMib::Tunnelconfigtable>();
        }
        return tunnelconfigtable_;
    }

    if(child_yang_name == "tunnelIfTable")
    {
        if(tunneliftable_ == nullptr)
        {
            tunneliftable_ = std::make_shared<TunnelMib::Tunneliftable>();
        }
        return tunneliftable_;
    }

    if(child_yang_name == "tunnelInetConfigTable")
    {
        if(tunnelinetconfigtable_ == nullptr)
        {
            tunnelinetconfigtable_ = std::make_shared<TunnelMib::Tunnelinetconfigtable>();
        }
        return tunnelinetconfigtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnelconfigtable_ != nullptr)
    {
        children["tunnelConfigTable"] = tunnelconfigtable_;
    }

    if(tunneliftable_ != nullptr)
    {
        children["tunnelIfTable"] = tunneliftable_;
    }

    if(tunnelinetconfigtable_ != nullptr)
    {
        children["tunnelInetConfigTable"] = tunnelinetconfigtable_;
    }

    return children;
}

void TunnelMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> TunnelMib::clone_ptr() const
{
    return std::make_shared<TunnelMib>();
}

std::string TunnelMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TunnelMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TunnelMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

TunnelMib::Tunneliftable::Tunneliftable()
{
    yang_name = "tunnelIfTable"; yang_parent_name = "TUNNEL-MIB";
}

TunnelMib::Tunneliftable::~Tunneliftable()
{
}

bool TunnelMib::Tunneliftable::has_data() const
{
    for (std::size_t index=0; index<tunnelifentry_.size(); index++)
    {
        if(tunnelifentry_[index]->has_data())
            return true;
    }
    return false;
}

bool TunnelMib::Tunneliftable::has_operation() const
{
    for (std::size_t index=0; index<tunnelifentry_.size(); index++)
    {
        if(tunnelifentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TunnelMib::Tunneliftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelIfTable";

    return path_buffer.str();

}

const EntityPath TunnelMib::Tunneliftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TUNNEL-MIB:TUNNEL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TunnelMib::Tunneliftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnelIfEntry")
    {
        for(auto const & c : tunnelifentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TunnelMib::Tunneliftable::Tunnelifentry>();
        c->parent = this;
        tunnelifentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::Tunneliftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnelifentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TunnelMib::Tunneliftable::set_value(const std::string & value_path, std::string value)
{
}

TunnelMib::Tunneliftable::Tunnelifentry::Tunnelifentry()
    :
    ifindex{YType::str, "ifIndex"},
    tunnelifaddresstype{YType::enumeration, "tunnelIfAddressType"},
    tunnelifencapslimit{YType::int32, "tunnelIfEncapsLimit"},
    tunnelifencapsmethod{YType::enumeration, "tunnelIfEncapsMethod"},
    tunnelifflowlabel{YType::int32, "tunnelIfFlowLabel"},
    tunnelifhoplimit{YType::int32, "tunnelIfHopLimit"},
    tunneliflocaladdress{YType::str, "tunnelIfLocalAddress"},
    tunneliflocalinetaddress{YType::str, "tunnelIfLocalInetAddress"},
    tunnelifremoteaddress{YType::str, "tunnelIfRemoteAddress"},
    tunnelifremoteinetaddress{YType::str, "tunnelIfRemoteInetAddress"},
    tunnelifsecurity{YType::enumeration, "tunnelIfSecurity"},
    tunneliftos{YType::int32, "tunnelIfTOS"}
{
    yang_name = "tunnelIfEntry"; yang_parent_name = "tunnelIfTable";
}

TunnelMib::Tunneliftable::Tunnelifentry::~Tunnelifentry()
{
}

bool TunnelMib::Tunneliftable::Tunnelifentry::has_data() const
{
    return ifindex.is_set
	|| tunnelifaddresstype.is_set
	|| tunnelifencapslimit.is_set
	|| tunnelifencapsmethod.is_set
	|| tunnelifflowlabel.is_set
	|| tunnelifhoplimit.is_set
	|| tunneliflocaladdress.is_set
	|| tunneliflocalinetaddress.is_set
	|| tunnelifremoteaddress.is_set
	|| tunnelifremoteinetaddress.is_set
	|| tunnelifsecurity.is_set
	|| tunneliftos.is_set;
}

bool TunnelMib::Tunneliftable::Tunnelifentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(tunnelifaddresstype.operation)
	|| is_set(tunnelifencapslimit.operation)
	|| is_set(tunnelifencapsmethod.operation)
	|| is_set(tunnelifflowlabel.operation)
	|| is_set(tunnelifhoplimit.operation)
	|| is_set(tunneliflocaladdress.operation)
	|| is_set(tunneliflocalinetaddress.operation)
	|| is_set(tunnelifremoteaddress.operation)
	|| is_set(tunnelifremoteinetaddress.operation)
	|| is_set(tunnelifsecurity.operation)
	|| is_set(tunneliftos.operation);
}

std::string TunnelMib::Tunneliftable::Tunnelifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelIfEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath TunnelMib::Tunneliftable::Tunnelifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TUNNEL-MIB:TUNNEL-MIB/tunnelIfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (tunnelifaddresstype.is_set || is_set(tunnelifaddresstype.operation)) leaf_name_data.push_back(tunnelifaddresstype.get_name_leafdata());
    if (tunnelifencapslimit.is_set || is_set(tunnelifencapslimit.operation)) leaf_name_data.push_back(tunnelifencapslimit.get_name_leafdata());
    if (tunnelifencapsmethod.is_set || is_set(tunnelifencapsmethod.operation)) leaf_name_data.push_back(tunnelifencapsmethod.get_name_leafdata());
    if (tunnelifflowlabel.is_set || is_set(tunnelifflowlabel.operation)) leaf_name_data.push_back(tunnelifflowlabel.get_name_leafdata());
    if (tunnelifhoplimit.is_set || is_set(tunnelifhoplimit.operation)) leaf_name_data.push_back(tunnelifhoplimit.get_name_leafdata());
    if (tunneliflocaladdress.is_set || is_set(tunneliflocaladdress.operation)) leaf_name_data.push_back(tunneliflocaladdress.get_name_leafdata());
    if (tunneliflocalinetaddress.is_set || is_set(tunneliflocalinetaddress.operation)) leaf_name_data.push_back(tunneliflocalinetaddress.get_name_leafdata());
    if (tunnelifremoteaddress.is_set || is_set(tunnelifremoteaddress.operation)) leaf_name_data.push_back(tunnelifremoteaddress.get_name_leafdata());
    if (tunnelifremoteinetaddress.is_set || is_set(tunnelifremoteinetaddress.operation)) leaf_name_data.push_back(tunnelifremoteinetaddress.get_name_leafdata());
    if (tunnelifsecurity.is_set || is_set(tunnelifsecurity.operation)) leaf_name_data.push_back(tunnelifsecurity.get_name_leafdata());
    if (tunneliftos.is_set || is_set(tunneliftos.operation)) leaf_name_data.push_back(tunneliftos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TunnelMib::Tunneliftable::Tunnelifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::Tunneliftable::Tunnelifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TunnelMib::Tunneliftable::Tunnelifentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "tunnelIfAddressType")
    {
        tunnelifaddresstype = value;
    }
    if(value_path == "tunnelIfEncapsLimit")
    {
        tunnelifencapslimit = value;
    }
    if(value_path == "tunnelIfEncapsMethod")
    {
        tunnelifencapsmethod = value;
    }
    if(value_path == "tunnelIfFlowLabel")
    {
        tunnelifflowlabel = value;
    }
    if(value_path == "tunnelIfHopLimit")
    {
        tunnelifhoplimit = value;
    }
    if(value_path == "tunnelIfLocalAddress")
    {
        tunneliflocaladdress = value;
    }
    if(value_path == "tunnelIfLocalInetAddress")
    {
        tunneliflocalinetaddress = value;
    }
    if(value_path == "tunnelIfRemoteAddress")
    {
        tunnelifremoteaddress = value;
    }
    if(value_path == "tunnelIfRemoteInetAddress")
    {
        tunnelifremoteinetaddress = value;
    }
    if(value_path == "tunnelIfSecurity")
    {
        tunnelifsecurity = value;
    }
    if(value_path == "tunnelIfTOS")
    {
        tunneliftos = value;
    }
}

TunnelMib::Tunnelconfigtable::Tunnelconfigtable()
{
    yang_name = "tunnelConfigTable"; yang_parent_name = "TUNNEL-MIB";
}

TunnelMib::Tunnelconfigtable::~Tunnelconfigtable()
{
}

bool TunnelMib::Tunnelconfigtable::has_data() const
{
    for (std::size_t index=0; index<tunnelconfigentry_.size(); index++)
    {
        if(tunnelconfigentry_[index]->has_data())
            return true;
    }
    return false;
}

bool TunnelMib::Tunnelconfigtable::has_operation() const
{
    for (std::size_t index=0; index<tunnelconfigentry_.size(); index++)
    {
        if(tunnelconfigentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TunnelMib::Tunnelconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelConfigTable";

    return path_buffer.str();

}

const EntityPath TunnelMib::Tunnelconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TUNNEL-MIB:TUNNEL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TunnelMib::Tunnelconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnelConfigEntry")
    {
        for(auto const & c : tunnelconfigentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TunnelMib::Tunnelconfigtable::Tunnelconfigentry>();
        c->parent = this;
        tunnelconfigentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::Tunnelconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnelconfigentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TunnelMib::Tunnelconfigtable::set_value(const std::string & value_path, std::string value)
{
}

TunnelMib::Tunnelconfigtable::Tunnelconfigentry::Tunnelconfigentry()
    :
    tunnelconfiglocaladdress{YType::str, "tunnelConfigLocalAddress"},
    tunnelconfigremoteaddress{YType::str, "tunnelConfigRemoteAddress"},
    tunnelconfigencapsmethod{YType::enumeration, "tunnelConfigEncapsMethod"},
    tunnelconfigid{YType::int32, "tunnelConfigID"},
    tunnelconfigifindex{YType::int32, "tunnelConfigIfIndex"},
    tunnelconfigstatus{YType::enumeration, "tunnelConfigStatus"}
{
    yang_name = "tunnelConfigEntry"; yang_parent_name = "tunnelConfigTable";
}

TunnelMib::Tunnelconfigtable::Tunnelconfigentry::~Tunnelconfigentry()
{
}

bool TunnelMib::Tunnelconfigtable::Tunnelconfigentry::has_data() const
{
    return tunnelconfiglocaladdress.is_set
	|| tunnelconfigremoteaddress.is_set
	|| tunnelconfigencapsmethod.is_set
	|| tunnelconfigid.is_set
	|| tunnelconfigifindex.is_set
	|| tunnelconfigstatus.is_set;
}

bool TunnelMib::Tunnelconfigtable::Tunnelconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnelconfiglocaladdress.operation)
	|| is_set(tunnelconfigremoteaddress.operation)
	|| is_set(tunnelconfigencapsmethod.operation)
	|| is_set(tunnelconfigid.operation)
	|| is_set(tunnelconfigifindex.operation)
	|| is_set(tunnelconfigstatus.operation);
}

std::string TunnelMib::Tunnelconfigtable::Tunnelconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelConfigEntry" <<"[tunnelConfigLocalAddress='" <<tunnelconfiglocaladdress <<"']" <<"[tunnelConfigRemoteAddress='" <<tunnelconfigremoteaddress <<"']" <<"[tunnelConfigEncapsMethod='" <<tunnelconfigencapsmethod <<"']" <<"[tunnelConfigID='" <<tunnelconfigid <<"']";

    return path_buffer.str();

}

const EntityPath TunnelMib::Tunnelconfigtable::Tunnelconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TUNNEL-MIB:TUNNEL-MIB/tunnelConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnelconfiglocaladdress.is_set || is_set(tunnelconfiglocaladdress.operation)) leaf_name_data.push_back(tunnelconfiglocaladdress.get_name_leafdata());
    if (tunnelconfigremoteaddress.is_set || is_set(tunnelconfigremoteaddress.operation)) leaf_name_data.push_back(tunnelconfigremoteaddress.get_name_leafdata());
    if (tunnelconfigencapsmethod.is_set || is_set(tunnelconfigencapsmethod.operation)) leaf_name_data.push_back(tunnelconfigencapsmethod.get_name_leafdata());
    if (tunnelconfigid.is_set || is_set(tunnelconfigid.operation)) leaf_name_data.push_back(tunnelconfigid.get_name_leafdata());
    if (tunnelconfigifindex.is_set || is_set(tunnelconfigifindex.operation)) leaf_name_data.push_back(tunnelconfigifindex.get_name_leafdata());
    if (tunnelconfigstatus.is_set || is_set(tunnelconfigstatus.operation)) leaf_name_data.push_back(tunnelconfigstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TunnelMib::Tunnelconfigtable::Tunnelconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::Tunnelconfigtable::Tunnelconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TunnelMib::Tunnelconfigtable::Tunnelconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnelConfigLocalAddress")
    {
        tunnelconfiglocaladdress = value;
    }
    if(value_path == "tunnelConfigRemoteAddress")
    {
        tunnelconfigremoteaddress = value;
    }
    if(value_path == "tunnelConfigEncapsMethod")
    {
        tunnelconfigencapsmethod = value;
    }
    if(value_path == "tunnelConfigID")
    {
        tunnelconfigid = value;
    }
    if(value_path == "tunnelConfigIfIndex")
    {
        tunnelconfigifindex = value;
    }
    if(value_path == "tunnelConfigStatus")
    {
        tunnelconfigstatus = value;
    }
}

TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigtable()
{
    yang_name = "tunnelInetConfigTable"; yang_parent_name = "TUNNEL-MIB";
}

TunnelMib::Tunnelinetconfigtable::~Tunnelinetconfigtable()
{
}

bool TunnelMib::Tunnelinetconfigtable::has_data() const
{
    for (std::size_t index=0; index<tunnelinetconfigentry_.size(); index++)
    {
        if(tunnelinetconfigentry_[index]->has_data())
            return true;
    }
    return false;
}

bool TunnelMib::Tunnelinetconfigtable::has_operation() const
{
    for (std::size_t index=0; index<tunnelinetconfigentry_.size(); index++)
    {
        if(tunnelinetconfigentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TunnelMib::Tunnelinetconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelInetConfigTable";

    return path_buffer.str();

}

const EntityPath TunnelMib::Tunnelinetconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TUNNEL-MIB:TUNNEL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TunnelMib::Tunnelinetconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnelInetConfigEntry")
    {
        for(auto const & c : tunnelinetconfigentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry>();
        c->parent = this;
        tunnelinetconfigentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::Tunnelinetconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnelinetconfigentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TunnelMib::Tunnelinetconfigtable::set_value(const std::string & value_path, std::string value)
{
}

TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::Tunnelinetconfigentry()
    :
    tunnelinetconfigaddresstype{YType::enumeration, "tunnelInetConfigAddressType"},
    tunnelinetconfiglocaladdress{YType::str, "tunnelInetConfigLocalAddress"},
    tunnelinetconfigremoteaddress{YType::str, "tunnelInetConfigRemoteAddress"},
    tunnelinetconfigencapsmethod{YType::enumeration, "tunnelInetConfigEncapsMethod"},
    tunnelinetconfigid{YType::int32, "tunnelInetConfigID"},
    tunnelinetconfigifindex{YType::int32, "tunnelInetConfigIfIndex"},
    tunnelinetconfigstatus{YType::enumeration, "tunnelInetConfigStatus"},
    tunnelinetconfigstoragetype{YType::enumeration, "tunnelInetConfigStorageType"}
{
    yang_name = "tunnelInetConfigEntry"; yang_parent_name = "tunnelInetConfigTable";
}

TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::~Tunnelinetconfigentry()
{
}

bool TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::has_data() const
{
    return tunnelinetconfigaddresstype.is_set
	|| tunnelinetconfiglocaladdress.is_set
	|| tunnelinetconfigremoteaddress.is_set
	|| tunnelinetconfigencapsmethod.is_set
	|| tunnelinetconfigid.is_set
	|| tunnelinetconfigifindex.is_set
	|| tunnelinetconfigstatus.is_set
	|| tunnelinetconfigstoragetype.is_set;
}

bool TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnelinetconfigaddresstype.operation)
	|| is_set(tunnelinetconfiglocaladdress.operation)
	|| is_set(tunnelinetconfigremoteaddress.operation)
	|| is_set(tunnelinetconfigencapsmethod.operation)
	|| is_set(tunnelinetconfigid.operation)
	|| is_set(tunnelinetconfigifindex.operation)
	|| is_set(tunnelinetconfigstatus.operation)
	|| is_set(tunnelinetconfigstoragetype.operation);
}

std::string TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelInetConfigEntry" <<"[tunnelInetConfigAddressType='" <<tunnelinetconfigaddresstype <<"']" <<"[tunnelInetConfigLocalAddress='" <<tunnelinetconfiglocaladdress <<"']" <<"[tunnelInetConfigRemoteAddress='" <<tunnelinetconfigremoteaddress <<"']" <<"[tunnelInetConfigEncapsMethod='" <<tunnelinetconfigencapsmethod <<"']" <<"[tunnelInetConfigID='" <<tunnelinetconfigid <<"']";

    return path_buffer.str();

}

const EntityPath TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TUNNEL-MIB:TUNNEL-MIB/tunnelInetConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnelinetconfigaddresstype.is_set || is_set(tunnelinetconfigaddresstype.operation)) leaf_name_data.push_back(tunnelinetconfigaddresstype.get_name_leafdata());
    if (tunnelinetconfiglocaladdress.is_set || is_set(tunnelinetconfiglocaladdress.operation)) leaf_name_data.push_back(tunnelinetconfiglocaladdress.get_name_leafdata());
    if (tunnelinetconfigremoteaddress.is_set || is_set(tunnelinetconfigremoteaddress.operation)) leaf_name_data.push_back(tunnelinetconfigremoteaddress.get_name_leafdata());
    if (tunnelinetconfigencapsmethod.is_set || is_set(tunnelinetconfigencapsmethod.operation)) leaf_name_data.push_back(tunnelinetconfigencapsmethod.get_name_leafdata());
    if (tunnelinetconfigid.is_set || is_set(tunnelinetconfigid.operation)) leaf_name_data.push_back(tunnelinetconfigid.get_name_leafdata());
    if (tunnelinetconfigifindex.is_set || is_set(tunnelinetconfigifindex.operation)) leaf_name_data.push_back(tunnelinetconfigifindex.get_name_leafdata());
    if (tunnelinetconfigstatus.is_set || is_set(tunnelinetconfigstatus.operation)) leaf_name_data.push_back(tunnelinetconfigstatus.get_name_leafdata());
    if (tunnelinetconfigstoragetype.is_set || is_set(tunnelinetconfigstoragetype.operation)) leaf_name_data.push_back(tunnelinetconfigstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnelInetConfigAddressType")
    {
        tunnelinetconfigaddresstype = value;
    }
    if(value_path == "tunnelInetConfigLocalAddress")
    {
        tunnelinetconfiglocaladdress = value;
    }
    if(value_path == "tunnelInetConfigRemoteAddress")
    {
        tunnelinetconfigremoteaddress = value;
    }
    if(value_path == "tunnelInetConfigEncapsMethod")
    {
        tunnelinetconfigencapsmethod = value;
    }
    if(value_path == "tunnelInetConfigID")
    {
        tunnelinetconfigid = value;
    }
    if(value_path == "tunnelInetConfigIfIndex")
    {
        tunnelinetconfigifindex = value;
    }
    if(value_path == "tunnelInetConfigStatus")
    {
        tunnelinetconfigstatus = value;
    }
    if(value_path == "tunnelInetConfigStorageType")
    {
        tunnelinetconfigstoragetype = value;
    }
}

const Enum::YLeaf TunnelMib::Tunneliftable::Tunnelifentry::TunnelifsecurityEnum::none {1, "none"};
const Enum::YLeaf TunnelMib::Tunneliftable::Tunnelifentry::TunnelifsecurityEnum::ipsec {2, "ipsec"};
const Enum::YLeaf TunnelMib::Tunneliftable::Tunnelifentry::TunnelifsecurityEnum::other {3, "other"};


}
}

