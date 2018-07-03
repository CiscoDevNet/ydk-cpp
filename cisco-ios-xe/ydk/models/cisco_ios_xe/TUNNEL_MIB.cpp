
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "TUNNEL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace TUNNEL_MIB {

TUNNELMIB::TUNNELMIB()
    :
    tunneliftable(std::make_shared<TUNNELMIB::TunnelIfTable>())
    , tunnelconfigtable(std::make_shared<TUNNELMIB::TunnelConfigTable>())
    , tunnelinetconfigtable(std::make_shared<TUNNELMIB::TunnelInetConfigTable>())
{
    tunneliftable->parent = this;
    tunnelconfigtable->parent = this;
    tunnelinetconfigtable->parent = this;

    yang_name = "TUNNEL-MIB"; yang_parent_name = "TUNNEL-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

TUNNELMIB::~TUNNELMIB()
{
}

bool TUNNELMIB::has_data() const
{
    if (is_presence_container) return true;
    return (tunneliftable !=  nullptr && tunneliftable->has_data())
	|| (tunnelconfigtable !=  nullptr && tunnelconfigtable->has_data())
	|| (tunnelinetconfigtable !=  nullptr && tunnelinetconfigtable->has_data());
}

bool TUNNELMIB::has_operation() const
{
    return is_set(yfilter)
	|| (tunneliftable !=  nullptr && tunneliftable->has_operation())
	|| (tunnelconfigtable !=  nullptr && tunnelconfigtable->has_operation())
	|| (tunnelinetconfigtable !=  nullptr && tunnelinetconfigtable->has_operation());
}

std::string TUNNELMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TUNNEL-MIB:TUNNEL-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TUNNELMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TUNNELMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnelIfTable")
    {
        if(tunneliftable == nullptr)
        {
            tunneliftable = std::make_shared<TUNNELMIB::TunnelIfTable>();
        }
        return tunneliftable;
    }

    if(child_yang_name == "tunnelConfigTable")
    {
        if(tunnelconfigtable == nullptr)
        {
            tunnelconfigtable = std::make_shared<TUNNELMIB::TunnelConfigTable>();
        }
        return tunnelconfigtable;
    }

    if(child_yang_name == "tunnelInetConfigTable")
    {
        if(tunnelinetconfigtable == nullptr)
        {
            tunnelinetconfigtable = std::make_shared<TUNNELMIB::TunnelInetConfigTable>();
        }
        return tunnelinetconfigtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TUNNELMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunneliftable != nullptr)
    {
        children["tunnelIfTable"] = tunneliftable;
    }

    if(tunnelconfigtable != nullptr)
    {
        children["tunnelConfigTable"] = tunnelconfigtable;
    }

    if(tunnelinetconfigtable != nullptr)
    {
        children["tunnelInetConfigTable"] = tunnelinetconfigtable;
    }

    return children;
}

void TUNNELMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TUNNELMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TUNNELMIB::clone_ptr() const
{
    return std::make_shared<TUNNELMIB>();
}

std::string TUNNELMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TUNNELMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TUNNELMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TUNNELMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool TUNNELMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelIfTable" || name == "tunnelConfigTable" || name == "tunnelInetConfigTable")
        return true;
    return false;
}

TUNNELMIB::TunnelIfTable::TunnelIfTable()
    :
    tunnelifentry(this, {"ifindex"})
{

    yang_name = "tunnelIfTable"; yang_parent_name = "TUNNEL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

TUNNELMIB::TunnelIfTable::~TunnelIfTable()
{
}

bool TUNNELMIB::TunnelIfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnelifentry.len(); index++)
    {
        if(tunnelifentry[index]->has_data())
            return true;
    }
    return false;
}

bool TUNNELMIB::TunnelIfTable::has_operation() const
{
    for (std::size_t index=0; index<tunnelifentry.len(); index++)
    {
        if(tunnelifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TUNNELMIB::TunnelIfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TUNNEL-MIB:TUNNEL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TUNNELMIB::TunnelIfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TUNNELMIB::TunnelIfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TUNNELMIB::TunnelIfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnelIfEntry")
    {
        auto c = std::make_shared<TUNNELMIB::TunnelIfTable::TunnelIfEntry>();
        c->parent = this;
        tunnelifentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TUNNELMIB::TunnelIfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnelifentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TUNNELMIB::TunnelIfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TUNNELMIB::TunnelIfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TUNNELMIB::TunnelIfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelIfEntry")
        return true;
    return false;
}

TUNNELMIB::TunnelIfTable::TunnelIfEntry::TunnelIfEntry()
    :
    ifindex{YType::str, "ifIndex"},
    tunneliflocaladdress{YType::str, "tunnelIfLocalAddress"},
    tunnelifremoteaddress{YType::str, "tunnelIfRemoteAddress"},
    tunnelifencapsmethod{YType::enumeration, "tunnelIfEncapsMethod"},
    tunnelifhoplimit{YType::int32, "tunnelIfHopLimit"},
    tunnelifsecurity{YType::enumeration, "tunnelIfSecurity"},
    tunneliftos{YType::int32, "tunnelIfTOS"},
    tunnelifflowlabel{YType::int32, "tunnelIfFlowLabel"},
    tunnelifaddresstype{YType::enumeration, "tunnelIfAddressType"},
    tunneliflocalinetaddress{YType::str, "tunnelIfLocalInetAddress"},
    tunnelifremoteinetaddress{YType::str, "tunnelIfRemoteInetAddress"},
    tunnelifencapslimit{YType::int32, "tunnelIfEncapsLimit"}
{

    yang_name = "tunnelIfEntry"; yang_parent_name = "tunnelIfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

TUNNELMIB::TunnelIfTable::TunnelIfEntry::~TunnelIfEntry()
{
}

bool TUNNELMIB::TunnelIfTable::TunnelIfEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| tunneliflocaladdress.is_set
	|| tunnelifremoteaddress.is_set
	|| tunnelifencapsmethod.is_set
	|| tunnelifhoplimit.is_set
	|| tunnelifsecurity.is_set
	|| tunneliftos.is_set
	|| tunnelifflowlabel.is_set
	|| tunnelifaddresstype.is_set
	|| tunneliflocalinetaddress.is_set
	|| tunnelifremoteinetaddress.is_set
	|| tunnelifencapslimit.is_set;
}

bool TUNNELMIB::TunnelIfTable::TunnelIfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(tunneliflocaladdress.yfilter)
	|| ydk::is_set(tunnelifremoteaddress.yfilter)
	|| ydk::is_set(tunnelifencapsmethod.yfilter)
	|| ydk::is_set(tunnelifhoplimit.yfilter)
	|| ydk::is_set(tunnelifsecurity.yfilter)
	|| ydk::is_set(tunneliftos.yfilter)
	|| ydk::is_set(tunnelifflowlabel.yfilter)
	|| ydk::is_set(tunnelifaddresstype.yfilter)
	|| ydk::is_set(tunneliflocalinetaddress.yfilter)
	|| ydk::is_set(tunnelifremoteinetaddress.yfilter)
	|| ydk::is_set(tunnelifencapslimit.yfilter);
}

std::string TUNNELMIB::TunnelIfTable::TunnelIfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TUNNEL-MIB:TUNNEL-MIB/tunnelIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string TUNNELMIB::TunnelIfTable::TunnelIfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelIfEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TUNNELMIB::TunnelIfTable::TunnelIfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (tunneliflocaladdress.is_set || is_set(tunneliflocaladdress.yfilter)) leaf_name_data.push_back(tunneliflocaladdress.get_name_leafdata());
    if (tunnelifremoteaddress.is_set || is_set(tunnelifremoteaddress.yfilter)) leaf_name_data.push_back(tunnelifremoteaddress.get_name_leafdata());
    if (tunnelifencapsmethod.is_set || is_set(tunnelifencapsmethod.yfilter)) leaf_name_data.push_back(tunnelifencapsmethod.get_name_leafdata());
    if (tunnelifhoplimit.is_set || is_set(tunnelifhoplimit.yfilter)) leaf_name_data.push_back(tunnelifhoplimit.get_name_leafdata());
    if (tunnelifsecurity.is_set || is_set(tunnelifsecurity.yfilter)) leaf_name_data.push_back(tunnelifsecurity.get_name_leafdata());
    if (tunneliftos.is_set || is_set(tunneliftos.yfilter)) leaf_name_data.push_back(tunneliftos.get_name_leafdata());
    if (tunnelifflowlabel.is_set || is_set(tunnelifflowlabel.yfilter)) leaf_name_data.push_back(tunnelifflowlabel.get_name_leafdata());
    if (tunnelifaddresstype.is_set || is_set(tunnelifaddresstype.yfilter)) leaf_name_data.push_back(tunnelifaddresstype.get_name_leafdata());
    if (tunneliflocalinetaddress.is_set || is_set(tunneliflocalinetaddress.yfilter)) leaf_name_data.push_back(tunneliflocalinetaddress.get_name_leafdata());
    if (tunnelifremoteinetaddress.is_set || is_set(tunnelifremoteinetaddress.yfilter)) leaf_name_data.push_back(tunnelifremoteinetaddress.get_name_leafdata());
    if (tunnelifencapslimit.is_set || is_set(tunnelifencapslimit.yfilter)) leaf_name_data.push_back(tunnelifencapslimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TUNNELMIB::TunnelIfTable::TunnelIfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TUNNELMIB::TunnelIfTable::TunnelIfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TUNNELMIB::TunnelIfTable::TunnelIfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfLocalAddress")
    {
        tunneliflocaladdress = value;
        tunneliflocaladdress.value_namespace = name_space;
        tunneliflocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfRemoteAddress")
    {
        tunnelifremoteaddress = value;
        tunnelifremoteaddress.value_namespace = name_space;
        tunnelifremoteaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfEncapsMethod")
    {
        tunnelifencapsmethod = value;
        tunnelifencapsmethod.value_namespace = name_space;
        tunnelifencapsmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfHopLimit")
    {
        tunnelifhoplimit = value;
        tunnelifhoplimit.value_namespace = name_space;
        tunnelifhoplimit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tunnelIfFlowLabel")
    {
        tunnelifflowlabel = value;
        tunnelifflowlabel.value_namespace = name_space;
        tunnelifflowlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfAddressType")
    {
        tunnelifaddresstype = value;
        tunnelifaddresstype.value_namespace = name_space;
        tunnelifaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfLocalInetAddress")
    {
        tunneliflocalinetaddress = value;
        tunneliflocalinetaddress.value_namespace = name_space;
        tunneliflocalinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfRemoteInetAddress")
    {
        tunnelifremoteinetaddress = value;
        tunnelifremoteinetaddress.value_namespace = name_space;
        tunnelifremoteinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelIfEncapsLimit")
    {
        tunnelifencapslimit = value;
        tunnelifencapslimit.value_namespace = name_space;
        tunnelifencapslimit.value_namespace_prefix = name_space_prefix;
    }
}

void TUNNELMIB::TunnelIfTable::TunnelIfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "tunnelIfLocalAddress")
    {
        tunneliflocaladdress.yfilter = yfilter;
    }
    if(value_path == "tunnelIfRemoteAddress")
    {
        tunnelifremoteaddress.yfilter = yfilter;
    }
    if(value_path == "tunnelIfEncapsMethod")
    {
        tunnelifencapsmethod.yfilter = yfilter;
    }
    if(value_path == "tunnelIfHopLimit")
    {
        tunnelifhoplimit.yfilter = yfilter;
    }
    if(value_path == "tunnelIfSecurity")
    {
        tunnelifsecurity.yfilter = yfilter;
    }
    if(value_path == "tunnelIfTOS")
    {
        tunneliftos.yfilter = yfilter;
    }
    if(value_path == "tunnelIfFlowLabel")
    {
        tunnelifflowlabel.yfilter = yfilter;
    }
    if(value_path == "tunnelIfAddressType")
    {
        tunnelifaddresstype.yfilter = yfilter;
    }
    if(value_path == "tunnelIfLocalInetAddress")
    {
        tunneliflocalinetaddress.yfilter = yfilter;
    }
    if(value_path == "tunnelIfRemoteInetAddress")
    {
        tunnelifremoteinetaddress.yfilter = yfilter;
    }
    if(value_path == "tunnelIfEncapsLimit")
    {
        tunnelifencapslimit.yfilter = yfilter;
    }
}

bool TUNNELMIB::TunnelIfTable::TunnelIfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "tunnelIfLocalAddress" || name == "tunnelIfRemoteAddress" || name == "tunnelIfEncapsMethod" || name == "tunnelIfHopLimit" || name == "tunnelIfSecurity" || name == "tunnelIfTOS" || name == "tunnelIfFlowLabel" || name == "tunnelIfAddressType" || name == "tunnelIfLocalInetAddress" || name == "tunnelIfRemoteInetAddress" || name == "tunnelIfEncapsLimit")
        return true;
    return false;
}

TUNNELMIB::TunnelConfigTable::TunnelConfigTable()
    :
    tunnelconfigentry(this, {"tunnelconfiglocaladdress", "tunnelconfigremoteaddress", "tunnelconfigencapsmethod", "tunnelconfigid"})
{

    yang_name = "tunnelConfigTable"; yang_parent_name = "TUNNEL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

TUNNELMIB::TunnelConfigTable::~TunnelConfigTable()
{
}

bool TUNNELMIB::TunnelConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnelconfigentry.len(); index++)
    {
        if(tunnelconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool TUNNELMIB::TunnelConfigTable::has_operation() const
{
    for (std::size_t index=0; index<tunnelconfigentry.len(); index++)
    {
        if(tunnelconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TUNNELMIB::TunnelConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TUNNEL-MIB:TUNNEL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TUNNELMIB::TunnelConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TUNNELMIB::TunnelConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TUNNELMIB::TunnelConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnelConfigEntry")
    {
        auto c = std::make_shared<TUNNELMIB::TunnelConfigTable::TunnelConfigEntry>();
        c->parent = this;
        tunnelconfigentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TUNNELMIB::TunnelConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnelconfigentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TUNNELMIB::TunnelConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TUNNELMIB::TunnelConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TUNNELMIB::TunnelConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelConfigEntry")
        return true;
    return false;
}

TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::TunnelConfigEntry()
    :
    tunnelconfiglocaladdress{YType::str, "tunnelConfigLocalAddress"},
    tunnelconfigremoteaddress{YType::str, "tunnelConfigRemoteAddress"},
    tunnelconfigencapsmethod{YType::enumeration, "tunnelConfigEncapsMethod"},
    tunnelconfigid{YType::int32, "tunnelConfigID"},
    tunnelconfigifindex{YType::int32, "tunnelConfigIfIndex"},
    tunnelconfigstatus{YType::enumeration, "tunnelConfigStatus"}
{

    yang_name = "tunnelConfigEntry"; yang_parent_name = "tunnelConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::~TunnelConfigEntry()
{
}

bool TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return tunnelconfiglocaladdress.is_set
	|| tunnelconfigremoteaddress.is_set
	|| tunnelconfigencapsmethod.is_set
	|| tunnelconfigid.is_set
	|| tunnelconfigifindex.is_set
	|| tunnelconfigstatus.is_set;
}

bool TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnelconfiglocaladdress.yfilter)
	|| ydk::is_set(tunnelconfigremoteaddress.yfilter)
	|| ydk::is_set(tunnelconfigencapsmethod.yfilter)
	|| ydk::is_set(tunnelconfigid.yfilter)
	|| ydk::is_set(tunnelconfigifindex.yfilter)
	|| ydk::is_set(tunnelconfigstatus.yfilter);
}

std::string TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TUNNEL-MIB:TUNNEL-MIB/tunnelConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelConfigEntry";
    ADD_KEY_TOKEN(tunnelconfiglocaladdress, "tunnelConfigLocalAddress");
    ADD_KEY_TOKEN(tunnelconfigremoteaddress, "tunnelConfigRemoteAddress");
    ADD_KEY_TOKEN(tunnelconfigencapsmethod, "tunnelConfigEncapsMethod");
    ADD_KEY_TOKEN(tunnelconfigid, "tunnelConfigID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnelconfiglocaladdress.is_set || is_set(tunnelconfiglocaladdress.yfilter)) leaf_name_data.push_back(tunnelconfiglocaladdress.get_name_leafdata());
    if (tunnelconfigremoteaddress.is_set || is_set(tunnelconfigremoteaddress.yfilter)) leaf_name_data.push_back(tunnelconfigremoteaddress.get_name_leafdata());
    if (tunnelconfigencapsmethod.is_set || is_set(tunnelconfigencapsmethod.yfilter)) leaf_name_data.push_back(tunnelconfigencapsmethod.get_name_leafdata());
    if (tunnelconfigid.is_set || is_set(tunnelconfigid.yfilter)) leaf_name_data.push_back(tunnelconfigid.get_name_leafdata());
    if (tunnelconfigifindex.is_set || is_set(tunnelconfigifindex.yfilter)) leaf_name_data.push_back(tunnelconfigifindex.get_name_leafdata());
    if (tunnelconfigstatus.is_set || is_set(tunnelconfigstatus.yfilter)) leaf_name_data.push_back(tunnelconfigstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool TUNNELMIB::TunnelConfigTable::TunnelConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelConfigLocalAddress" || name == "tunnelConfigRemoteAddress" || name == "tunnelConfigEncapsMethod" || name == "tunnelConfigID" || name == "tunnelConfigIfIndex" || name == "tunnelConfigStatus")
        return true;
    return false;
}

TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigTable()
    :
    tunnelinetconfigentry(this, {"tunnelinetconfigaddresstype", "tunnelinetconfiglocaladdress", "tunnelinetconfigremoteaddress", "tunnelinetconfigencapsmethod", "tunnelinetconfigid"})
{

    yang_name = "tunnelInetConfigTable"; yang_parent_name = "TUNNEL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

TUNNELMIB::TunnelInetConfigTable::~TunnelInetConfigTable()
{
}

bool TUNNELMIB::TunnelInetConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnelinetconfigentry.len(); index++)
    {
        if(tunnelinetconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool TUNNELMIB::TunnelInetConfigTable::has_operation() const
{
    for (std::size_t index=0; index<tunnelinetconfigentry.len(); index++)
    {
        if(tunnelinetconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TUNNELMIB::TunnelInetConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TUNNEL-MIB:TUNNEL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TUNNELMIB::TunnelInetConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelInetConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TUNNELMIB::TunnelInetConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TUNNELMIB::TunnelInetConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnelInetConfigEntry")
    {
        auto c = std::make_shared<TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry>();
        c->parent = this;
        tunnelinetconfigentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TUNNELMIB::TunnelInetConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnelinetconfigentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TUNNELMIB::TunnelInetConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TUNNELMIB::TunnelInetConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TUNNELMIB::TunnelInetConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelInetConfigEntry")
        return true;
    return false;
}

TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::TunnelInetConfigEntry()
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

    yang_name = "tunnelInetConfigEntry"; yang_parent_name = "tunnelInetConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::~TunnelInetConfigEntry()
{
}

bool TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return tunnelinetconfigaddresstype.is_set
	|| tunnelinetconfiglocaladdress.is_set
	|| tunnelinetconfigremoteaddress.is_set
	|| tunnelinetconfigencapsmethod.is_set
	|| tunnelinetconfigid.is_set
	|| tunnelinetconfigifindex.is_set
	|| tunnelinetconfigstatus.is_set
	|| tunnelinetconfigstoragetype.is_set;
}

bool TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::has_operation() const
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

std::string TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TUNNEL-MIB:TUNNEL-MIB/tunnelInetConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelInetConfigEntry";
    ADD_KEY_TOKEN(tunnelinetconfigaddresstype, "tunnelInetConfigAddressType");
    ADD_KEY_TOKEN(tunnelinetconfiglocaladdress, "tunnelInetConfigLocalAddress");
    ADD_KEY_TOKEN(tunnelinetconfigremoteaddress, "tunnelInetConfigRemoteAddress");
    ADD_KEY_TOKEN(tunnelinetconfigencapsmethod, "tunnelInetConfigEncapsMethod");
    ADD_KEY_TOKEN(tunnelinetconfigid, "tunnelInetConfigID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnelinetconfigaddresstype.is_set || is_set(tunnelinetconfigaddresstype.yfilter)) leaf_name_data.push_back(tunnelinetconfigaddresstype.get_name_leafdata());
    if (tunnelinetconfiglocaladdress.is_set || is_set(tunnelinetconfiglocaladdress.yfilter)) leaf_name_data.push_back(tunnelinetconfiglocaladdress.get_name_leafdata());
    if (tunnelinetconfigremoteaddress.is_set || is_set(tunnelinetconfigremoteaddress.yfilter)) leaf_name_data.push_back(tunnelinetconfigremoteaddress.get_name_leafdata());
    if (tunnelinetconfigencapsmethod.is_set || is_set(tunnelinetconfigencapsmethod.yfilter)) leaf_name_data.push_back(tunnelinetconfigencapsmethod.get_name_leafdata());
    if (tunnelinetconfigid.is_set || is_set(tunnelinetconfigid.yfilter)) leaf_name_data.push_back(tunnelinetconfigid.get_name_leafdata());
    if (tunnelinetconfigifindex.is_set || is_set(tunnelinetconfigifindex.yfilter)) leaf_name_data.push_back(tunnelinetconfigifindex.get_name_leafdata());
    if (tunnelinetconfigstatus.is_set || is_set(tunnelinetconfigstatus.yfilter)) leaf_name_data.push_back(tunnelinetconfigstatus.get_name_leafdata());
    if (tunnelinetconfigstoragetype.is_set || is_set(tunnelinetconfigstoragetype.yfilter)) leaf_name_data.push_back(tunnelinetconfigstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnelInetConfigAddressType" || name == "tunnelInetConfigLocalAddress" || name == "tunnelInetConfigRemoteAddress" || name == "tunnelInetConfigEncapsMethod" || name == "tunnelInetConfigID" || name == "tunnelInetConfigIfIndex" || name == "tunnelInetConfigStatus" || name == "tunnelInetConfigStorageType")
        return true;
    return false;
}

const Enum::YLeaf TUNNELMIB::TunnelIfTable::TunnelIfEntry::TunnelIfSecurity::none {1, "none"};
const Enum::YLeaf TUNNELMIB::TunnelIfTable::TunnelIfEntry::TunnelIfSecurity::ipsec {2, "ipsec"};
const Enum::YLeaf TUNNELMIB::TunnelIfTable::TunnelIfEntry::TunnelIfSecurity::other {3, "other"};


}
}

