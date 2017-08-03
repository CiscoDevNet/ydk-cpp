
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "TUNNEL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace TUNNEL_MIB {

TunnelMib::TunnelMib()
    :
    tunnelconfigtable(std::make_shared<TunnelMib::Tunnelconfigtable>())
	,tunneliftable(std::make_shared<TunnelMib::Tunneliftable>())
	,tunnelinetconfigtable(std::make_shared<TunnelMib::Tunnelinetconfigtable>())
{
    tunnelconfigtable->parent = this;

    tunneliftable->parent = this;

    tunnelinetconfigtable->parent = this;

    yang_name = "TUNNEL-MIB"; yang_parent_name = "TUNNEL-MIB";
}

TunnelMib::~TunnelMib()
{
}

bool TunnelMib::has_data() const
{
    return (tunnelconfigtable !=  nullptr && tunnelconfigtable->has_data())
	|| (tunneliftable !=  nullptr && tunneliftable->has_data())
	|| (tunnelinetconfigtable !=  nullptr && tunnelinetconfigtable->has_data());
}

bool TunnelMib::has_operation() const
{
    return is_set(yfilter)
	|| (tunnelconfigtable !=  nullptr && tunnelconfigtable->has_operation())
	|| (tunneliftable !=  nullptr && tunneliftable->has_operation())
	|| (tunnelinetconfigtable !=  nullptr && tunnelinetconfigtable->has_operation());
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
        if(tunnelconfigtable == nullptr)
        {
            tunnelconfigtable = std::make_shared<TunnelMib::Tunnelconfigtable>();
        }
        return tunnelconfigtable;
    }

    if(child_yang_name == "tunnelIfTable")
    {
        if(tunneliftable == nullptr)
        {
            tunneliftable = std::make_shared<TunnelMib::Tunneliftable>();
        }
        return tunneliftable;
    }

    if(child_yang_name == "tunnelInetConfigTable")
    {
        if(tunnelinetconfigtable == nullptr)
        {
            tunnelinetconfigtable = std::make_shared<TunnelMib::Tunnelinetconfigtable>();
        }
        return tunnelinetconfigtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnelconfigtable != nullptr)
    {
        children["tunnelConfigTable"] = tunnelconfigtable;
    }

    if(tunneliftable != nullptr)
    {
        children["tunnelIfTable"] = tunneliftable;
    }

    if(tunnelinetconfigtable != nullptr)
    {
        children["tunnelInetConfigTable"] = tunnelinetconfigtable;
    }

    return children;
}

void TunnelMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TunnelMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> TunnelMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool TunnelMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelConfigTable" || name == "tunnelIfTable" || name == "tunnelInetConfigTable")
        return true;
    return false;
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
    for (std::size_t index=0; index<tunnelifentry.size(); index++)
    {
        if(tunnelifentry[index]->has_data())
            return true;
    }
    return false;
}

bool TunnelMib::Tunneliftable::has_operation() const
{
    for (std::size_t index=0; index<tunnelifentry.size(); index++)
    {
        if(tunnelifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : tunnelifentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TunnelMib::Tunneliftable::Tunnelifentry>();
        c->parent = this;
        tunnelifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::Tunneliftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnelifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TunnelMib::Tunneliftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TunnelMib::Tunneliftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TunnelMib::Tunneliftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelIfEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(tunnelifaddresstype.yfilter)
	|| ydk::is_set(tunnelifencapslimit.yfilter)
	|| ydk::is_set(tunnelifencapsmethod.yfilter)
	|| ydk::is_set(tunnelifflowlabel.yfilter)
	|| ydk::is_set(tunnelifhoplimit.yfilter)
	|| ydk::is_set(tunneliflocaladdress.yfilter)
	|| ydk::is_set(tunneliflocalinetaddress.yfilter)
	|| ydk::is_set(tunnelifremoteaddress.yfilter)
	|| ydk::is_set(tunnelifremoteinetaddress.yfilter)
	|| ydk::is_set(tunnelifsecurity.yfilter)
	|| ydk::is_set(tunneliftos.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (tunnelifaddresstype.is_set || is_set(tunnelifaddresstype.yfilter)) leaf_name_data.push_back(tunnelifaddresstype.get_name_leafdata());
    if (tunnelifencapslimit.is_set || is_set(tunnelifencapslimit.yfilter)) leaf_name_data.push_back(tunnelifencapslimit.get_name_leafdata());
    if (tunnelifencapsmethod.is_set || is_set(tunnelifencapsmethod.yfilter)) leaf_name_data.push_back(tunnelifencapsmethod.get_name_leafdata());
    if (tunnelifflowlabel.is_set || is_set(tunnelifflowlabel.yfilter)) leaf_name_data.push_back(tunnelifflowlabel.get_name_leafdata());
    if (tunnelifhoplimit.is_set || is_set(tunnelifhoplimit.yfilter)) leaf_name_data.push_back(tunnelifhoplimit.get_name_leafdata());
    if (tunneliflocaladdress.is_set || is_set(tunneliflocaladdress.yfilter)) leaf_name_data.push_back(tunneliflocaladdress.get_name_leafdata());
    if (tunneliflocalinetaddress.is_set || is_set(tunneliflocalinetaddress.yfilter)) leaf_name_data.push_back(tunneliflocalinetaddress.get_name_leafdata());
    if (tunnelifremoteaddress.is_set || is_set(tunnelifremoteaddress.yfilter)) leaf_name_data.push_back(tunnelifremoteaddress.get_name_leafdata());
    if (tunnelifremoteinetaddress.is_set || is_set(tunnelifremoteinetaddress.yfilter)) leaf_name_data.push_back(tunnelifremoteinetaddress.get_name_leafdata());
    if (tunnelifsecurity.is_set || is_set(tunnelifsecurity.yfilter)) leaf_name_data.push_back(tunnelifsecurity.get_name_leafdata());
    if (tunneliftos.is_set || is_set(tunneliftos.yfilter)) leaf_name_data.push_back(tunneliftos.get_name_leafdata());


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

void TunnelMib::Tunneliftable::Tunnelifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfAddressType")
    {
        tunnelifaddresstype = value;
        tunnelifaddresstype.value_namespace = name_space;
        tunnelifaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfEncapsLimit")
    {
        tunnelifencapslimit = value;
        tunnelifencapslimit.value_namespace = name_space;
        tunnelifencapslimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfEncapsMethod")
    {
        tunnelifencapsmethod = value;
        tunnelifencapsmethod.value_namespace = name_space;
        tunnelifencapsmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfFlowLabel")
    {
        tunnelifflowlabel = value;
        tunnelifflowlabel.value_namespace = name_space;
        tunnelifflowlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfHopLimit")
    {
        tunnelifhoplimit = value;
        tunnelifhoplimit.value_namespace = name_space;
        tunnelifhoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfLocalAddress")
    {
        tunneliflocaladdress = value;
        tunneliflocaladdress.value_namespace = name_space;
        tunneliflocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfLocalInetAddress")
    {
        tunneliflocalinetaddress = value;
        tunneliflocalinetaddress.value_namespace = name_space;
        tunneliflocalinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfRemoteAddress")
    {
        tunnelifremoteaddress = value;
        tunnelifremoteaddress.value_namespace = name_space;
        tunnelifremoteaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfRemoteInetAddress")
    {
        tunnelifremoteinetaddress = value;
        tunnelifremoteinetaddress.value_namespace = name_space;
        tunnelifremoteinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfSecurity")
    {
        tunnelifsecurity = value;
        tunnelifsecurity.value_namespace = name_space;
        tunnelifsecurity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfTOS")
    {
        tunneliftos = value;
        tunneliftos.value_namespace = name_space;
        tunneliftos.value_namespace_prefix = name_space_prefix;
    }
}

void TunnelMib::Tunneliftable::Tunnelifentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "tunnelIfAddressType")
    {
        tunnelifaddresstype.yfilter = yfilter;
    }
    if(value_path == "tunnelIfEncapsLimit")
    {
        tunnelifencapslimit.yfilter = yfilter;
    }
    if(value_path == "tunnelIfEncapsMethod")
    {
        tunnelifencapsmethod.yfilter = yfilter;
    }
    if(value_path == "tunnelIfFlowLabel")
    {
        tunnelifflowlabel.yfilter = yfilter;
    }
    if(value_path == "tunnelIfHopLimit")
    {
        tunnelifhoplimit.yfilter = yfilter;
    }
    if(value_path == "tunnelIfLocalAddress")
    {
        tunneliflocaladdress.yfilter = yfilter;
    }
    if(value_path == "tunnelIfLocalInetAddress")
    {
        tunneliflocalinetaddress.yfilter = yfilter;
    }
    if(value_path == "tunnelIfRemoteAddress")
    {
        tunnelifremoteaddress.yfilter = yfilter;
    }
    if(value_path == "tunnelIfRemoteInetAddress")
    {
        tunnelifremoteinetaddress.yfilter = yfilter;
    }
    if(value_path == "tunnelIfSecurity")
    {
        tunnelifsecurity.yfilter = yfilter;
    }
    if(value_path == "tunnelIfTOS")
    {
        tunneliftos.yfilter = yfilter;
    }
}

bool TunnelMib::Tunneliftable::Tunnelifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "tunnelIfAddressType" || name == "tunnelIfEncapsLimit" || name == "tunnelIfEncapsMethod" || name == "tunnelIfFlowLabel" || name == "tunnelIfHopLimit" || name == "tunnelIfLocalAddress" || name == "tunnelIfLocalInetAddress" || name == "tunnelIfRemoteAddress" || name == "tunnelIfRemoteInetAddress" || name == "tunnelIfSecurity" || name == "tunnelIfTOS")
        return true;
    return false;
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
    for (std::size_t index=0; index<tunnelconfigentry.size(); index++)
    {
        if(tunnelconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool TunnelMib::Tunnelconfigtable::has_operation() const
{
    for (std::size_t index=0; index<tunnelconfigentry.size(); index++)
    {
        if(tunnelconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : tunnelconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TunnelMib::Tunnelconfigtable::Tunnelconfigentry>();
        c->parent = this;
        tunnelconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::Tunnelconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnelconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TunnelMib::Tunnelconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TunnelMib::Tunnelconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TunnelMib::Tunnelconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelConfigEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(tunnelconfiglocaladdress.yfilter)
	|| ydk::is_set(tunnelconfigremoteaddress.yfilter)
	|| ydk::is_set(tunnelconfigencapsmethod.yfilter)
	|| ydk::is_set(tunnelconfigid.yfilter)
	|| ydk::is_set(tunnelconfigifindex.yfilter)
	|| ydk::is_set(tunnelconfigstatus.yfilter);
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

    if (tunnelconfiglocaladdress.is_set || is_set(tunnelconfiglocaladdress.yfilter)) leaf_name_data.push_back(tunnelconfiglocaladdress.get_name_leafdata());
    if (tunnelconfigremoteaddress.is_set || is_set(tunnelconfigremoteaddress.yfilter)) leaf_name_data.push_back(tunnelconfigremoteaddress.get_name_leafdata());
    if (tunnelconfigencapsmethod.is_set || is_set(tunnelconfigencapsmethod.yfilter)) leaf_name_data.push_back(tunnelconfigencapsmethod.get_name_leafdata());
    if (tunnelconfigid.is_set || is_set(tunnelconfigid.yfilter)) leaf_name_data.push_back(tunnelconfigid.get_name_leafdata());
    if (tunnelconfigifindex.is_set || is_set(tunnelconfigifindex.yfilter)) leaf_name_data.push_back(tunnelconfigifindex.get_name_leafdata());
    if (tunnelconfigstatus.is_set || is_set(tunnelconfigstatus.yfilter)) leaf_name_data.push_back(tunnelconfigstatus.get_name_leafdata());


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

void TunnelMib::Tunnelconfigtable::Tunnelconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnelConfigLocalAddress")
    {
        tunnelconfiglocaladdress = value;
        tunnelconfiglocaladdress.value_namespace = name_space;
        tunnelconfiglocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelConfigRemoteAddress")
    {
        tunnelconfigremoteaddress = value;
        tunnelconfigremoteaddress.value_namespace = name_space;
        tunnelconfigremoteaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelConfigEncapsMethod")
    {
        tunnelconfigencapsmethod = value;
        tunnelconfigencapsmethod.value_namespace = name_space;
        tunnelconfigencapsmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelConfigID")
    {
        tunnelconfigid = value;
        tunnelconfigid.value_namespace = name_space;
        tunnelconfigid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelConfigIfIndex")
    {
        tunnelconfigifindex = value;
        tunnelconfigifindex.value_namespace = name_space;
        tunnelconfigifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelConfigStatus")
    {
        tunnelconfigstatus = value;
        tunnelconfigstatus.value_namespace = name_space;
        tunnelconfigstatus.value_namespace_prefix = name_space_prefix;
    }
}

void TunnelMib::Tunnelconfigtable::Tunnelconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnelConfigLocalAddress")
    {
        tunnelconfiglocaladdress.yfilter = yfilter;
    }
    if(value_path == "tunnelConfigRemoteAddress")
    {
        tunnelconfigremoteaddress.yfilter = yfilter;
    }
    if(value_path == "tunnelConfigEncapsMethod")
    {
        tunnelconfigencapsmethod.yfilter = yfilter;
    }
    if(value_path == "tunnelConfigID")
    {
        tunnelconfigid.yfilter = yfilter;
    }
    if(value_path == "tunnelConfigIfIndex")
    {
        tunnelconfigifindex.yfilter = yfilter;
    }
    if(value_path == "tunnelConfigStatus")
    {
        tunnelconfigstatus.yfilter = yfilter;
    }
}

bool TunnelMib::Tunnelconfigtable::Tunnelconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelConfigLocalAddress" || name == "tunnelConfigRemoteAddress" || name == "tunnelConfigEncapsMethod" || name == "tunnelConfigID" || name == "tunnelConfigIfIndex" || name == "tunnelConfigStatus")
        return true;
    return false;
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
    for (std::size_t index=0; index<tunnelinetconfigentry.size(); index++)
    {
        if(tunnelinetconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool TunnelMib::Tunnelinetconfigtable::has_operation() const
{
    for (std::size_t index=0; index<tunnelinetconfigentry.size(); index++)
    {
        if(tunnelinetconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : tunnelinetconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry>();
        c->parent = this;
        tunnelinetconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TunnelMib::Tunnelinetconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnelinetconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TunnelMib::Tunnelinetconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TunnelMib::Tunnelinetconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TunnelMib::Tunnelinetconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelInetConfigEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(tunnelinetconfigaddresstype.yfilter)
	|| ydk::is_set(tunnelinetconfiglocaladdress.yfilter)
	|| ydk::is_set(tunnelinetconfigremoteaddress.yfilter)
	|| ydk::is_set(tunnelinetconfigencapsmethod.yfilter)
	|| ydk::is_set(tunnelinetconfigid.yfilter)
	|| ydk::is_set(tunnelinetconfigifindex.yfilter)
	|| ydk::is_set(tunnelinetconfigstatus.yfilter)
	|| ydk::is_set(tunnelinetconfigstoragetype.yfilter);
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

    if (tunnelinetconfigaddresstype.is_set || is_set(tunnelinetconfigaddresstype.yfilter)) leaf_name_data.push_back(tunnelinetconfigaddresstype.get_name_leafdata());
    if (tunnelinetconfiglocaladdress.is_set || is_set(tunnelinetconfiglocaladdress.yfilter)) leaf_name_data.push_back(tunnelinetconfiglocaladdress.get_name_leafdata());
    if (tunnelinetconfigremoteaddress.is_set || is_set(tunnelinetconfigremoteaddress.yfilter)) leaf_name_data.push_back(tunnelinetconfigremoteaddress.get_name_leafdata());
    if (tunnelinetconfigencapsmethod.is_set || is_set(tunnelinetconfigencapsmethod.yfilter)) leaf_name_data.push_back(tunnelinetconfigencapsmethod.get_name_leafdata());
    if (tunnelinetconfigid.is_set || is_set(tunnelinetconfigid.yfilter)) leaf_name_data.push_back(tunnelinetconfigid.get_name_leafdata());
    if (tunnelinetconfigifindex.is_set || is_set(tunnelinetconfigifindex.yfilter)) leaf_name_data.push_back(tunnelinetconfigifindex.get_name_leafdata());
    if (tunnelinetconfigstatus.is_set || is_set(tunnelinetconfigstatus.yfilter)) leaf_name_data.push_back(tunnelinetconfigstatus.get_name_leafdata());
    if (tunnelinetconfigstoragetype.is_set || is_set(tunnelinetconfigstoragetype.yfilter)) leaf_name_data.push_back(tunnelinetconfigstoragetype.get_name_leafdata());


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

void TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnelInetConfigAddressType")
    {
        tunnelinetconfigaddresstype = value;
        tunnelinetconfigaddresstype.value_namespace = name_space;
        tunnelinetconfigaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelInetConfigLocalAddress")
    {
        tunnelinetconfiglocaladdress = value;
        tunnelinetconfiglocaladdress.value_namespace = name_space;
        tunnelinetconfiglocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelInetConfigRemoteAddress")
    {
        tunnelinetconfigremoteaddress = value;
        tunnelinetconfigremoteaddress.value_namespace = name_space;
        tunnelinetconfigremoteaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelInetConfigEncapsMethod")
    {
        tunnelinetconfigencapsmethod = value;
        tunnelinetconfigencapsmethod.value_namespace = name_space;
        tunnelinetconfigencapsmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelInetConfigID")
    {
        tunnelinetconfigid = value;
        tunnelinetconfigid.value_namespace = name_space;
        tunnelinetconfigid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelInetConfigIfIndex")
    {
        tunnelinetconfigifindex = value;
        tunnelinetconfigifindex.value_namespace = name_space;
        tunnelinetconfigifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelInetConfigStatus")
    {
        tunnelinetconfigstatus = value;
        tunnelinetconfigstatus.value_namespace = name_space;
        tunnelinetconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelInetConfigStorageType")
    {
        tunnelinetconfigstoragetype = value;
        tunnelinetconfigstoragetype.value_namespace = name_space;
        tunnelinetconfigstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnelInetConfigAddressType")
    {
        tunnelinetconfigaddresstype.yfilter = yfilter;
    }
    if(value_path == "tunnelInetConfigLocalAddress")
    {
        tunnelinetconfiglocaladdress.yfilter = yfilter;
    }
    if(value_path == "tunnelInetConfigRemoteAddress")
    {
        tunnelinetconfigremoteaddress.yfilter = yfilter;
    }
    if(value_path == "tunnelInetConfigEncapsMethod")
    {
        tunnelinetconfigencapsmethod.yfilter = yfilter;
    }
    if(value_path == "tunnelInetConfigID")
    {
        tunnelinetconfigid.yfilter = yfilter;
    }
    if(value_path == "tunnelInetConfigIfIndex")
    {
        tunnelinetconfigifindex.yfilter = yfilter;
    }
    if(value_path == "tunnelInetConfigStatus")
    {
        tunnelinetconfigstatus.yfilter = yfilter;
    }
    if(value_path == "tunnelInetConfigStorageType")
    {
        tunnelinetconfigstoragetype.yfilter = yfilter;
    }
}

bool TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelInetConfigAddressType" || name == "tunnelInetConfigLocalAddress" || name == "tunnelInetConfigRemoteAddress" || name == "tunnelInetConfigEncapsMethod" || name == "tunnelInetConfigID" || name == "tunnelInetConfigIfIndex" || name == "tunnelInetConfigStatus" || name == "tunnelInetConfigStorageType")
        return true;
    return false;
}

const Enum::YLeaf TunnelMib::Tunneliftable::Tunnelifentry::Tunnelifsecurity::none {1, "none"};
const Enum::YLeaf TunnelMib::Tunneliftable::Tunnelifentry::Tunnelifsecurity::ipsec {2, "ipsec"};
const Enum::YLeaf TunnelMib::Tunneliftable::Tunnelifentry::Tunnelifsecurity::other {3, "other"};


}
}

