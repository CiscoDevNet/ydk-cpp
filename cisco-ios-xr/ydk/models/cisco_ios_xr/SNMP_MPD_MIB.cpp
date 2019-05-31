
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_MPD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace SNMP_MPD_MIB {

SNMPMPDMIB::SNMPMPDMIB()
    :
    snmpmpdstats(std::make_shared<SNMPMPDMIB::SnmpMPDStats>())
{
    snmpmpdstats->parent = this;

    yang_name = "SNMP-MPD-MIB"; yang_parent_name = "SNMP-MPD-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

SNMPMPDMIB::~SNMPMPDMIB()
{
}

bool SNMPMPDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (snmpmpdstats !=  nullptr && snmpmpdstats->has_data());
}

bool SNMPMPDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (snmpmpdstats !=  nullptr && snmpmpdstats->has_operation());
}

std::string SNMPMPDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-MPD-MIB:SNMP-MPD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPMPDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPMPDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpMPDStats")
    {
        if(snmpmpdstats == nullptr)
        {
            snmpmpdstats = std::make_shared<SNMPMPDMIB::SnmpMPDStats>();
        }
        return snmpmpdstats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPMPDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmpmpdstats != nullptr)
    {
        _children["snmpMPDStats"] = snmpmpdstats;
    }

    return _children;
}

void SNMPMPDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPMPDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SNMPMPDMIB::clone_ptr() const
{
    return std::make_shared<SNMPMPDMIB>();
}

std::string SNMPMPDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SNMPMPDMIB::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SNMPMPDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPMPDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SNMPMPDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpMPDStats")
        return true;
    return false;
}

SNMPMPDMIB::SnmpMPDStats::SnmpMPDStats()
    :
    snmpunknownsecuritymodels{YType::uint32, "snmpUnknownSecurityModels"},
    snmpinvalidmsgs{YType::uint32, "snmpInvalidMsgs"},
    snmpunknownpduhandlers{YType::uint32, "snmpUnknownPDUHandlers"}
{

    yang_name = "snmpMPDStats"; yang_parent_name = "SNMP-MPD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPMPDMIB::SnmpMPDStats::~SnmpMPDStats()
{
}

bool SNMPMPDMIB::SnmpMPDStats::has_data() const
{
    if (is_presence_container) return true;
    return snmpunknownsecuritymodels.is_set
	|| snmpinvalidmsgs.is_set
	|| snmpunknownpduhandlers.is_set;
}

bool SNMPMPDMIB::SnmpMPDStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpunknownsecuritymodels.yfilter)
	|| ydk::is_set(snmpinvalidmsgs.yfilter)
	|| ydk::is_set(snmpunknownpduhandlers.yfilter);
}

std::string SNMPMPDMIB::SnmpMPDStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-MPD-MIB:SNMP-MPD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPMPDMIB::SnmpMPDStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpMPDStats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPMPDMIB::SnmpMPDStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpunknownsecuritymodels.is_set || is_set(snmpunknownsecuritymodels.yfilter)) leaf_name_data.push_back(snmpunknownsecuritymodels.get_name_leafdata());
    if (snmpinvalidmsgs.is_set || is_set(snmpinvalidmsgs.yfilter)) leaf_name_data.push_back(snmpinvalidmsgs.get_name_leafdata());
    if (snmpunknownpduhandlers.is_set || is_set(snmpunknownpduhandlers.yfilter)) leaf_name_data.push_back(snmpunknownpduhandlers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPMPDMIB::SnmpMPDStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPMPDMIB::SnmpMPDStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPMPDMIB::SnmpMPDStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpUnknownSecurityModels")
    {
        snmpunknownsecuritymodels = value;
        snmpunknownsecuritymodels.value_namespace = name_space;
        snmpunknownsecuritymodels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInvalidMsgs")
    {
        snmpinvalidmsgs = value;
        snmpinvalidmsgs.value_namespace = name_space;
        snmpinvalidmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpUnknownPDUHandlers")
    {
        snmpunknownpduhandlers = value;
        snmpunknownpduhandlers.value_namespace = name_space;
        snmpunknownpduhandlers.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPMPDMIB::SnmpMPDStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpUnknownSecurityModels")
    {
        snmpunknownsecuritymodels.yfilter = yfilter;
    }
    if(value_path == "snmpInvalidMsgs")
    {
        snmpinvalidmsgs.yfilter = yfilter;
    }
    if(value_path == "snmpUnknownPDUHandlers")
    {
        snmpunknownpduhandlers.yfilter = yfilter;
    }
}

bool SNMPMPDMIB::SnmpMPDStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpUnknownSecurityModels" || name == "snmpInvalidMsgs" || name == "snmpUnknownPDUHandlers")
        return true;
    return false;
}


}
}

