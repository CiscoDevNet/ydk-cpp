
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "POWER_ETHERNET_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace POWER_ETHERNET_MIB {

POWERETHERNETMIB::POWERETHERNETMIB()
    :
    pethpseporttable(std::make_shared<POWERETHERNETMIB::Pethpseporttable>())
	,pethmainpsetable(std::make_shared<POWERETHERNETMIB::Pethmainpsetable>())
	,pethnotificationcontroltable(std::make_shared<POWERETHERNETMIB::Pethnotificationcontroltable>())
{
    pethpseporttable->parent = this;
    pethmainpsetable->parent = this;
    pethnotificationcontroltable->parent = this;

    yang_name = "POWER-ETHERNET-MIB"; yang_parent_name = "POWER-ETHERNET-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

POWERETHERNETMIB::~POWERETHERNETMIB()
{
}

bool POWERETHERNETMIB::has_data() const
{
    return (pethpseporttable !=  nullptr && pethpseporttable->has_data())
	|| (pethmainpsetable !=  nullptr && pethmainpsetable->has_data())
	|| (pethnotificationcontroltable !=  nullptr && pethnotificationcontroltable->has_data());
}

bool POWERETHERNETMIB::has_operation() const
{
    return is_set(yfilter)
	|| (pethpseporttable !=  nullptr && pethpseporttable->has_operation())
	|| (pethmainpsetable !=  nullptr && pethmainpsetable->has_operation())
	|| (pethnotificationcontroltable !=  nullptr && pethnotificationcontroltable->has_operation());
}

std::string POWERETHERNETMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "POWER-ETHERNET-MIB:POWER-ETHERNET-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > POWERETHERNETMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> POWERETHERNETMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pethPsePortTable")
    {
        if(pethpseporttable == nullptr)
        {
            pethpseporttable = std::make_shared<POWERETHERNETMIB::Pethpseporttable>();
        }
        return pethpseporttable;
    }

    if(child_yang_name == "pethMainPseTable")
    {
        if(pethmainpsetable == nullptr)
        {
            pethmainpsetable = std::make_shared<POWERETHERNETMIB::Pethmainpsetable>();
        }
        return pethmainpsetable;
    }

    if(child_yang_name == "pethNotificationControlTable")
    {
        if(pethnotificationcontroltable == nullptr)
        {
            pethnotificationcontroltable = std::make_shared<POWERETHERNETMIB::Pethnotificationcontroltable>();
        }
        return pethnotificationcontroltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> POWERETHERNETMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pethpseporttable != nullptr)
    {
        children["pethPsePortTable"] = pethpseporttable;
    }

    if(pethmainpsetable != nullptr)
    {
        children["pethMainPseTable"] = pethmainpsetable;
    }

    if(pethnotificationcontroltable != nullptr)
    {
        children["pethNotificationControlTable"] = pethnotificationcontroltable;
    }

    return children;
}

void POWERETHERNETMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void POWERETHERNETMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> POWERETHERNETMIB::clone_ptr() const
{
    return std::make_shared<POWERETHERNETMIB>();
}

std::string POWERETHERNETMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string POWERETHERNETMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function POWERETHERNETMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> POWERETHERNETMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool POWERETHERNETMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pethPsePortTable" || name == "pethMainPseTable" || name == "pethNotificationControlTable")
        return true;
    return false;
}

POWERETHERNETMIB::Pethpseporttable::Pethpseporttable()
{

    yang_name = "pethPsePortTable"; yang_parent_name = "POWER-ETHERNET-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

POWERETHERNETMIB::Pethpseporttable::~Pethpseporttable()
{
}

bool POWERETHERNETMIB::Pethpseporttable::has_data() const
{
    for (std::size_t index=0; index<pethpseportentry.size(); index++)
    {
        if(pethpseportentry[index]->has_data())
            return true;
    }
    return false;
}

bool POWERETHERNETMIB::Pethpseporttable::has_operation() const
{
    for (std::size_t index=0; index<pethpseportentry.size(); index++)
    {
        if(pethpseportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string POWERETHERNETMIB::Pethpseporttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "POWER-ETHERNET-MIB:POWER-ETHERNET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string POWERETHERNETMIB::Pethpseporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pethPsePortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > POWERETHERNETMIB::Pethpseporttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> POWERETHERNETMIB::Pethpseporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pethPsePortEntry")
    {
        auto c = std::make_shared<POWERETHERNETMIB::Pethpseporttable::Pethpseportentry>();
        c->parent = this;
        pethpseportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> POWERETHERNETMIB::Pethpseporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pethpseportentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void POWERETHERNETMIB::Pethpseporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void POWERETHERNETMIB::Pethpseporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool POWERETHERNETMIB::Pethpseporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pethPsePortEntry")
        return true;
    return false;
}

POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportentry()
    :
    pethpseportgroupindex{YType::int32, "pethPsePortGroupIndex"},
    pethpseportindex{YType::int32, "pethPsePortIndex"},
    pethpseportadminenable{YType::boolean, "pethPsePortAdminEnable"},
    pethpseportpowerpairscontrolability{YType::boolean, "pethPsePortPowerPairsControlAbility"},
    pethpseportpowerpairs{YType::enumeration, "pethPsePortPowerPairs"},
    pethpseportdetectionstatus{YType::enumeration, "pethPsePortDetectionStatus"},
    pethpseportpowerpriority{YType::enumeration, "pethPsePortPowerPriority"},
    pethpseportmpsabsentcounter{YType::uint32, "pethPsePortMPSAbsentCounter"},
    pethpseporttype{YType::str, "pethPsePortType"},
    pethpseportpowerclassifications{YType::enumeration, "pethPsePortPowerClassifications"},
    pethpseportinvalidsignaturecounter{YType::uint32, "pethPsePortInvalidSignatureCounter"},
    pethpseportpowerdeniedcounter{YType::uint32, "pethPsePortPowerDeniedCounter"},
    pethpseportoverloadcounter{YType::uint32, "pethPsePortOverLoadCounter"},
    pethpseportshortcounter{YType::uint32, "pethPsePortShortCounter"},
    cpeextpseportenable{YType::enumeration, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortEnable"},
    cpeextpseportdiscovermode{YType::enumeration, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortDiscoverMode"},
    cpeextpseportdevicedetected{YType::boolean, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortDeviceDetected"},
    cpeextpseportieeepd{YType::boolean, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortIeeePd"},
    cpeextpseportadditionalstatus{YType::bits, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortAdditionalStatus"},
    cpeextpseportpwrmax{YType::uint32, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrMax"},
    cpeextpseportpwrallocated{YType::uint32, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrAllocated"},
    cpeextpseportpwravailable{YType::uint32, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrAvailable"},
    cpeextpseportpwrconsumption{YType::uint32, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrConsumption"},
    cpeextpseportmaxpwrdrawn{YType::uint32, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortMaxPwrDrawn"},
    cpeextpseportentphyindex{YType::int32, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortEntPhyIndex"},
    cpeextpseportpolicingcapable{YType::boolean, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPolicingCapable"},
    cpeextpseportpolicingenable{YType::enumeration, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPolicingEnable"},
    cpeextpseportpolicingaction{YType::enumeration, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPolicingAction"},
    cpeextpseportpwrmanalloc{YType::uint32, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrManAlloc"},
    cpeextpseportcapabilities{YType::bits, "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortCapabilities"}
{

    yang_name = "pethPsePortEntry"; yang_parent_name = "pethPsePortTable"; is_top_level_class = false; has_list_ancestor = false;
}

POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::~Pethpseportentry()
{
}

bool POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::has_data() const
{
    return pethpseportgroupindex.is_set
	|| pethpseportindex.is_set
	|| pethpseportadminenable.is_set
	|| pethpseportpowerpairscontrolability.is_set
	|| pethpseportpowerpairs.is_set
	|| pethpseportdetectionstatus.is_set
	|| pethpseportpowerpriority.is_set
	|| pethpseportmpsabsentcounter.is_set
	|| pethpseporttype.is_set
	|| pethpseportpowerclassifications.is_set
	|| pethpseportinvalidsignaturecounter.is_set
	|| pethpseportpowerdeniedcounter.is_set
	|| pethpseportoverloadcounter.is_set
	|| pethpseportshortcounter.is_set
	|| cpeextpseportenable.is_set
	|| cpeextpseportdiscovermode.is_set
	|| cpeextpseportdevicedetected.is_set
	|| cpeextpseportieeepd.is_set
	|| cpeextpseportadditionalstatus.is_set
	|| cpeextpseportpwrmax.is_set
	|| cpeextpseportpwrallocated.is_set
	|| cpeextpseportpwravailable.is_set
	|| cpeextpseportpwrconsumption.is_set
	|| cpeextpseportmaxpwrdrawn.is_set
	|| cpeextpseportentphyindex.is_set
	|| cpeextpseportpolicingcapable.is_set
	|| cpeextpseportpolicingenable.is_set
	|| cpeextpseportpolicingaction.is_set
	|| cpeextpseportpwrmanalloc.is_set
	|| cpeextpseportcapabilities.is_set;
}

bool POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pethpseportgroupindex.yfilter)
	|| ydk::is_set(pethpseportindex.yfilter)
	|| ydk::is_set(pethpseportadminenable.yfilter)
	|| ydk::is_set(pethpseportpowerpairscontrolability.yfilter)
	|| ydk::is_set(pethpseportpowerpairs.yfilter)
	|| ydk::is_set(pethpseportdetectionstatus.yfilter)
	|| ydk::is_set(pethpseportpowerpriority.yfilter)
	|| ydk::is_set(pethpseportmpsabsentcounter.yfilter)
	|| ydk::is_set(pethpseporttype.yfilter)
	|| ydk::is_set(pethpseportpowerclassifications.yfilter)
	|| ydk::is_set(pethpseportinvalidsignaturecounter.yfilter)
	|| ydk::is_set(pethpseportpowerdeniedcounter.yfilter)
	|| ydk::is_set(pethpseportoverloadcounter.yfilter)
	|| ydk::is_set(pethpseportshortcounter.yfilter)
	|| ydk::is_set(cpeextpseportenable.yfilter)
	|| ydk::is_set(cpeextpseportdiscovermode.yfilter)
	|| ydk::is_set(cpeextpseportdevicedetected.yfilter)
	|| ydk::is_set(cpeextpseportieeepd.yfilter)
	|| ydk::is_set(cpeextpseportadditionalstatus.yfilter)
	|| ydk::is_set(cpeextpseportpwrmax.yfilter)
	|| ydk::is_set(cpeextpseportpwrallocated.yfilter)
	|| ydk::is_set(cpeextpseportpwravailable.yfilter)
	|| ydk::is_set(cpeextpseportpwrconsumption.yfilter)
	|| ydk::is_set(cpeextpseportmaxpwrdrawn.yfilter)
	|| ydk::is_set(cpeextpseportentphyindex.yfilter)
	|| ydk::is_set(cpeextpseportpolicingcapable.yfilter)
	|| ydk::is_set(cpeextpseportpolicingenable.yfilter)
	|| ydk::is_set(cpeextpseportpolicingaction.yfilter)
	|| ydk::is_set(cpeextpseportpwrmanalloc.yfilter)
	|| ydk::is_set(cpeextpseportcapabilities.yfilter);
}

std::string POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "POWER-ETHERNET-MIB:POWER-ETHERNET-MIB/pethPsePortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pethPsePortEntry" <<"[pethPsePortGroupIndex='" <<pethpseportgroupindex <<"']" <<"[pethPsePortIndex='" <<pethpseportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pethpseportgroupindex.is_set || is_set(pethpseportgroupindex.yfilter)) leaf_name_data.push_back(pethpseportgroupindex.get_name_leafdata());
    if (pethpseportindex.is_set || is_set(pethpseportindex.yfilter)) leaf_name_data.push_back(pethpseportindex.get_name_leafdata());
    if (pethpseportadminenable.is_set || is_set(pethpseportadminenable.yfilter)) leaf_name_data.push_back(pethpseportadminenable.get_name_leafdata());
    if (pethpseportpowerpairscontrolability.is_set || is_set(pethpseportpowerpairscontrolability.yfilter)) leaf_name_data.push_back(pethpseportpowerpairscontrolability.get_name_leafdata());
    if (pethpseportpowerpairs.is_set || is_set(pethpseportpowerpairs.yfilter)) leaf_name_data.push_back(pethpseportpowerpairs.get_name_leafdata());
    if (pethpseportdetectionstatus.is_set || is_set(pethpseportdetectionstatus.yfilter)) leaf_name_data.push_back(pethpseportdetectionstatus.get_name_leafdata());
    if (pethpseportpowerpriority.is_set || is_set(pethpseportpowerpriority.yfilter)) leaf_name_data.push_back(pethpseportpowerpriority.get_name_leafdata());
    if (pethpseportmpsabsentcounter.is_set || is_set(pethpseportmpsabsentcounter.yfilter)) leaf_name_data.push_back(pethpseportmpsabsentcounter.get_name_leafdata());
    if (pethpseporttype.is_set || is_set(pethpseporttype.yfilter)) leaf_name_data.push_back(pethpseporttype.get_name_leafdata());
    if (pethpseportpowerclassifications.is_set || is_set(pethpseportpowerclassifications.yfilter)) leaf_name_data.push_back(pethpseportpowerclassifications.get_name_leafdata());
    if (pethpseportinvalidsignaturecounter.is_set || is_set(pethpseportinvalidsignaturecounter.yfilter)) leaf_name_data.push_back(pethpseportinvalidsignaturecounter.get_name_leafdata());
    if (pethpseportpowerdeniedcounter.is_set || is_set(pethpseportpowerdeniedcounter.yfilter)) leaf_name_data.push_back(pethpseportpowerdeniedcounter.get_name_leafdata());
    if (pethpseportoverloadcounter.is_set || is_set(pethpseportoverloadcounter.yfilter)) leaf_name_data.push_back(pethpseportoverloadcounter.get_name_leafdata());
    if (pethpseportshortcounter.is_set || is_set(pethpseportshortcounter.yfilter)) leaf_name_data.push_back(pethpseportshortcounter.get_name_leafdata());
    if (cpeextpseportenable.is_set || is_set(cpeextpseportenable.yfilter)) leaf_name_data.push_back(cpeextpseportenable.get_name_leafdata());
    if (cpeextpseportdiscovermode.is_set || is_set(cpeextpseportdiscovermode.yfilter)) leaf_name_data.push_back(cpeextpseportdiscovermode.get_name_leafdata());
    if (cpeextpseportdevicedetected.is_set || is_set(cpeextpseportdevicedetected.yfilter)) leaf_name_data.push_back(cpeextpseportdevicedetected.get_name_leafdata());
    if (cpeextpseportieeepd.is_set || is_set(cpeextpseportieeepd.yfilter)) leaf_name_data.push_back(cpeextpseportieeepd.get_name_leafdata());
    if (cpeextpseportadditionalstatus.is_set || is_set(cpeextpseportadditionalstatus.yfilter)) leaf_name_data.push_back(cpeextpseportadditionalstatus.get_name_leafdata());
    if (cpeextpseportpwrmax.is_set || is_set(cpeextpseportpwrmax.yfilter)) leaf_name_data.push_back(cpeextpseportpwrmax.get_name_leafdata());
    if (cpeextpseportpwrallocated.is_set || is_set(cpeextpseportpwrallocated.yfilter)) leaf_name_data.push_back(cpeextpseportpwrallocated.get_name_leafdata());
    if (cpeextpseportpwravailable.is_set || is_set(cpeextpseportpwravailable.yfilter)) leaf_name_data.push_back(cpeextpseportpwravailable.get_name_leafdata());
    if (cpeextpseportpwrconsumption.is_set || is_set(cpeextpseportpwrconsumption.yfilter)) leaf_name_data.push_back(cpeextpseportpwrconsumption.get_name_leafdata());
    if (cpeextpseportmaxpwrdrawn.is_set || is_set(cpeextpseportmaxpwrdrawn.yfilter)) leaf_name_data.push_back(cpeextpseportmaxpwrdrawn.get_name_leafdata());
    if (cpeextpseportentphyindex.is_set || is_set(cpeextpseportentphyindex.yfilter)) leaf_name_data.push_back(cpeextpseportentphyindex.get_name_leafdata());
    if (cpeextpseportpolicingcapable.is_set || is_set(cpeextpseportpolicingcapable.yfilter)) leaf_name_data.push_back(cpeextpseportpolicingcapable.get_name_leafdata());
    if (cpeextpseportpolicingenable.is_set || is_set(cpeextpseportpolicingenable.yfilter)) leaf_name_data.push_back(cpeextpseportpolicingenable.get_name_leafdata());
    if (cpeextpseportpolicingaction.is_set || is_set(cpeextpseportpolicingaction.yfilter)) leaf_name_data.push_back(cpeextpseportpolicingaction.get_name_leafdata());
    if (cpeextpseportpwrmanalloc.is_set || is_set(cpeextpseportpwrmanalloc.yfilter)) leaf_name_data.push_back(cpeextpseportpwrmanalloc.get_name_leafdata());
    if (cpeextpseportcapabilities.is_set || is_set(cpeextpseportcapabilities.yfilter)) leaf_name_data.push_back(cpeextpseportcapabilities.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pethPsePortGroupIndex")
    {
        pethpseportgroupindex = value;
        pethpseportgroupindex.value_namespace = name_space;
        pethpseportgroupindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortIndex")
    {
        pethpseportindex = value;
        pethpseportindex.value_namespace = name_space;
        pethpseportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortAdminEnable")
    {
        pethpseportadminenable = value;
        pethpseportadminenable.value_namespace = name_space;
        pethpseportadminenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortPowerPairsControlAbility")
    {
        pethpseportpowerpairscontrolability = value;
        pethpseportpowerpairscontrolability.value_namespace = name_space;
        pethpseportpowerpairscontrolability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortPowerPairs")
    {
        pethpseportpowerpairs = value;
        pethpseportpowerpairs.value_namespace = name_space;
        pethpseportpowerpairs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortDetectionStatus")
    {
        pethpseportdetectionstatus = value;
        pethpseportdetectionstatus.value_namespace = name_space;
        pethpseportdetectionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortPowerPriority")
    {
        pethpseportpowerpriority = value;
        pethpseportpowerpriority.value_namespace = name_space;
        pethpseportpowerpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortMPSAbsentCounter")
    {
        pethpseportmpsabsentcounter = value;
        pethpseportmpsabsentcounter.value_namespace = name_space;
        pethpseportmpsabsentcounter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortType")
    {
        pethpseporttype = value;
        pethpseporttype.value_namespace = name_space;
        pethpseporttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortPowerClassifications")
    {
        pethpseportpowerclassifications = value;
        pethpseportpowerclassifications.value_namespace = name_space;
        pethpseportpowerclassifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortInvalidSignatureCounter")
    {
        pethpseportinvalidsignaturecounter = value;
        pethpseportinvalidsignaturecounter.value_namespace = name_space;
        pethpseportinvalidsignaturecounter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortPowerDeniedCounter")
    {
        pethpseportpowerdeniedcounter = value;
        pethpseportpowerdeniedcounter.value_namespace = name_space;
        pethpseportpowerdeniedcounter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortOverLoadCounter")
    {
        pethpseportoverloadcounter = value;
        pethpseportoverloadcounter.value_namespace = name_space;
        pethpseportoverloadcounter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortShortCounter")
    {
        pethpseportshortcounter = value;
        pethpseportshortcounter.value_namespace = name_space;
        pethpseportshortcounter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortEnable")
    {
        cpeextpseportenable = value;
        cpeextpseportenable.value_namespace = name_space;
        cpeextpseportenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortDiscoverMode")
    {
        cpeextpseportdiscovermode = value;
        cpeextpseportdiscovermode.value_namespace = name_space;
        cpeextpseportdiscovermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortDeviceDetected")
    {
        cpeextpseportdevicedetected = value;
        cpeextpseportdevicedetected.value_namespace = name_space;
        cpeextpseportdevicedetected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortIeeePd")
    {
        cpeextpseportieeepd = value;
        cpeextpseportieeepd.value_namespace = name_space;
        cpeextpseportieeepd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortAdditionalStatus")
    {
        cpeextpseportadditionalstatus[value] = true;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrMax")
    {
        cpeextpseportpwrmax = value;
        cpeextpseportpwrmax.value_namespace = name_space;
        cpeextpseportpwrmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrAllocated")
    {
        cpeextpseportpwrallocated = value;
        cpeextpseportpwrallocated.value_namespace = name_space;
        cpeextpseportpwrallocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrAvailable")
    {
        cpeextpseportpwravailable = value;
        cpeextpseportpwravailable.value_namespace = name_space;
        cpeextpseportpwravailable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrConsumption")
    {
        cpeextpseportpwrconsumption = value;
        cpeextpseportpwrconsumption.value_namespace = name_space;
        cpeextpseportpwrconsumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortMaxPwrDrawn")
    {
        cpeextpseportmaxpwrdrawn = value;
        cpeextpseportmaxpwrdrawn.value_namespace = name_space;
        cpeextpseportmaxpwrdrawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortEntPhyIndex")
    {
        cpeextpseportentphyindex = value;
        cpeextpseportentphyindex.value_namespace = name_space;
        cpeextpseportentphyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPolicingCapable")
    {
        cpeextpseportpolicingcapable = value;
        cpeextpseportpolicingcapable.value_namespace = name_space;
        cpeextpseportpolicingcapable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPolicingEnable")
    {
        cpeextpseportpolicingenable = value;
        cpeextpseportpolicingenable.value_namespace = name_space;
        cpeextpseportpolicingenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPolicingAction")
    {
        cpeextpseportpolicingaction = value;
        cpeextpseportpolicingaction.value_namespace = name_space;
        cpeextpseportpolicingaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortPwrManAlloc")
    {
        cpeextpseportpwrmanalloc = value;
        cpeextpseportpwrmanalloc.value_namespace = name_space;
        cpeextpseportpwrmanalloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-POWER-ETHERNET-EXT-MIB:cpeExtPsePortCapabilities")
    {
        cpeextpseportcapabilities[value] = true;
    }
}

void POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pethPsePortGroupIndex")
    {
        pethpseportgroupindex.yfilter = yfilter;
    }
    if(value_path == "pethPsePortIndex")
    {
        pethpseportindex.yfilter = yfilter;
    }
    if(value_path == "pethPsePortAdminEnable")
    {
        pethpseportadminenable.yfilter = yfilter;
    }
    if(value_path == "pethPsePortPowerPairsControlAbility")
    {
        pethpseportpowerpairscontrolability.yfilter = yfilter;
    }
    if(value_path == "pethPsePortPowerPairs")
    {
        pethpseportpowerpairs.yfilter = yfilter;
    }
    if(value_path == "pethPsePortDetectionStatus")
    {
        pethpseportdetectionstatus.yfilter = yfilter;
    }
    if(value_path == "pethPsePortPowerPriority")
    {
        pethpseportpowerpriority.yfilter = yfilter;
    }
    if(value_path == "pethPsePortMPSAbsentCounter")
    {
        pethpseportmpsabsentcounter.yfilter = yfilter;
    }
    if(value_path == "pethPsePortType")
    {
        pethpseporttype.yfilter = yfilter;
    }
    if(value_path == "pethPsePortPowerClassifications")
    {
        pethpseportpowerclassifications.yfilter = yfilter;
    }
    if(value_path == "pethPsePortInvalidSignatureCounter")
    {
        pethpseportinvalidsignaturecounter.yfilter = yfilter;
    }
    if(value_path == "pethPsePortPowerDeniedCounter")
    {
        pethpseportpowerdeniedcounter.yfilter = yfilter;
    }
    if(value_path == "pethPsePortOverLoadCounter")
    {
        pethpseportoverloadcounter.yfilter = yfilter;
    }
    if(value_path == "pethPsePortShortCounter")
    {
        pethpseportshortcounter.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortEnable")
    {
        cpeextpseportenable.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortDiscoverMode")
    {
        cpeextpseportdiscovermode.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortDeviceDetected")
    {
        cpeextpseportdevicedetected.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortIeeePd")
    {
        cpeextpseportieeepd.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortAdditionalStatus")
    {
        cpeextpseportadditionalstatus.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortPwrMax")
    {
        cpeextpseportpwrmax.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortPwrAllocated")
    {
        cpeextpseportpwrallocated.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortPwrAvailable")
    {
        cpeextpseportpwravailable.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortPwrConsumption")
    {
        cpeextpseportpwrconsumption.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortMaxPwrDrawn")
    {
        cpeextpseportmaxpwrdrawn.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortEntPhyIndex")
    {
        cpeextpseportentphyindex.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortPolicingCapable")
    {
        cpeextpseportpolicingcapable.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortPolicingEnable")
    {
        cpeextpseportpolicingenable.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortPolicingAction")
    {
        cpeextpseportpolicingaction.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortPwrManAlloc")
    {
        cpeextpseportpwrmanalloc.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortCapabilities")
    {
        cpeextpseportcapabilities.yfilter = yfilter;
    }
}

bool POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pethPsePortGroupIndex" || name == "pethPsePortIndex" || name == "pethPsePortAdminEnable" || name == "pethPsePortPowerPairsControlAbility" || name == "pethPsePortPowerPairs" || name == "pethPsePortDetectionStatus" || name == "pethPsePortPowerPriority" || name == "pethPsePortMPSAbsentCounter" || name == "pethPsePortType" || name == "pethPsePortPowerClassifications" || name == "pethPsePortInvalidSignatureCounter" || name == "pethPsePortPowerDeniedCounter" || name == "pethPsePortOverLoadCounter" || name == "pethPsePortShortCounter" || name == "cpeExtPsePortEnable" || name == "cpeExtPsePortDiscoverMode" || name == "cpeExtPsePortDeviceDetected" || name == "cpeExtPsePortIeeePd" || name == "cpeExtPsePortAdditionalStatus" || name == "cpeExtPsePortPwrMax" || name == "cpeExtPsePortPwrAllocated" || name == "cpeExtPsePortPwrAvailable" || name == "cpeExtPsePortPwrConsumption" || name == "cpeExtPsePortMaxPwrDrawn" || name == "cpeExtPsePortEntPhyIndex" || name == "cpeExtPsePortPolicingCapable" || name == "cpeExtPsePortPolicingEnable" || name == "cpeExtPsePortPolicingAction" || name == "cpeExtPsePortPwrManAlloc" || name == "cpeExtPsePortCapabilities")
        return true;
    return false;
}

POWERETHERNETMIB::Pethmainpsetable::Pethmainpsetable()
{

    yang_name = "pethMainPseTable"; yang_parent_name = "POWER-ETHERNET-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

POWERETHERNETMIB::Pethmainpsetable::~Pethmainpsetable()
{
}

bool POWERETHERNETMIB::Pethmainpsetable::has_data() const
{
    for (std::size_t index=0; index<pethmainpseentry.size(); index++)
    {
        if(pethmainpseentry[index]->has_data())
            return true;
    }
    return false;
}

bool POWERETHERNETMIB::Pethmainpsetable::has_operation() const
{
    for (std::size_t index=0; index<pethmainpseentry.size(); index++)
    {
        if(pethmainpseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string POWERETHERNETMIB::Pethmainpsetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "POWER-ETHERNET-MIB:POWER-ETHERNET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string POWERETHERNETMIB::Pethmainpsetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pethMainPseTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > POWERETHERNETMIB::Pethmainpsetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> POWERETHERNETMIB::Pethmainpsetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pethMainPseEntry")
    {
        auto c = std::make_shared<POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry>();
        c->parent = this;
        pethmainpseentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> POWERETHERNETMIB::Pethmainpsetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pethmainpseentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void POWERETHERNETMIB::Pethmainpsetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void POWERETHERNETMIB::Pethmainpsetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool POWERETHERNETMIB::Pethmainpsetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pethMainPseEntry")
        return true;
    return false;
}

POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::Pethmainpseentry()
    :
    pethmainpsegroupindex{YType::int32, "pethMainPseGroupIndex"},
    pethmainpsepower{YType::uint32, "pethMainPsePower"},
    pethmainpseoperstatus{YType::enumeration, "pethMainPseOperStatus"},
    pethmainpseconsumptionpower{YType::uint32, "pethMainPseConsumptionPower"},
    pethmainpseusagethreshold{YType::int32, "pethMainPseUsageThreshold"}
{

    yang_name = "pethMainPseEntry"; yang_parent_name = "pethMainPseTable"; is_top_level_class = false; has_list_ancestor = false;
}

POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::~Pethmainpseentry()
{
}

bool POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::has_data() const
{
    return pethmainpsegroupindex.is_set
	|| pethmainpsepower.is_set
	|| pethmainpseoperstatus.is_set
	|| pethmainpseconsumptionpower.is_set
	|| pethmainpseusagethreshold.is_set;
}

bool POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pethmainpsegroupindex.yfilter)
	|| ydk::is_set(pethmainpsepower.yfilter)
	|| ydk::is_set(pethmainpseoperstatus.yfilter)
	|| ydk::is_set(pethmainpseconsumptionpower.yfilter)
	|| ydk::is_set(pethmainpseusagethreshold.yfilter);
}

std::string POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "POWER-ETHERNET-MIB:POWER-ETHERNET-MIB/pethMainPseTable/" << get_segment_path();
    return path_buffer.str();
}

std::string POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pethMainPseEntry" <<"[pethMainPseGroupIndex='" <<pethmainpsegroupindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pethmainpsegroupindex.is_set || is_set(pethmainpsegroupindex.yfilter)) leaf_name_data.push_back(pethmainpsegroupindex.get_name_leafdata());
    if (pethmainpsepower.is_set || is_set(pethmainpsepower.yfilter)) leaf_name_data.push_back(pethmainpsepower.get_name_leafdata());
    if (pethmainpseoperstatus.is_set || is_set(pethmainpseoperstatus.yfilter)) leaf_name_data.push_back(pethmainpseoperstatus.get_name_leafdata());
    if (pethmainpseconsumptionpower.is_set || is_set(pethmainpseconsumptionpower.yfilter)) leaf_name_data.push_back(pethmainpseconsumptionpower.get_name_leafdata());
    if (pethmainpseusagethreshold.is_set || is_set(pethmainpseusagethreshold.yfilter)) leaf_name_data.push_back(pethmainpseusagethreshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pethMainPseGroupIndex")
    {
        pethmainpsegroupindex = value;
        pethmainpsegroupindex.value_namespace = name_space;
        pethmainpsegroupindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethMainPsePower")
    {
        pethmainpsepower = value;
        pethmainpsepower.value_namespace = name_space;
        pethmainpsepower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethMainPseOperStatus")
    {
        pethmainpseoperstatus = value;
        pethmainpseoperstatus.value_namespace = name_space;
        pethmainpseoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethMainPseConsumptionPower")
    {
        pethmainpseconsumptionpower = value;
        pethmainpseconsumptionpower.value_namespace = name_space;
        pethmainpseconsumptionpower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethMainPseUsageThreshold")
    {
        pethmainpseusagethreshold = value;
        pethmainpseusagethreshold.value_namespace = name_space;
        pethmainpseusagethreshold.value_namespace_prefix = name_space_prefix;
    }
}

void POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pethMainPseGroupIndex")
    {
        pethmainpsegroupindex.yfilter = yfilter;
    }
    if(value_path == "pethMainPsePower")
    {
        pethmainpsepower.yfilter = yfilter;
    }
    if(value_path == "pethMainPseOperStatus")
    {
        pethmainpseoperstatus.yfilter = yfilter;
    }
    if(value_path == "pethMainPseConsumptionPower")
    {
        pethmainpseconsumptionpower.yfilter = yfilter;
    }
    if(value_path == "pethMainPseUsageThreshold")
    {
        pethmainpseusagethreshold.yfilter = yfilter;
    }
}

bool POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pethMainPseGroupIndex" || name == "pethMainPsePower" || name == "pethMainPseOperStatus" || name == "pethMainPseConsumptionPower" || name == "pethMainPseUsageThreshold")
        return true;
    return false;
}

POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontroltable()
{

    yang_name = "pethNotificationControlTable"; yang_parent_name = "POWER-ETHERNET-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

POWERETHERNETMIB::Pethnotificationcontroltable::~Pethnotificationcontroltable()
{
}

bool POWERETHERNETMIB::Pethnotificationcontroltable::has_data() const
{
    for (std::size_t index=0; index<pethnotificationcontrolentry.size(); index++)
    {
        if(pethnotificationcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool POWERETHERNETMIB::Pethnotificationcontroltable::has_operation() const
{
    for (std::size_t index=0; index<pethnotificationcontrolentry.size(); index++)
    {
        if(pethnotificationcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string POWERETHERNETMIB::Pethnotificationcontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "POWER-ETHERNET-MIB:POWER-ETHERNET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string POWERETHERNETMIB::Pethnotificationcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pethNotificationControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > POWERETHERNETMIB::Pethnotificationcontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> POWERETHERNETMIB::Pethnotificationcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pethNotificationControlEntry")
    {
        auto c = std::make_shared<POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry>();
        c->parent = this;
        pethnotificationcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> POWERETHERNETMIB::Pethnotificationcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pethnotificationcontrolentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void POWERETHERNETMIB::Pethnotificationcontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void POWERETHERNETMIB::Pethnotificationcontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool POWERETHERNETMIB::Pethnotificationcontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pethNotificationControlEntry")
        return true;
    return false;
}

POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::Pethnotificationcontrolentry()
    :
    pethnotificationcontrolgroupindex{YType::int32, "pethNotificationControlGroupIndex"},
    pethnotificationcontrolenable{YType::boolean, "pethNotificationControlEnable"}
{

    yang_name = "pethNotificationControlEntry"; yang_parent_name = "pethNotificationControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::~Pethnotificationcontrolentry()
{
}

bool POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::has_data() const
{
    return pethnotificationcontrolgroupindex.is_set
	|| pethnotificationcontrolenable.is_set;
}

bool POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pethnotificationcontrolgroupindex.yfilter)
	|| ydk::is_set(pethnotificationcontrolenable.yfilter);
}

std::string POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "POWER-ETHERNET-MIB:POWER-ETHERNET-MIB/pethNotificationControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pethNotificationControlEntry" <<"[pethNotificationControlGroupIndex='" <<pethnotificationcontrolgroupindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pethnotificationcontrolgroupindex.is_set || is_set(pethnotificationcontrolgroupindex.yfilter)) leaf_name_data.push_back(pethnotificationcontrolgroupindex.get_name_leafdata());
    if (pethnotificationcontrolenable.is_set || is_set(pethnotificationcontrolenable.yfilter)) leaf_name_data.push_back(pethnotificationcontrolenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pethNotificationControlGroupIndex")
    {
        pethnotificationcontrolgroupindex = value;
        pethnotificationcontrolgroupindex.value_namespace = name_space;
        pethnotificationcontrolgroupindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethNotificationControlEnable")
    {
        pethnotificationcontrolenable = value;
        pethnotificationcontrolenable.value_namespace = name_space;
        pethnotificationcontrolenable.value_namespace_prefix = name_space_prefix;
    }
}

void POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pethNotificationControlGroupIndex")
    {
        pethnotificationcontrolgroupindex.yfilter = yfilter;
    }
    if(value_path == "pethNotificationControlEnable")
    {
        pethnotificationcontrolenable.yfilter = yfilter;
    }
}

bool POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pethNotificationControlGroupIndex" || name == "pethNotificationControlEnable")
        return true;
    return false;
}

const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerpairs::signal {1, "signal"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerpairs::spare {2, "spare"};

const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportdetectionstatus::disabled {1, "disabled"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportdetectionstatus::searching {2, "searching"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportdetectionstatus::deliveringPower {3, "deliveringPower"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportdetectionstatus::fault {4, "fault"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportdetectionstatus::test {5, "test"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportdetectionstatus::otherFault {6, "otherFault"};

const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerpriority::critical {1, "critical"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerpriority::high {2, "high"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerpriority::low {3, "low"};

const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerclassifications::class0 {1, "class0"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerclassifications::class1 {2, "class1"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerclassifications::class2 {3, "class2"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerclassifications::class3 {4, "class3"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerclassifications::class4 {5, "class4"};

const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportenable::auto_ {1, "auto"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportenable::static_ {2, "static"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportenable::limit {3, "limit"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportenable::disable {4, "disable"};

const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportdiscovermode::unknown {1, "unknown"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportdiscovermode::off {2, "off"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportdiscovermode::ieee {3, "ieee"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportdiscovermode::cisco {4, "cisco"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportdiscovermode::ieeeAndCisco {5, "ieeeAndCisco"};

const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportpolicingenable::on {1, "on"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportpolicingenable::off {2, "off"};

const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportpolicingaction::deny {1, "deny"};
const Enum::YLeaf POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportpolicingaction::logOnly {2, "logOnly"};

const Enum::YLeaf POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::Pethmainpseoperstatus::on {1, "on"};
const Enum::YLeaf POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::Pethmainpseoperstatus::off {2, "off"};
const Enum::YLeaf POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::Pethmainpseoperstatus::faulty {3, "faulty"};


}
}

