
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ETHER_WIS.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ETHER_WIS {

ETHERWIS::ETHERWIS()
    :
    etherwisdevicetable(std::make_shared<ETHERWIS::Etherwisdevicetable>())
	,etherwisfarendpathcurrenttable(std::make_shared<ETHERWIS::Etherwisfarendpathcurrenttable>())
	,etherwispathcurrenttable(std::make_shared<ETHERWIS::Etherwispathcurrenttable>())
	,etherwissectioncurrenttable(std::make_shared<ETHERWIS::Etherwissectioncurrenttable>())
{
    etherwisdevicetable->parent = this;
    etherwisfarendpathcurrenttable->parent = this;
    etherwispathcurrenttable->parent = this;
    etherwissectioncurrenttable->parent = this;

    yang_name = "ETHER-WIS"; yang_parent_name = "ETHER-WIS"; is_top_level_class = true; has_list_ancestor = false;
}

ETHERWIS::~ETHERWIS()
{
}

bool ETHERWIS::has_data() const
{
    return (etherwisdevicetable !=  nullptr && etherwisdevicetable->has_data())
	|| (etherwisfarendpathcurrenttable !=  nullptr && etherwisfarendpathcurrenttable->has_data())
	|| (etherwispathcurrenttable !=  nullptr && etherwispathcurrenttable->has_data())
	|| (etherwissectioncurrenttable !=  nullptr && etherwissectioncurrenttable->has_data());
}

bool ETHERWIS::has_operation() const
{
    return is_set(yfilter)
	|| (etherwisdevicetable !=  nullptr && etherwisdevicetable->has_operation())
	|| (etherwisfarendpathcurrenttable !=  nullptr && etherwisfarendpathcurrenttable->has_operation())
	|| (etherwispathcurrenttable !=  nullptr && etherwispathcurrenttable->has_operation())
	|| (etherwissectioncurrenttable !=  nullptr && etherwissectioncurrenttable->has_operation());
}

std::string ETHERWIS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisDeviceTable")
    {
        if(etherwisdevicetable == nullptr)
        {
            etherwisdevicetable = std::make_shared<ETHERWIS::Etherwisdevicetable>();
        }
        return etherwisdevicetable;
    }

    if(child_yang_name == "etherWisFarEndPathCurrentTable")
    {
        if(etherwisfarendpathcurrenttable == nullptr)
        {
            etherwisfarendpathcurrenttable = std::make_shared<ETHERWIS::Etherwisfarendpathcurrenttable>();
        }
        return etherwisfarendpathcurrenttable;
    }

    if(child_yang_name == "etherWisPathCurrentTable")
    {
        if(etherwispathcurrenttable == nullptr)
        {
            etherwispathcurrenttable = std::make_shared<ETHERWIS::Etherwispathcurrenttable>();
        }
        return etherwispathcurrenttable;
    }

    if(child_yang_name == "etherWisSectionCurrentTable")
    {
        if(etherwissectioncurrenttable == nullptr)
        {
            etherwissectioncurrenttable = std::make_shared<ETHERWIS::Etherwissectioncurrenttable>();
        }
        return etherwissectioncurrenttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(etherwisdevicetable != nullptr)
    {
        children["etherWisDeviceTable"] = etherwisdevicetable;
    }

    if(etherwisfarendpathcurrenttable != nullptr)
    {
        children["etherWisFarEndPathCurrentTable"] = etherwisfarendpathcurrenttable;
    }

    if(etherwispathcurrenttable != nullptr)
    {
        children["etherWisPathCurrentTable"] = etherwispathcurrenttable;
    }

    if(etherwissectioncurrenttable != nullptr)
    {
        children["etherWisSectionCurrentTable"] = etherwissectioncurrenttable;
    }

    return children;
}

void ETHERWIS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ETHERWIS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ETHERWIS::clone_ptr() const
{
    return std::make_shared<ETHERWIS>();
}

std::string ETHERWIS::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ETHERWIS::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ETHERWIS::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ETHERWIS::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ETHERWIS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisDeviceTable" || name == "etherWisFarEndPathCurrentTable" || name == "etherWisPathCurrentTable" || name == "etherWisSectionCurrentTable")
        return true;
    return false;
}

ETHERWIS::Etherwisdevicetable::Etherwisdevicetable()
{

    yang_name = "etherWisDeviceTable"; yang_parent_name = "ETHER-WIS"; is_top_level_class = false; has_list_ancestor = false;
}

ETHERWIS::Etherwisdevicetable::~Etherwisdevicetable()
{
}

bool ETHERWIS::Etherwisdevicetable::has_data() const
{
    for (std::size_t index=0; index<etherwisdeviceentry.size(); index++)
    {
        if(etherwisdeviceentry[index]->has_data())
            return true;
    }
    return false;
}

bool ETHERWIS::Etherwisdevicetable::has_operation() const
{
    for (std::size_t index=0; index<etherwisdeviceentry.size(); index++)
    {
        if(etherwisdeviceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ETHERWIS::Etherwisdevicetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::Etherwisdevicetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisDeviceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::Etherwisdevicetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::Etherwisdevicetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisDeviceEntry")
    {
        for(auto const & c : etherwisdeviceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry>();
        c->parent = this;
        etherwisdeviceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::Etherwisdevicetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwisdeviceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ETHERWIS::Etherwisdevicetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ETHERWIS::Etherwisdevicetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ETHERWIS::Etherwisdevicetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisDeviceEntry")
        return true;
    return false;
}

ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdeviceentry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwisdevicerxtestpatternerrors{YType::uint32, "etherWisDeviceRxTestPatternErrors"},
    etherwisdevicerxtestpatternmode{YType::enumeration, "etherWisDeviceRxTestPatternMode"},
    etherwisdevicetxtestpatternmode{YType::enumeration, "etherWisDeviceTxTestPatternMode"}
{

    yang_name = "etherWisDeviceEntry"; yang_parent_name = "etherWisDeviceTable"; is_top_level_class = false; has_list_ancestor = false;
}

ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::~Etherwisdeviceentry()
{
}

bool ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::has_data() const
{
    return ifindex.is_set
	|| etherwisdevicerxtestpatternerrors.is_set
	|| etherwisdevicerxtestpatternmode.is_set
	|| etherwisdevicetxtestpatternmode.is_set;
}

bool ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwisdevicerxtestpatternerrors.yfilter)
	|| ydk::is_set(etherwisdevicerxtestpatternmode.yfilter)
	|| ydk::is_set(etherwisdevicetxtestpatternmode.yfilter);
}

std::string ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/etherWisDeviceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisDeviceEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwisdevicerxtestpatternerrors.is_set || is_set(etherwisdevicerxtestpatternerrors.yfilter)) leaf_name_data.push_back(etherwisdevicerxtestpatternerrors.get_name_leafdata());
    if (etherwisdevicerxtestpatternmode.is_set || is_set(etherwisdevicerxtestpatternmode.yfilter)) leaf_name_data.push_back(etherwisdevicerxtestpatternmode.get_name_leafdata());
    if (etherwisdevicetxtestpatternmode.is_set || is_set(etherwisdevicetxtestpatternmode.yfilter)) leaf_name_data.push_back(etherwisdevicetxtestpatternmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisDeviceRxTestPatternErrors")
    {
        etherwisdevicerxtestpatternerrors = value;
        etherwisdevicerxtestpatternerrors.value_namespace = name_space;
        etherwisdevicerxtestpatternerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisDeviceRxTestPatternMode")
    {
        etherwisdevicerxtestpatternmode = value;
        etherwisdevicerxtestpatternmode.value_namespace = name_space;
        etherwisdevicerxtestpatternmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisDeviceTxTestPatternMode")
    {
        etherwisdevicetxtestpatternmode = value;
        etherwisdevicetxtestpatternmode.value_namespace = name_space;
        etherwisdevicetxtestpatternmode.value_namespace_prefix = name_space_prefix;
    }
}

void ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "etherWisDeviceRxTestPatternErrors")
    {
        etherwisdevicerxtestpatternerrors.yfilter = yfilter;
    }
    if(value_path == "etherWisDeviceRxTestPatternMode")
    {
        etherwisdevicerxtestpatternmode.yfilter = yfilter;
    }
    if(value_path == "etherWisDeviceTxTestPatternMode")
    {
        etherwisdevicetxtestpatternmode.yfilter = yfilter;
    }
}

bool ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisDeviceRxTestPatternErrors" || name == "etherWisDeviceRxTestPatternMode" || name == "etherWisDeviceTxTestPatternMode")
        return true;
    return false;
}

ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrenttable()
{

    yang_name = "etherWisFarEndPathCurrentTable"; yang_parent_name = "ETHER-WIS"; is_top_level_class = false; has_list_ancestor = false;
}

ETHERWIS::Etherwisfarendpathcurrenttable::~Etherwisfarendpathcurrenttable()
{
}

bool ETHERWIS::Etherwisfarendpathcurrenttable::has_data() const
{
    for (std::size_t index=0; index<etherwisfarendpathcurrententry.size(); index++)
    {
        if(etherwisfarendpathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool ETHERWIS::Etherwisfarendpathcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<etherwisfarendpathcurrententry.size(); index++)
    {
        if(etherwisfarendpathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ETHERWIS::Etherwisfarendpathcurrenttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::Etherwisfarendpathcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisFarEndPathCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::Etherwisfarendpathcurrenttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::Etherwisfarendpathcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisFarEndPathCurrentEntry")
    {
        for(auto const & c : etherwisfarendpathcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry>();
        c->parent = this;
        etherwisfarendpathcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::Etherwisfarendpathcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwisfarendpathcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ETHERWIS::Etherwisfarendpathcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ETHERWIS::Etherwisfarendpathcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ETHERWIS::Etherwisfarendpathcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisFarEndPathCurrentEntry")
        return true;
    return false;
}

ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::Etherwisfarendpathcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwisfarendpathcurrentstatus{YType::bits, "etherWisFarEndPathCurrentStatus"}
{

    yang_name = "etherWisFarEndPathCurrentEntry"; yang_parent_name = "etherWisFarEndPathCurrentTable"; is_top_level_class = false; has_list_ancestor = false;
}

ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::~Etherwisfarendpathcurrententry()
{
}

bool ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::has_data() const
{
    return ifindex.is_set
	|| etherwisfarendpathcurrentstatus.is_set;
}

bool ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwisfarendpathcurrentstatus.yfilter);
}

std::string ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/etherWisFarEndPathCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisFarEndPathCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwisfarendpathcurrentstatus.is_set || is_set(etherwisfarendpathcurrentstatus.yfilter)) leaf_name_data.push_back(etherwisfarendpathcurrentstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisFarEndPathCurrentStatus")
    {
        etherwisfarendpathcurrentstatus[value] = true;
    }
}

void ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "etherWisFarEndPathCurrentStatus")
    {
        etherwisfarendpathcurrentstatus.yfilter = yfilter;
    }
}

bool ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisFarEndPathCurrentStatus")
        return true;
    return false;
}

ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrenttable()
{

    yang_name = "etherWisPathCurrentTable"; yang_parent_name = "ETHER-WIS"; is_top_level_class = false; has_list_ancestor = false;
}

ETHERWIS::Etherwispathcurrenttable::~Etherwispathcurrenttable()
{
}

bool ETHERWIS::Etherwispathcurrenttable::has_data() const
{
    for (std::size_t index=0; index<etherwispathcurrententry.size(); index++)
    {
        if(etherwispathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool ETHERWIS::Etherwispathcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<etherwispathcurrententry.size(); index++)
    {
        if(etherwispathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ETHERWIS::Etherwispathcurrenttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::Etherwispathcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisPathCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::Etherwispathcurrenttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::Etherwispathcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisPathCurrentEntry")
    {
        for(auto const & c : etherwispathcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry>();
        c->parent = this;
        etherwispathcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::Etherwispathcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwispathcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ETHERWIS::Etherwispathcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ETHERWIS::Etherwispathcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ETHERWIS::Etherwispathcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisPathCurrentEntry")
        return true;
    return false;
}

ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::Etherwispathcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwispathcurrentj1received{YType::str, "etherWisPathCurrentJ1Received"},
    etherwispathcurrentj1transmitted{YType::str, "etherWisPathCurrentJ1Transmitted"},
    etherwispathcurrentstatus{YType::bits, "etherWisPathCurrentStatus"}
{

    yang_name = "etherWisPathCurrentEntry"; yang_parent_name = "etherWisPathCurrentTable"; is_top_level_class = false; has_list_ancestor = false;
}

ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::~Etherwispathcurrententry()
{
}

bool ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::has_data() const
{
    return ifindex.is_set
	|| etherwispathcurrentj1received.is_set
	|| etherwispathcurrentj1transmitted.is_set
	|| etherwispathcurrentstatus.is_set;
}

bool ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwispathcurrentj1received.yfilter)
	|| ydk::is_set(etherwispathcurrentj1transmitted.yfilter)
	|| ydk::is_set(etherwispathcurrentstatus.yfilter);
}

std::string ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/etherWisPathCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisPathCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwispathcurrentj1received.is_set || is_set(etherwispathcurrentj1received.yfilter)) leaf_name_data.push_back(etherwispathcurrentj1received.get_name_leafdata());
    if (etherwispathcurrentj1transmitted.is_set || is_set(etherwispathcurrentj1transmitted.yfilter)) leaf_name_data.push_back(etherwispathcurrentj1transmitted.get_name_leafdata());
    if (etherwispathcurrentstatus.is_set || is_set(etherwispathcurrentstatus.yfilter)) leaf_name_data.push_back(etherwispathcurrentstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisPathCurrentJ1Received")
    {
        etherwispathcurrentj1received = value;
        etherwispathcurrentj1received.value_namespace = name_space;
        etherwispathcurrentj1received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisPathCurrentJ1Transmitted")
    {
        etherwispathcurrentj1transmitted = value;
        etherwispathcurrentj1transmitted.value_namespace = name_space;
        etherwispathcurrentj1transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisPathCurrentStatus")
    {
        etherwispathcurrentstatus[value] = true;
    }
}

void ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "etherWisPathCurrentJ1Received")
    {
        etherwispathcurrentj1received.yfilter = yfilter;
    }
    if(value_path == "etherWisPathCurrentJ1Transmitted")
    {
        etherwispathcurrentj1transmitted.yfilter = yfilter;
    }
    if(value_path == "etherWisPathCurrentStatus")
    {
        etherwispathcurrentstatus.yfilter = yfilter;
    }
}

bool ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisPathCurrentJ1Received" || name == "etherWisPathCurrentJ1Transmitted" || name == "etherWisPathCurrentStatus")
        return true;
    return false;
}

ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrenttable()
{

    yang_name = "etherWisSectionCurrentTable"; yang_parent_name = "ETHER-WIS"; is_top_level_class = false; has_list_ancestor = false;
}

ETHERWIS::Etherwissectioncurrenttable::~Etherwissectioncurrenttable()
{
}

bool ETHERWIS::Etherwissectioncurrenttable::has_data() const
{
    for (std::size_t index=0; index<etherwissectioncurrententry.size(); index++)
    {
        if(etherwissectioncurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool ETHERWIS::Etherwissectioncurrenttable::has_operation() const
{
    for (std::size_t index=0; index<etherwissectioncurrententry.size(); index++)
    {
        if(etherwissectioncurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ETHERWIS::Etherwissectioncurrenttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::Etherwissectioncurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisSectionCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::Etherwissectioncurrenttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::Etherwissectioncurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisSectionCurrentEntry")
    {
        for(auto const & c : etherwissectioncurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry>();
        c->parent = this;
        etherwissectioncurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::Etherwissectioncurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwissectioncurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ETHERWIS::Etherwissectioncurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ETHERWIS::Etherwissectioncurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ETHERWIS::Etherwissectioncurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisSectionCurrentEntry")
        return true;
    return false;
}

ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::Etherwissectioncurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwissectioncurrentj0received{YType::str, "etherWisSectionCurrentJ0Received"},
    etherwissectioncurrentj0transmitted{YType::str, "etherWisSectionCurrentJ0Transmitted"}
{

    yang_name = "etherWisSectionCurrentEntry"; yang_parent_name = "etherWisSectionCurrentTable"; is_top_level_class = false; has_list_ancestor = false;
}

ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::~Etherwissectioncurrententry()
{
}

bool ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::has_data() const
{
    return ifindex.is_set
	|| etherwissectioncurrentj0received.is_set
	|| etherwissectioncurrentj0transmitted.is_set;
}

bool ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwissectioncurrentj0received.yfilter)
	|| ydk::is_set(etherwissectioncurrentj0transmitted.yfilter);
}

std::string ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/etherWisSectionCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisSectionCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwissectioncurrentj0received.is_set || is_set(etherwissectioncurrentj0received.yfilter)) leaf_name_data.push_back(etherwissectioncurrentj0received.get_name_leafdata());
    if (etherwissectioncurrentj0transmitted.is_set || is_set(etherwissectioncurrentj0transmitted.yfilter)) leaf_name_data.push_back(etherwissectioncurrentj0transmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisSectionCurrentJ0Received")
    {
        etherwissectioncurrentj0received = value;
        etherwissectioncurrentj0received.value_namespace = name_space;
        etherwissectioncurrentj0received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisSectionCurrentJ0Transmitted")
    {
        etherwissectioncurrentj0transmitted = value;
        etherwissectioncurrentj0transmitted.value_namespace = name_space;
        etherwissectioncurrentj0transmitted.value_namespace_prefix = name_space_prefix;
    }
}

void ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "etherWisSectionCurrentJ0Received")
    {
        etherwissectioncurrentj0received.yfilter = yfilter;
    }
    if(value_path == "etherWisSectionCurrentJ0Transmitted")
    {
        etherwissectioncurrentj0transmitted.yfilter = yfilter;
    }
}

bool ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisSectionCurrentJ0Received" || name == "etherWisSectionCurrentJ0Transmitted")
        return true;
    return false;
}

const Enum::YLeaf ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode::none {1, "none"};
const Enum::YLeaf ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode::squareWave {2, "squareWave"};
const Enum::YLeaf ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode::prbs31 {3, "prbs31"};
const Enum::YLeaf ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode::mixedFrequency {4, "mixedFrequency"};

const Enum::YLeaf ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicerxtestpatternmode::none {1, "none"};
const Enum::YLeaf ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicerxtestpatternmode::prbs31 {3, "prbs31"};
const Enum::YLeaf ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicerxtestpatternmode::mixedFrequency {4, "mixedFrequency"};


}
}

