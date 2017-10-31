
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_headless_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_mxp_headless_oper {

HeadlessFuncData::HeadlessFuncData()
    :
    otn_port_names(std::make_shared<HeadlessFuncData::OtnPortNames>())
	,ethernet_port_names(std::make_shared<HeadlessFuncData::EthernetPortNames>())
{
    otn_port_names->parent = this;
    ethernet_port_names->parent = this;

    yang_name = "headless-func-data"; yang_parent_name = "Cisco-IOS-XR-ncs1k-mxp-headless-oper"; is_top_level_class = true; has_list_ancestor = false;
}

HeadlessFuncData::~HeadlessFuncData()
{
}

bool HeadlessFuncData::has_data() const
{
    return (otn_port_names !=  nullptr && otn_port_names->has_data())
	|| (ethernet_port_names !=  nullptr && ethernet_port_names->has_data());
}

bool HeadlessFuncData::has_operation() const
{
    return is_set(yfilter)
	|| (otn_port_names !=  nullptr && otn_port_names->has_operation())
	|| (ethernet_port_names !=  nullptr && ethernet_port_names->has_operation());
}

std::string HeadlessFuncData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeadlessFuncData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HeadlessFuncData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn-port-names")
    {
        if(otn_port_names == nullptr)
        {
            otn_port_names = std::make_shared<HeadlessFuncData::OtnPortNames>();
        }
        return otn_port_names;
    }

    if(child_yang_name == "ethernet-port-names")
    {
        if(ethernet_port_names == nullptr)
        {
            ethernet_port_names = std::make_shared<HeadlessFuncData::EthernetPortNames>();
        }
        return ethernet_port_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HeadlessFuncData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn_port_names != nullptr)
    {
        children["otn-port-names"] = otn_port_names;
    }

    if(ethernet_port_names != nullptr)
    {
        children["ethernet-port-names"] = ethernet_port_names;
    }

    return children;
}

void HeadlessFuncData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HeadlessFuncData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> HeadlessFuncData::clone_ptr() const
{
    return std::make_shared<HeadlessFuncData>();
}

std::string HeadlessFuncData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HeadlessFuncData::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HeadlessFuncData::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HeadlessFuncData::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HeadlessFuncData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-port-names" || name == "ethernet-port-names")
        return true;
    return false;
}

HeadlessFuncData::OtnPortNames::OtnPortNames()
{

    yang_name = "otn-port-names"; yang_parent_name = "headless-func-data"; is_top_level_class = false; has_list_ancestor = false;
}

HeadlessFuncData::OtnPortNames::~OtnPortNames()
{
}

bool HeadlessFuncData::OtnPortNames::has_data() const
{
    for (std::size_t index=0; index<otn_port_name.size(); index++)
    {
        if(otn_port_name[index]->has_data())
            return true;
    }
    return false;
}

bool HeadlessFuncData::OtnPortNames::has_operation() const
{
    for (std::size_t index=0; index<otn_port_name.size(); index++)
    {
        if(otn_port_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HeadlessFuncData::OtnPortNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data/" << get_segment_path();
    return path_buffer.str();
}

std::string HeadlessFuncData::OtnPortNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-port-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeadlessFuncData::OtnPortNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HeadlessFuncData::OtnPortNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn-port-name")
    {
        for(auto const & c : otn_port_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HeadlessFuncData::OtnPortNames::OtnPortName>();
        c->parent = this;
        otn_port_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HeadlessFuncData::OtnPortNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otn_port_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HeadlessFuncData::OtnPortNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HeadlessFuncData::OtnPortNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HeadlessFuncData::OtnPortNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-port-name")
        return true;
    return false;
}

HeadlessFuncData::OtnPortNames::OtnPortName::OtnPortName()
    :
    name{YType::str, "name"},
    started_stateful{YType::boolean, "started-stateful"},
    headless_start_time{YType::str, "headless-start-time"},
    headless_end_time{YType::str, "headless-end-time"}
    	,
    otn_statistics(std::make_shared<HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics>())
	,prbs_statistics(std::make_shared<HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics>())
{
    otn_statistics->parent = this;
    prbs_statistics->parent = this;

    yang_name = "otn-port-name"; yang_parent_name = "otn-port-names"; is_top_level_class = false; has_list_ancestor = false;
}

HeadlessFuncData::OtnPortNames::OtnPortName::~OtnPortName()
{
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::has_data() const
{
    return name.is_set
	|| started_stateful.is_set
	|| headless_start_time.is_set
	|| headless_end_time.is_set
	|| (otn_statistics !=  nullptr && otn_statistics->has_data())
	|| (prbs_statistics !=  nullptr && prbs_statistics->has_data());
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(started_stateful.yfilter)
	|| ydk::is_set(headless_start_time.yfilter)
	|| ydk::is_set(headless_end_time.yfilter)
	|| (otn_statistics !=  nullptr && otn_statistics->has_operation())
	|| (prbs_statistics !=  nullptr && prbs_statistics->has_operation());
}

std::string HeadlessFuncData::OtnPortNames::OtnPortName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data/otn-port-names/" << get_segment_path();
    return path_buffer.str();
}

std::string HeadlessFuncData::OtnPortNames::OtnPortName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-port-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeadlessFuncData::OtnPortNames::OtnPortName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (started_stateful.is_set || is_set(started_stateful.yfilter)) leaf_name_data.push_back(started_stateful.get_name_leafdata());
    if (headless_start_time.is_set || is_set(headless_start_time.yfilter)) leaf_name_data.push_back(headless_start_time.get_name_leafdata());
    if (headless_end_time.is_set || is_set(headless_end_time.yfilter)) leaf_name_data.push_back(headless_end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HeadlessFuncData::OtnPortNames::OtnPortName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn-statistics")
    {
        if(otn_statistics == nullptr)
        {
            otn_statistics = std::make_shared<HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics>();
        }
        return otn_statistics;
    }

    if(child_yang_name == "prbs-statistics")
    {
        if(prbs_statistics == nullptr)
        {
            prbs_statistics = std::make_shared<HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics>();
        }
        return prbs_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HeadlessFuncData::OtnPortNames::OtnPortName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn_statistics != nullptr)
    {
        children["otn-statistics"] = otn_statistics;
    }

    if(prbs_statistics != nullptr)
    {
        children["prbs-statistics"] = prbs_statistics;
    }

    return children;
}

void HeadlessFuncData::OtnPortNames::OtnPortName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-stateful")
    {
        started_stateful = value;
        started_stateful.value_namespace = name_space;
        started_stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headless-start-time")
    {
        headless_start_time = value;
        headless_start_time.value_namespace = name_space;
        headless_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headless-end-time")
    {
        headless_end_time = value;
        headless_end_time.value_namespace = name_space;
        headless_end_time.value_namespace_prefix = name_space_prefix;
    }
}

void HeadlessFuncData::OtnPortNames::OtnPortName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "started-stateful")
    {
        started_stateful.yfilter = yfilter;
    }
    if(value_path == "headless-start-time")
    {
        headless_start_time.yfilter = yfilter;
    }
    if(value_path == "headless-end-time")
    {
        headless_end_time.yfilter = yfilter;
    }
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-statistics" || name == "prbs-statistics" || name == "name" || name == "started-stateful" || name == "headless-start-time" || name == "headless-end-time")
        return true;
    return false;
}

HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::OtnStatistics()
    :
    sm_bip{YType::uint64, "sm-bip"},
    sm_bei{YType::uint64, "sm-bei"},
    fec_ec{YType::uint64, "fec-ec"},
    fec_uc{YType::uint64, "fec-uc"}
{

    yang_name = "otn-statistics"; yang_parent_name = "otn-port-name"; is_top_level_class = false; has_list_ancestor = true;
}

HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::~OtnStatistics()
{
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::has_data() const
{
    return sm_bip.is_set
	|| sm_bei.is_set
	|| fec_ec.is_set
	|| fec_uc.is_set;
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sm_bip.yfilter)
	|| ydk::is_set(sm_bei.yfilter)
	|| ydk::is_set(fec_ec.yfilter)
	|| ydk::is_set(fec_uc.yfilter);
}

std::string HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sm_bip.is_set || is_set(sm_bip.yfilter)) leaf_name_data.push_back(sm_bip.get_name_leafdata());
    if (sm_bei.is_set || is_set(sm_bei.yfilter)) leaf_name_data.push_back(sm_bei.get_name_leafdata());
    if (fec_ec.is_set || is_set(fec_ec.yfilter)) leaf_name_data.push_back(fec_ec.get_name_leafdata());
    if (fec_uc.is_set || is_set(fec_uc.yfilter)) leaf_name_data.push_back(fec_uc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sm-bip")
    {
        sm_bip = value;
        sm_bip.value_namespace = name_space;
        sm_bip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sm-bei")
    {
        sm_bei = value;
        sm_bei.value_namespace = name_space;
        sm_bei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-ec")
    {
        fec_ec = value;
        fec_ec.value_namespace = name_space;
        fec_ec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-uc")
    {
        fec_uc = value;
        fec_uc.value_namespace = name_space;
        fec_uc.value_namespace_prefix = name_space_prefix;
    }
}

void HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sm-bip")
    {
        sm_bip.yfilter = yfilter;
    }
    if(value_path == "sm-bei")
    {
        sm_bei.yfilter = yfilter;
    }
    if(value_path == "fec-ec")
    {
        fec_ec.yfilter = yfilter;
    }
    if(value_path == "fec-uc")
    {
        fec_uc.yfilter = yfilter;
    }
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sm-bip" || name == "sm-bei" || name == "fec-ec" || name == "fec-uc")
        return true;
    return false;
}

HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::PrbsStatistics()
    :
    ebc{YType::uint64, "ebc"},
    sync_status{YType::enumeration, "sync-status"}
{

    yang_name = "prbs-statistics"; yang_parent_name = "otn-port-name"; is_top_level_class = false; has_list_ancestor = true;
}

HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::~PrbsStatistics()
{
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::has_data() const
{
    return ebc.is_set
	|| sync_status.is_set;
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(sync_status.yfilter);
}

std::string HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
}

void HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ebc" || name == "sync-status")
        return true;
    return false;
}

HeadlessFuncData::EthernetPortNames::EthernetPortNames()
{

    yang_name = "ethernet-port-names"; yang_parent_name = "headless-func-data"; is_top_level_class = false; has_list_ancestor = false;
}

HeadlessFuncData::EthernetPortNames::~EthernetPortNames()
{
}

bool HeadlessFuncData::EthernetPortNames::has_data() const
{
    for (std::size_t index=0; index<ethernet_port_name.size(); index++)
    {
        if(ethernet_port_name[index]->has_data())
            return true;
    }
    return false;
}

bool HeadlessFuncData::EthernetPortNames::has_operation() const
{
    for (std::size_t index=0; index<ethernet_port_name.size(); index++)
    {
        if(ethernet_port_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HeadlessFuncData::EthernetPortNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data/" << get_segment_path();
    return path_buffer.str();
}

std::string HeadlessFuncData::EthernetPortNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-port-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeadlessFuncData::EthernetPortNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HeadlessFuncData::EthernetPortNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-port-name")
    {
        for(auto const & c : ethernet_port_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HeadlessFuncData::EthernetPortNames::EthernetPortName>();
        c->parent = this;
        ethernet_port_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HeadlessFuncData::EthernetPortNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet_port_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HeadlessFuncData::EthernetPortNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HeadlessFuncData::EthernetPortNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HeadlessFuncData::EthernetPortNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-port-name")
        return true;
    return false;
}

HeadlessFuncData::EthernetPortNames::EthernetPortName::EthernetPortName()
    :
    name{YType::str, "name"},
    started_stateful{YType::boolean, "started-stateful"},
    headless_start_time{YType::str, "headless-start-time"},
    headless_end_time{YType::str, "headless-end-time"}
    	,
    ether_statistics(std::make_shared<HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics>())
{
    ether_statistics->parent = this;

    yang_name = "ethernet-port-name"; yang_parent_name = "ethernet-port-names"; is_top_level_class = false; has_list_ancestor = false;
}

HeadlessFuncData::EthernetPortNames::EthernetPortName::~EthernetPortName()
{
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::has_data() const
{
    return name.is_set
	|| started_stateful.is_set
	|| headless_start_time.is_set
	|| headless_end_time.is_set
	|| (ether_statistics !=  nullptr && ether_statistics->has_data());
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(started_stateful.yfilter)
	|| ydk::is_set(headless_start_time.yfilter)
	|| ydk::is_set(headless_end_time.yfilter)
	|| (ether_statistics !=  nullptr && ether_statistics->has_operation());
}

std::string HeadlessFuncData::EthernetPortNames::EthernetPortName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data/ethernet-port-names/" << get_segment_path();
    return path_buffer.str();
}

std::string HeadlessFuncData::EthernetPortNames::EthernetPortName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-port-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeadlessFuncData::EthernetPortNames::EthernetPortName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (started_stateful.is_set || is_set(started_stateful.yfilter)) leaf_name_data.push_back(started_stateful.get_name_leafdata());
    if (headless_start_time.is_set || is_set(headless_start_time.yfilter)) leaf_name_data.push_back(headless_start_time.get_name_leafdata());
    if (headless_end_time.is_set || is_set(headless_end_time.yfilter)) leaf_name_data.push_back(headless_end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HeadlessFuncData::EthernetPortNames::EthernetPortName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ether-statistics")
    {
        if(ether_statistics == nullptr)
        {
            ether_statistics = std::make_shared<HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics>();
        }
        return ether_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HeadlessFuncData::EthernetPortNames::EthernetPortName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ether_statistics != nullptr)
    {
        children["ether-statistics"] = ether_statistics;
    }

    return children;
}

void HeadlessFuncData::EthernetPortNames::EthernetPortName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-stateful")
    {
        started_stateful = value;
        started_stateful.value_namespace = name_space;
        started_stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headless-start-time")
    {
        headless_start_time = value;
        headless_start_time.value_namespace = name_space;
        headless_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headless-end-time")
    {
        headless_end_time = value;
        headless_end_time.value_namespace = name_space;
        headless_end_time.value_namespace_prefix = name_space_prefix;
    }
}

void HeadlessFuncData::EthernetPortNames::EthernetPortName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "started-stateful")
    {
        started_stateful.yfilter = yfilter;
    }
    if(value_path == "headless-start-time")
    {
        headless_start_time.yfilter = yfilter;
    }
    if(value_path == "headless-end-time")
    {
        headless_end_time.yfilter = yfilter;
    }
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-statistics" || name == "name" || name == "started-stateful" || name == "headless-start-time" || name == "headless-end-time")
        return true;
    return false;
}

HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::EtherStatistics()
    :
    rx_pkts_over_sized{YType::uint64, "rx-pkts-over-sized"},
    rx_pkts_bad_fcs{YType::uint64, "rx-pkts-bad-fcs"},
    rx_error_jabbers{YType::uint64, "rx-error-jabbers"},
    rx_pkts_multicast{YType::uint64, "rx-pkts-multicast"},
    rx_pkts_broadcast{YType::uint64, "rx-pkts-broadcast"},
    rx_pkts_under_sized{YType::uint64, "rx-pkts-under-sized"},
    rx_packets{YType::uint64, "rx-packets"},
    rx_total_bytes{YType::uint64, "rx-total-bytes"},
    rx_bytes_good{YType::uint64, "rx-bytes-good"},
    rx_pkts_good{YType::uint64, "rx-pkts-good"},
    tx_bytes_good{YType::uint64, "tx-bytes-good"},
    tx_pkts_good{YType::uint64, "tx-pkts-good"},
    rx_recv_fragments{YType::uint64, "rx-recv-fragments"},
    rx_pkts64_bytes{YType::uint64, "rx-pkts64-bytes"},
    rx_pkts65_to127_bytes{YType::uint64, "rx-pkts65-to127-bytes"},
    rx_pkts128to255_bytes{YType::uint64, "rx-pkts128to255-bytes"},
    rx_pkts256_to511_bytes{YType::uint64, "rx-pkts256-to511-bytes"},
    rx_pkts512_to1023_bytes{YType::uint64, "rx-pkts512-to1023-bytes"},
    rx_pkts1024_to1518_bytes{YType::uint64, "rx-pkts1024-to1518-bytes"},
    rx_pkts_unicast{YType::uint64, "rx-pkts-unicast"},
    tx_packets{YType::uint64, "tx-packets"},
    tx_total_bytes{YType::uint64, "tx-total-bytes"},
    tx_pkts_under_sized{YType::uint64, "tx-pkts-under-sized"},
    tx_pkts_over_sized{YType::uint64, "tx-pkts-over-sized"},
    tx_fragments{YType::uint64, "tx-fragments"},
    tx_jabber{YType::uint64, "tx-jabber"},
    tx_bad_fcs{YType::uint64, "tx-bad-fcs"},
    rx_pkt_drop{YType::uint64, "rx-pkt-drop"},
    rx_pause{YType::uint64, "rx-pause"},
    tx_pause{YType::uint64, "tx-pause"},
    rx_lldp_pkt{YType::uint64, "rx-lldp-pkt"},
    rx8021q_pkt{YType::uint64, "rx8021q-pkt"}
{

    yang_name = "ether-statistics"; yang_parent_name = "ethernet-port-name"; is_top_level_class = false; has_list_ancestor = true;
}

HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::~EtherStatistics()
{
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::has_data() const
{
    return rx_pkts_over_sized.is_set
	|| rx_pkts_bad_fcs.is_set
	|| rx_error_jabbers.is_set
	|| rx_pkts_multicast.is_set
	|| rx_pkts_broadcast.is_set
	|| rx_pkts_under_sized.is_set
	|| rx_packets.is_set
	|| rx_total_bytes.is_set
	|| rx_bytes_good.is_set
	|| rx_pkts_good.is_set
	|| tx_bytes_good.is_set
	|| tx_pkts_good.is_set
	|| rx_recv_fragments.is_set
	|| rx_pkts64_bytes.is_set
	|| rx_pkts65_to127_bytes.is_set
	|| rx_pkts128to255_bytes.is_set
	|| rx_pkts256_to511_bytes.is_set
	|| rx_pkts512_to1023_bytes.is_set
	|| rx_pkts1024_to1518_bytes.is_set
	|| rx_pkts_unicast.is_set
	|| tx_packets.is_set
	|| tx_total_bytes.is_set
	|| tx_pkts_under_sized.is_set
	|| tx_pkts_over_sized.is_set
	|| tx_fragments.is_set
	|| tx_jabber.is_set
	|| tx_bad_fcs.is_set
	|| rx_pkt_drop.is_set
	|| rx_pause.is_set
	|| tx_pause.is_set
	|| rx_lldp_pkt.is_set
	|| rx8021q_pkt.is_set;
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_pkts_over_sized.yfilter)
	|| ydk::is_set(rx_pkts_bad_fcs.yfilter)
	|| ydk::is_set(rx_error_jabbers.yfilter)
	|| ydk::is_set(rx_pkts_multicast.yfilter)
	|| ydk::is_set(rx_pkts_broadcast.yfilter)
	|| ydk::is_set(rx_pkts_under_sized.yfilter)
	|| ydk::is_set(rx_packets.yfilter)
	|| ydk::is_set(rx_total_bytes.yfilter)
	|| ydk::is_set(rx_bytes_good.yfilter)
	|| ydk::is_set(rx_pkts_good.yfilter)
	|| ydk::is_set(tx_bytes_good.yfilter)
	|| ydk::is_set(tx_pkts_good.yfilter)
	|| ydk::is_set(rx_recv_fragments.yfilter)
	|| ydk::is_set(rx_pkts64_bytes.yfilter)
	|| ydk::is_set(rx_pkts65_to127_bytes.yfilter)
	|| ydk::is_set(rx_pkts128to255_bytes.yfilter)
	|| ydk::is_set(rx_pkts256_to511_bytes.yfilter)
	|| ydk::is_set(rx_pkts512_to1023_bytes.yfilter)
	|| ydk::is_set(rx_pkts1024_to1518_bytes.yfilter)
	|| ydk::is_set(rx_pkts_unicast.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| ydk::is_set(tx_total_bytes.yfilter)
	|| ydk::is_set(tx_pkts_under_sized.yfilter)
	|| ydk::is_set(tx_pkts_over_sized.yfilter)
	|| ydk::is_set(tx_fragments.yfilter)
	|| ydk::is_set(tx_jabber.yfilter)
	|| ydk::is_set(tx_bad_fcs.yfilter)
	|| ydk::is_set(rx_pkt_drop.yfilter)
	|| ydk::is_set(rx_pause.yfilter)
	|| ydk::is_set(tx_pause.yfilter)
	|| ydk::is_set(rx_lldp_pkt.yfilter)
	|| ydk::is_set(rx8021q_pkt.yfilter);
}

std::string HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_pkts_over_sized.is_set || is_set(rx_pkts_over_sized.yfilter)) leaf_name_data.push_back(rx_pkts_over_sized.get_name_leafdata());
    if (rx_pkts_bad_fcs.is_set || is_set(rx_pkts_bad_fcs.yfilter)) leaf_name_data.push_back(rx_pkts_bad_fcs.get_name_leafdata());
    if (rx_error_jabbers.is_set || is_set(rx_error_jabbers.yfilter)) leaf_name_data.push_back(rx_error_jabbers.get_name_leafdata());
    if (rx_pkts_multicast.is_set || is_set(rx_pkts_multicast.yfilter)) leaf_name_data.push_back(rx_pkts_multicast.get_name_leafdata());
    if (rx_pkts_broadcast.is_set || is_set(rx_pkts_broadcast.yfilter)) leaf_name_data.push_back(rx_pkts_broadcast.get_name_leafdata());
    if (rx_pkts_under_sized.is_set || is_set(rx_pkts_under_sized.yfilter)) leaf_name_data.push_back(rx_pkts_under_sized.get_name_leafdata());
    if (rx_packets.is_set || is_set(rx_packets.yfilter)) leaf_name_data.push_back(rx_packets.get_name_leafdata());
    if (rx_total_bytes.is_set || is_set(rx_total_bytes.yfilter)) leaf_name_data.push_back(rx_total_bytes.get_name_leafdata());
    if (rx_bytes_good.is_set || is_set(rx_bytes_good.yfilter)) leaf_name_data.push_back(rx_bytes_good.get_name_leafdata());
    if (rx_pkts_good.is_set || is_set(rx_pkts_good.yfilter)) leaf_name_data.push_back(rx_pkts_good.get_name_leafdata());
    if (tx_bytes_good.is_set || is_set(tx_bytes_good.yfilter)) leaf_name_data.push_back(tx_bytes_good.get_name_leafdata());
    if (tx_pkts_good.is_set || is_set(tx_pkts_good.yfilter)) leaf_name_data.push_back(tx_pkts_good.get_name_leafdata());
    if (rx_recv_fragments.is_set || is_set(rx_recv_fragments.yfilter)) leaf_name_data.push_back(rx_recv_fragments.get_name_leafdata());
    if (rx_pkts64_bytes.is_set || is_set(rx_pkts64_bytes.yfilter)) leaf_name_data.push_back(rx_pkts64_bytes.get_name_leafdata());
    if (rx_pkts65_to127_bytes.is_set || is_set(rx_pkts65_to127_bytes.yfilter)) leaf_name_data.push_back(rx_pkts65_to127_bytes.get_name_leafdata());
    if (rx_pkts128to255_bytes.is_set || is_set(rx_pkts128to255_bytes.yfilter)) leaf_name_data.push_back(rx_pkts128to255_bytes.get_name_leafdata());
    if (rx_pkts256_to511_bytes.is_set || is_set(rx_pkts256_to511_bytes.yfilter)) leaf_name_data.push_back(rx_pkts256_to511_bytes.get_name_leafdata());
    if (rx_pkts512_to1023_bytes.is_set || is_set(rx_pkts512_to1023_bytes.yfilter)) leaf_name_data.push_back(rx_pkts512_to1023_bytes.get_name_leafdata());
    if (rx_pkts1024_to1518_bytes.is_set || is_set(rx_pkts1024_to1518_bytes.yfilter)) leaf_name_data.push_back(rx_pkts1024_to1518_bytes.get_name_leafdata());
    if (rx_pkts_unicast.is_set || is_set(rx_pkts_unicast.yfilter)) leaf_name_data.push_back(rx_pkts_unicast.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());
    if (tx_total_bytes.is_set || is_set(tx_total_bytes.yfilter)) leaf_name_data.push_back(tx_total_bytes.get_name_leafdata());
    if (tx_pkts_under_sized.is_set || is_set(tx_pkts_under_sized.yfilter)) leaf_name_data.push_back(tx_pkts_under_sized.get_name_leafdata());
    if (tx_pkts_over_sized.is_set || is_set(tx_pkts_over_sized.yfilter)) leaf_name_data.push_back(tx_pkts_over_sized.get_name_leafdata());
    if (tx_fragments.is_set || is_set(tx_fragments.yfilter)) leaf_name_data.push_back(tx_fragments.get_name_leafdata());
    if (tx_jabber.is_set || is_set(tx_jabber.yfilter)) leaf_name_data.push_back(tx_jabber.get_name_leafdata());
    if (tx_bad_fcs.is_set || is_set(tx_bad_fcs.yfilter)) leaf_name_data.push_back(tx_bad_fcs.get_name_leafdata());
    if (rx_pkt_drop.is_set || is_set(rx_pkt_drop.yfilter)) leaf_name_data.push_back(rx_pkt_drop.get_name_leafdata());
    if (rx_pause.is_set || is_set(rx_pause.yfilter)) leaf_name_data.push_back(rx_pause.get_name_leafdata());
    if (tx_pause.is_set || is_set(tx_pause.yfilter)) leaf_name_data.push_back(tx_pause.get_name_leafdata());
    if (rx_lldp_pkt.is_set || is_set(rx_lldp_pkt.yfilter)) leaf_name_data.push_back(rx_lldp_pkt.get_name_leafdata());
    if (rx8021q_pkt.is_set || is_set(rx8021q_pkt.yfilter)) leaf_name_data.push_back(rx8021q_pkt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-pkts-over-sized")
    {
        rx_pkts_over_sized = value;
        rx_pkts_over_sized.value_namespace = name_space;
        rx_pkts_over_sized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts-bad-fcs")
    {
        rx_pkts_bad_fcs = value;
        rx_pkts_bad_fcs.value_namespace = name_space;
        rx_pkts_bad_fcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-error-jabbers")
    {
        rx_error_jabbers = value;
        rx_error_jabbers.value_namespace = name_space;
        rx_error_jabbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts-multicast")
    {
        rx_pkts_multicast = value;
        rx_pkts_multicast.value_namespace = name_space;
        rx_pkts_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts-broadcast")
    {
        rx_pkts_broadcast = value;
        rx_pkts_broadcast.value_namespace = name_space;
        rx_pkts_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts-under-sized")
    {
        rx_pkts_under_sized = value;
        rx_pkts_under_sized.value_namespace = name_space;
        rx_pkts_under_sized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-packets")
    {
        rx_packets = value;
        rx_packets.value_namespace = name_space;
        rx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-total-bytes")
    {
        rx_total_bytes = value;
        rx_total_bytes.value_namespace = name_space;
        rx_total_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-bytes-good")
    {
        rx_bytes_good = value;
        rx_bytes_good.value_namespace = name_space;
        rx_bytes_good.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts-good")
    {
        rx_pkts_good = value;
        rx_pkts_good.value_namespace = name_space;
        rx_pkts_good.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes-good")
    {
        tx_bytes_good = value;
        tx_bytes_good.value_namespace = name_space;
        tx_bytes_good.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkts-good")
    {
        tx_pkts_good = value;
        tx_pkts_good.value_namespace = name_space;
        tx_pkts_good.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-recv-fragments")
    {
        rx_recv_fragments = value;
        rx_recv_fragments.value_namespace = name_space;
        rx_recv_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts64-bytes")
    {
        rx_pkts64_bytes = value;
        rx_pkts64_bytes.value_namespace = name_space;
        rx_pkts64_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts65-to127-bytes")
    {
        rx_pkts65_to127_bytes = value;
        rx_pkts65_to127_bytes.value_namespace = name_space;
        rx_pkts65_to127_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts128to255-bytes")
    {
        rx_pkts128to255_bytes = value;
        rx_pkts128to255_bytes.value_namespace = name_space;
        rx_pkts128to255_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts256-to511-bytes")
    {
        rx_pkts256_to511_bytes = value;
        rx_pkts256_to511_bytes.value_namespace = name_space;
        rx_pkts256_to511_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts512-to1023-bytes")
    {
        rx_pkts512_to1023_bytes = value;
        rx_pkts512_to1023_bytes.value_namespace = name_space;
        rx_pkts512_to1023_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts1024-to1518-bytes")
    {
        rx_pkts1024_to1518_bytes = value;
        rx_pkts1024_to1518_bytes.value_namespace = name_space;
        rx_pkts1024_to1518_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkts-unicast")
    {
        rx_pkts_unicast = value;
        rx_pkts_unicast.value_namespace = name_space;
        rx_pkts_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-total-bytes")
    {
        tx_total_bytes = value;
        tx_total_bytes.value_namespace = name_space;
        tx_total_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkts-under-sized")
    {
        tx_pkts_under_sized = value;
        tx_pkts_under_sized.value_namespace = name_space;
        tx_pkts_under_sized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkts-over-sized")
    {
        tx_pkts_over_sized = value;
        tx_pkts_over_sized.value_namespace = name_space;
        tx_pkts_over_sized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-fragments")
    {
        tx_fragments = value;
        tx_fragments.value_namespace = name_space;
        tx_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-jabber")
    {
        tx_jabber = value;
        tx_jabber.value_namespace = name_space;
        tx_jabber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bad-fcs")
    {
        tx_bad_fcs = value;
        tx_bad_fcs.value_namespace = name_space;
        tx_bad_fcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pkt-drop")
    {
        rx_pkt_drop = value;
        rx_pkt_drop.value_namespace = name_space;
        rx_pkt_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pause")
    {
        rx_pause = value;
        rx_pause.value_namespace = name_space;
        rx_pause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pause")
    {
        tx_pause = value;
        tx_pause.value_namespace = name_space;
        tx_pause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lldp-pkt")
    {
        rx_lldp_pkt = value;
        rx_lldp_pkt.value_namespace = name_space;
        rx_lldp_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx8021q-pkt")
    {
        rx8021q_pkt = value;
        rx8021q_pkt.value_namespace = name_space;
        rx8021q_pkt.value_namespace_prefix = name_space_prefix;
    }
}

void HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-pkts-over-sized")
    {
        rx_pkts_over_sized.yfilter = yfilter;
    }
    if(value_path == "rx-pkts-bad-fcs")
    {
        rx_pkts_bad_fcs.yfilter = yfilter;
    }
    if(value_path == "rx-error-jabbers")
    {
        rx_error_jabbers.yfilter = yfilter;
    }
    if(value_path == "rx-pkts-multicast")
    {
        rx_pkts_multicast.yfilter = yfilter;
    }
    if(value_path == "rx-pkts-broadcast")
    {
        rx_pkts_broadcast.yfilter = yfilter;
    }
    if(value_path == "rx-pkts-under-sized")
    {
        rx_pkts_under_sized.yfilter = yfilter;
    }
    if(value_path == "rx-packets")
    {
        rx_packets.yfilter = yfilter;
    }
    if(value_path == "rx-total-bytes")
    {
        rx_total_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-bytes-good")
    {
        rx_bytes_good.yfilter = yfilter;
    }
    if(value_path == "rx-pkts-good")
    {
        rx_pkts_good.yfilter = yfilter;
    }
    if(value_path == "tx-bytes-good")
    {
        tx_bytes_good.yfilter = yfilter;
    }
    if(value_path == "tx-pkts-good")
    {
        tx_pkts_good.yfilter = yfilter;
    }
    if(value_path == "rx-recv-fragments")
    {
        rx_recv_fragments.yfilter = yfilter;
    }
    if(value_path == "rx-pkts64-bytes")
    {
        rx_pkts64_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-pkts65-to127-bytes")
    {
        rx_pkts65_to127_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-pkts128to255-bytes")
    {
        rx_pkts128to255_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-pkts256-to511-bytes")
    {
        rx_pkts256_to511_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-pkts512-to1023-bytes")
    {
        rx_pkts512_to1023_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-pkts1024-to1518-bytes")
    {
        rx_pkts1024_to1518_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-pkts-unicast")
    {
        rx_pkts_unicast.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
    if(value_path == "tx-total-bytes")
    {
        tx_total_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-pkts-under-sized")
    {
        tx_pkts_under_sized.yfilter = yfilter;
    }
    if(value_path == "tx-pkts-over-sized")
    {
        tx_pkts_over_sized.yfilter = yfilter;
    }
    if(value_path == "tx-fragments")
    {
        tx_fragments.yfilter = yfilter;
    }
    if(value_path == "tx-jabber")
    {
        tx_jabber.yfilter = yfilter;
    }
    if(value_path == "tx-bad-fcs")
    {
        tx_bad_fcs.yfilter = yfilter;
    }
    if(value_path == "rx-pkt-drop")
    {
        rx_pkt_drop.yfilter = yfilter;
    }
    if(value_path == "rx-pause")
    {
        rx_pause.yfilter = yfilter;
    }
    if(value_path == "tx-pause")
    {
        tx_pause.yfilter = yfilter;
    }
    if(value_path == "rx-lldp-pkt")
    {
        rx_lldp_pkt.yfilter = yfilter;
    }
    if(value_path == "rx8021q-pkt")
    {
        rx8021q_pkt.yfilter = yfilter;
    }
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-pkts-over-sized" || name == "rx-pkts-bad-fcs" || name == "rx-error-jabbers" || name == "rx-pkts-multicast" || name == "rx-pkts-broadcast" || name == "rx-pkts-under-sized" || name == "rx-packets" || name == "rx-total-bytes" || name == "rx-bytes-good" || name == "rx-pkts-good" || name == "tx-bytes-good" || name == "tx-pkts-good" || name == "rx-recv-fragments" || name == "rx-pkts64-bytes" || name == "rx-pkts65-to127-bytes" || name == "rx-pkts128to255-bytes" || name == "rx-pkts256-to511-bytes" || name == "rx-pkts512-to1023-bytes" || name == "rx-pkts1024-to1518-bytes" || name == "rx-pkts-unicast" || name == "tx-packets" || name == "tx-total-bytes" || name == "tx-pkts-under-sized" || name == "tx-pkts-over-sized" || name == "tx-fragments" || name == "tx-jabber" || name == "tx-bad-fcs" || name == "rx-pkt-drop" || name == "rx-pause" || name == "tx-pause" || name == "rx-lldp-pkt" || name == "rx8021q-pkt")
        return true;
    return false;
}

const Enum::YLeaf MxpOtnPrbsStatus::locked {0, "locked"};
const Enum::YLeaf MxpOtnPrbsStatus::not_locked {1, "not-locked"};
const Enum::YLeaf MxpOtnPrbsStatus::not_applicable {2, "not-applicable"};
const Enum::YLeaf MxpOtnPrbsStatus::locked_with_errors {3, "locked-with-errors"};


}
}

