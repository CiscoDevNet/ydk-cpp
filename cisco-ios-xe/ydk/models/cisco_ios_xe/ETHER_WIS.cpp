
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
    etherwisdevicetable(std::make_shared<ETHERWIS::EtherWisDeviceTable>())
    , etherwissectioncurrenttable(std::make_shared<ETHERWIS::EtherWisSectionCurrentTable>())
    , etherwispathcurrenttable(std::make_shared<ETHERWIS::EtherWisPathCurrentTable>())
    , etherwisfarendpathcurrenttable(std::make_shared<ETHERWIS::EtherWisFarEndPathCurrentTable>())
{
    etherwisdevicetable->parent = this;
    etherwissectioncurrenttable->parent = this;
    etherwispathcurrenttable->parent = this;
    etherwisfarendpathcurrenttable->parent = this;

    yang_name = "ETHER-WIS"; yang_parent_name = "ETHER-WIS"; is_top_level_class = true; has_list_ancestor = false; 
}

ETHERWIS::~ETHERWIS()
{
}

bool ETHERWIS::has_data() const
{
    if (is_presence_container) return true;
    return (etherwisdevicetable !=  nullptr && etherwisdevicetable->has_data())
	|| (etherwissectioncurrenttable !=  nullptr && etherwissectioncurrenttable->has_data())
	|| (etherwispathcurrenttable !=  nullptr && etherwispathcurrenttable->has_data())
	|| (etherwisfarendpathcurrenttable !=  nullptr && etherwisfarendpathcurrenttable->has_data());
}

bool ETHERWIS::has_operation() const
{
    return is_set(yfilter)
	|| (etherwisdevicetable !=  nullptr && etherwisdevicetable->has_operation())
	|| (etherwissectioncurrenttable !=  nullptr && etherwissectioncurrenttable->has_operation())
	|| (etherwispathcurrenttable !=  nullptr && etherwispathcurrenttable->has_operation())
	|| (etherwisfarendpathcurrenttable !=  nullptr && etherwisfarendpathcurrenttable->has_operation());
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
            etherwisdevicetable = std::make_shared<ETHERWIS::EtherWisDeviceTable>();
        }
        return etherwisdevicetable;
    }

    if(child_yang_name == "etherWisSectionCurrentTable")
    {
        if(etherwissectioncurrenttable == nullptr)
        {
            etherwissectioncurrenttable = std::make_shared<ETHERWIS::EtherWisSectionCurrentTable>();
        }
        return etherwissectioncurrenttable;
    }

    if(child_yang_name == "etherWisPathCurrentTable")
    {
        if(etherwispathcurrenttable == nullptr)
        {
            etherwispathcurrenttable = std::make_shared<ETHERWIS::EtherWisPathCurrentTable>();
        }
        return etherwispathcurrenttable;
    }

    if(child_yang_name == "etherWisFarEndPathCurrentTable")
    {
        if(etherwisfarendpathcurrenttable == nullptr)
        {
            etherwisfarendpathcurrenttable = std::make_shared<ETHERWIS::EtherWisFarEndPathCurrentTable>();
        }
        return etherwisfarendpathcurrenttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(etherwisdevicetable != nullptr)
    {
        children["etherWisDeviceTable"] = etherwisdevicetable;
    }

    if(etherwissectioncurrenttable != nullptr)
    {
        children["etherWisSectionCurrentTable"] = etherwissectioncurrenttable;
    }

    if(etherwispathcurrenttable != nullptr)
    {
        children["etherWisPathCurrentTable"] = etherwispathcurrenttable;
    }

    if(etherwisfarendpathcurrenttable != nullptr)
    {
        children["etherWisFarEndPathCurrentTable"] = etherwisfarendpathcurrenttable;
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
    if(name == "etherWisDeviceTable" || name == "etherWisSectionCurrentTable" || name == "etherWisPathCurrentTable" || name == "etherWisFarEndPathCurrentTable")
        return true;
    return false;
}

ETHERWIS::EtherWisDeviceTable::EtherWisDeviceTable()
    :
    etherwisdeviceentry(this, {"ifindex"})
{

    yang_name = "etherWisDeviceTable"; yang_parent_name = "ETHER-WIS"; is_top_level_class = false; has_list_ancestor = false; 
}

ETHERWIS::EtherWisDeviceTable::~EtherWisDeviceTable()
{
}

bool ETHERWIS::EtherWisDeviceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<etherwisdeviceentry.len(); index++)
    {
        if(etherwisdeviceentry[index]->has_data())
            return true;
    }
    return false;
}

bool ETHERWIS::EtherWisDeviceTable::has_operation() const
{
    for (std::size_t index=0; index<etherwisdeviceentry.len(); index++)
    {
        if(etherwisdeviceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ETHERWIS::EtherWisDeviceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::EtherWisDeviceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisDeviceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::EtherWisDeviceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::EtherWisDeviceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisDeviceEntry")
    {
        auto c = std::make_shared<ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry>();
        c->parent = this;
        etherwisdeviceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::EtherWisDeviceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : etherwisdeviceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ETHERWIS::EtherWisDeviceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ETHERWIS::EtherWisDeviceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ETHERWIS::EtherWisDeviceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisDeviceEntry")
        return true;
    return false;
}

ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceEntry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwisdevicetxtestpatternmode{YType::enumeration, "etherWisDeviceTxTestPatternMode"},
    etherwisdevicerxtestpatternmode{YType::enumeration, "etherWisDeviceRxTestPatternMode"},
    etherwisdevicerxtestpatternerrors{YType::uint32, "etherWisDeviceRxTestPatternErrors"}
{

    yang_name = "etherWisDeviceEntry"; yang_parent_name = "etherWisDeviceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::~EtherWisDeviceEntry()
{
}

bool ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| etherwisdevicetxtestpatternmode.is_set
	|| etherwisdevicerxtestpatternmode.is_set
	|| etherwisdevicerxtestpatternerrors.is_set;
}

bool ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwisdevicetxtestpatternmode.yfilter)
	|| ydk::is_set(etherwisdevicerxtestpatternmode.yfilter)
	|| ydk::is_set(etherwisdevicerxtestpatternerrors.yfilter);
}

std::string ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/etherWisDeviceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisDeviceEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwisdevicetxtestpatternmode.is_set || is_set(etherwisdevicetxtestpatternmode.yfilter)) leaf_name_data.push_back(etherwisdevicetxtestpatternmode.get_name_leafdata());
    if (etherwisdevicerxtestpatternmode.is_set || is_set(etherwisdevicerxtestpatternmode.yfilter)) leaf_name_data.push_back(etherwisdevicerxtestpatternmode.get_name_leafdata());
    if (etherwisdevicerxtestpatternerrors.is_set || is_set(etherwisdevicerxtestpatternerrors.yfilter)) leaf_name_data.push_back(etherwisdevicerxtestpatternerrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisDeviceTxTestPatternMode")
    {
        etherwisdevicetxtestpatternmode = value;
        etherwisdevicetxtestpatternmode.value_namespace = name_space;
        etherwisdevicetxtestpatternmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisDeviceRxTestPatternMode")
    {
        etherwisdevicerxtestpatternmode = value;
        etherwisdevicerxtestpatternmode.value_namespace = name_space;
        etherwisdevicerxtestpatternmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisDeviceRxTestPatternErrors")
    {
        etherwisdevicerxtestpatternerrors = value;
        etherwisdevicerxtestpatternerrors.value_namespace = name_space;
        etherwisdevicerxtestpatternerrors.value_namespace_prefix = name_space_prefix;
    }
}

void ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "etherWisDeviceTxTestPatternMode")
    {
        etherwisdevicetxtestpatternmode.yfilter = yfilter;
    }
    if(value_path == "etherWisDeviceRxTestPatternMode")
    {
        etherwisdevicerxtestpatternmode.yfilter = yfilter;
    }
    if(value_path == "etherWisDeviceRxTestPatternErrors")
    {
        etherwisdevicerxtestpatternerrors.yfilter = yfilter;
    }
}

bool ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisDeviceTxTestPatternMode" || name == "etherWisDeviceRxTestPatternMode" || name == "etherWisDeviceRxTestPatternErrors")
        return true;
    return false;
}

ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentTable()
    :
    etherwissectioncurrententry(this, {"ifindex"})
{

    yang_name = "etherWisSectionCurrentTable"; yang_parent_name = "ETHER-WIS"; is_top_level_class = false; has_list_ancestor = false; 
}

ETHERWIS::EtherWisSectionCurrentTable::~EtherWisSectionCurrentTable()
{
}

bool ETHERWIS::EtherWisSectionCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<etherwissectioncurrententry.len(); index++)
    {
        if(etherwissectioncurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool ETHERWIS::EtherWisSectionCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<etherwissectioncurrententry.len(); index++)
    {
        if(etherwissectioncurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ETHERWIS::EtherWisSectionCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::EtherWisSectionCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisSectionCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::EtherWisSectionCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::EtherWisSectionCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisSectionCurrentEntry")
    {
        auto c = std::make_shared<ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry>();
        c->parent = this;
        etherwissectioncurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::EtherWisSectionCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : etherwissectioncurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ETHERWIS::EtherWisSectionCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ETHERWIS::EtherWisSectionCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ETHERWIS::EtherWisSectionCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisSectionCurrentEntry")
        return true;
    return false;
}

ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::EtherWisSectionCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwissectioncurrentj0transmitted{YType::str, "etherWisSectionCurrentJ0Transmitted"},
    etherwissectioncurrentj0received{YType::str, "etherWisSectionCurrentJ0Received"}
{

    yang_name = "etherWisSectionCurrentEntry"; yang_parent_name = "etherWisSectionCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::~EtherWisSectionCurrentEntry()
{
}

bool ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| etherwissectioncurrentj0transmitted.is_set
	|| etherwissectioncurrentj0received.is_set;
}

bool ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwissectioncurrentj0transmitted.yfilter)
	|| ydk::is_set(etherwissectioncurrentj0received.yfilter);
}

std::string ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/etherWisSectionCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisSectionCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwissectioncurrentj0transmitted.is_set || is_set(etherwissectioncurrentj0transmitted.yfilter)) leaf_name_data.push_back(etherwissectioncurrentj0transmitted.get_name_leafdata());
    if (etherwissectioncurrentj0received.is_set || is_set(etherwissectioncurrentj0received.yfilter)) leaf_name_data.push_back(etherwissectioncurrentj0received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisSectionCurrentJ0Transmitted")
    {
        etherwissectioncurrentj0transmitted = value;
        etherwissectioncurrentj0transmitted.value_namespace = name_space;
        etherwissectioncurrentj0transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisSectionCurrentJ0Received")
    {
        etherwissectioncurrentj0received = value;
        etherwissectioncurrentj0received.value_namespace = name_space;
        etherwissectioncurrentj0received.value_namespace_prefix = name_space_prefix;
    }
}

void ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "etherWisSectionCurrentJ0Transmitted")
    {
        etherwissectioncurrentj0transmitted.yfilter = yfilter;
    }
    if(value_path == "etherWisSectionCurrentJ0Received")
    {
        etherwissectioncurrentj0received.yfilter = yfilter;
    }
}

bool ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisSectionCurrentJ0Transmitted" || name == "etherWisSectionCurrentJ0Received")
        return true;
    return false;
}

ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentTable()
    :
    etherwispathcurrententry(this, {"ifindex"})
{

    yang_name = "etherWisPathCurrentTable"; yang_parent_name = "ETHER-WIS"; is_top_level_class = false; has_list_ancestor = false; 
}

ETHERWIS::EtherWisPathCurrentTable::~EtherWisPathCurrentTable()
{
}

bool ETHERWIS::EtherWisPathCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<etherwispathcurrententry.len(); index++)
    {
        if(etherwispathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool ETHERWIS::EtherWisPathCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<etherwispathcurrententry.len(); index++)
    {
        if(etherwispathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ETHERWIS::EtherWisPathCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::EtherWisPathCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisPathCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::EtherWisPathCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::EtherWisPathCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisPathCurrentEntry")
    {
        auto c = std::make_shared<ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry>();
        c->parent = this;
        etherwispathcurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::EtherWisPathCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : etherwispathcurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ETHERWIS::EtherWisPathCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ETHERWIS::EtherWisPathCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ETHERWIS::EtherWisPathCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisPathCurrentEntry")
        return true;
    return false;
}

ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::EtherWisPathCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwispathcurrentstatus{YType::bits, "etherWisPathCurrentStatus"},
    etherwispathcurrentj1transmitted{YType::str, "etherWisPathCurrentJ1Transmitted"},
    etherwispathcurrentj1received{YType::str, "etherWisPathCurrentJ1Received"}
{

    yang_name = "etherWisPathCurrentEntry"; yang_parent_name = "etherWisPathCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::~EtherWisPathCurrentEntry()
{
}

bool ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| etherwispathcurrentstatus.is_set
	|| etherwispathcurrentj1transmitted.is_set
	|| etherwispathcurrentj1received.is_set;
}

bool ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwispathcurrentstatus.yfilter)
	|| ydk::is_set(etherwispathcurrentj1transmitted.yfilter)
	|| ydk::is_set(etherwispathcurrentj1received.yfilter);
}

std::string ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/etherWisPathCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisPathCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwispathcurrentstatus.is_set || is_set(etherwispathcurrentstatus.yfilter)) leaf_name_data.push_back(etherwispathcurrentstatus.get_name_leafdata());
    if (etherwispathcurrentj1transmitted.is_set || is_set(etherwispathcurrentj1transmitted.yfilter)) leaf_name_data.push_back(etherwispathcurrentj1transmitted.get_name_leafdata());
    if (etherwispathcurrentj1received.is_set || is_set(etherwispathcurrentj1received.yfilter)) leaf_name_data.push_back(etherwispathcurrentj1received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisPathCurrentStatus")
    {
        etherwispathcurrentstatus[value] = true;
    }
    if(value_path == "etherWisPathCurrentJ1Transmitted")
    {
        etherwispathcurrentj1transmitted = value;
        etherwispathcurrentj1transmitted.value_namespace = name_space;
        etherwispathcurrentj1transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherWisPathCurrentJ1Received")
    {
        etherwispathcurrentj1received = value;
        etherwispathcurrentj1received.value_namespace = name_space;
        etherwispathcurrentj1received.value_namespace_prefix = name_space_prefix;
    }
}

void ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "etherWisPathCurrentStatus")
    {
        etherwispathcurrentstatus.yfilter = yfilter;
    }
    if(value_path == "etherWisPathCurrentJ1Transmitted")
    {
        etherwispathcurrentj1transmitted.yfilter = yfilter;
    }
    if(value_path == "etherWisPathCurrentJ1Received")
    {
        etherwispathcurrentj1received.yfilter = yfilter;
    }
}

bool ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisPathCurrentStatus" || name == "etherWisPathCurrentJ1Transmitted" || name == "etherWisPathCurrentJ1Received")
        return true;
    return false;
}

ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentTable()
    :
    etherwisfarendpathcurrententry(this, {"ifindex"})
{

    yang_name = "etherWisFarEndPathCurrentTable"; yang_parent_name = "ETHER-WIS"; is_top_level_class = false; has_list_ancestor = false; 
}

ETHERWIS::EtherWisFarEndPathCurrentTable::~EtherWisFarEndPathCurrentTable()
{
}

bool ETHERWIS::EtherWisFarEndPathCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<etherwisfarendpathcurrententry.len(); index++)
    {
        if(etherwisfarendpathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool ETHERWIS::EtherWisFarEndPathCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<etherwisfarendpathcurrententry.len(); index++)
    {
        if(etherwisfarendpathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ETHERWIS::EtherWisFarEndPathCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::EtherWisFarEndPathCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisFarEndPathCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::EtherWisFarEndPathCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::EtherWisFarEndPathCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisFarEndPathCurrentEntry")
    {
        auto c = std::make_shared<ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry>();
        c->parent = this;
        etherwisfarendpathcurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::EtherWisFarEndPathCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : etherwisfarendpathcurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ETHERWIS::EtherWisFarEndPathCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ETHERWIS::EtherWisFarEndPathCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ETHERWIS::EtherWisFarEndPathCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisFarEndPathCurrentEntry")
        return true;
    return false;
}

ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::EtherWisFarEndPathCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwisfarendpathcurrentstatus{YType::bits, "etherWisFarEndPathCurrentStatus"}
{

    yang_name = "etherWisFarEndPathCurrentEntry"; yang_parent_name = "etherWisFarEndPathCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::~EtherWisFarEndPathCurrentEntry()
{
}

bool ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| etherwisfarendpathcurrentstatus.is_set;
}

bool ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwisfarendpathcurrentstatus.yfilter);
}

std::string ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS/etherWisFarEndPathCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisFarEndPathCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwisfarendpathcurrentstatus.is_set || is_set(etherwisfarendpathcurrentstatus.yfilter)) leaf_name_data.push_back(etherwisfarendpathcurrentstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisFarEndPathCurrentStatus")
        return true;
    return false;
}

const Enum::YLeaf ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceTxTestPatternMode::none {1, "none"};
const Enum::YLeaf ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceTxTestPatternMode::squareWave {2, "squareWave"};
const Enum::YLeaf ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceTxTestPatternMode::prbs31 {3, "prbs31"};
const Enum::YLeaf ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceTxTestPatternMode::mixedFrequency {4, "mixedFrequency"};

const Enum::YLeaf ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceRxTestPatternMode::none {1, "none"};
const Enum::YLeaf ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceRxTestPatternMode::prbs31 {3, "prbs31"};
const Enum::YLeaf ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceRxTestPatternMode::mixedFrequency {4, "mixedFrequency"};


}
}

