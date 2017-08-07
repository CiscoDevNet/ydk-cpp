
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ETHER_WIS.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ETHER_WIS {

EtherWis::EtherWis()
    :
    etherwisdevicetable(std::make_shared<EtherWis::Etherwisdevicetable>())
	,etherwisfarendpathcurrenttable(std::make_shared<EtherWis::Etherwisfarendpathcurrenttable>())
	,etherwispathcurrenttable(std::make_shared<EtherWis::Etherwispathcurrenttable>())
	,etherwissectioncurrenttable(std::make_shared<EtherWis::Etherwissectioncurrenttable>())
{
    etherwisdevicetable->parent = this;

    etherwisfarendpathcurrenttable->parent = this;

    etherwispathcurrenttable->parent = this;

    etherwissectioncurrenttable->parent = this;

    yang_name = "ETHER-WIS"; yang_parent_name = "ETHER-WIS";
}

EtherWis::~EtherWis()
{
}

bool EtherWis::has_data() const
{
    return (etherwisdevicetable !=  nullptr && etherwisdevicetable->has_data())
	|| (etherwisfarendpathcurrenttable !=  nullptr && etherwisfarendpathcurrenttable->has_data())
	|| (etherwispathcurrenttable !=  nullptr && etherwispathcurrenttable->has_data())
	|| (etherwissectioncurrenttable !=  nullptr && etherwissectioncurrenttable->has_data());
}

bool EtherWis::has_operation() const
{
    return is_set(yfilter)
	|| (etherwisdevicetable !=  nullptr && etherwisdevicetable->has_operation())
	|| (etherwisfarendpathcurrenttable !=  nullptr && etherwisfarendpathcurrenttable->has_operation())
	|| (etherwispathcurrenttable !=  nullptr && etherwispathcurrenttable->has_operation())
	|| (etherwissectioncurrenttable !=  nullptr && etherwissectioncurrenttable->has_operation());
}

std::string EtherWis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS";

    return path_buffer.str();

}

const EntityPath EtherWis::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EtherWis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisDeviceTable")
    {
        if(etherwisdevicetable == nullptr)
        {
            etherwisdevicetable = std::make_shared<EtherWis::Etherwisdevicetable>();
        }
        return etherwisdevicetable;
    }

    if(child_yang_name == "etherWisFarEndPathCurrentTable")
    {
        if(etherwisfarendpathcurrenttable == nullptr)
        {
            etherwisfarendpathcurrenttable = std::make_shared<EtherWis::Etherwisfarendpathcurrenttable>();
        }
        return etherwisfarendpathcurrenttable;
    }

    if(child_yang_name == "etherWisPathCurrentTable")
    {
        if(etherwispathcurrenttable == nullptr)
        {
            etherwispathcurrenttable = std::make_shared<EtherWis::Etherwispathcurrenttable>();
        }
        return etherwispathcurrenttable;
    }

    if(child_yang_name == "etherWisSectionCurrentTable")
    {
        if(etherwissectioncurrenttable == nullptr)
        {
            etherwissectioncurrenttable = std::make_shared<EtherWis::Etherwissectioncurrenttable>();
        }
        return etherwissectioncurrenttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::get_children() const
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

void EtherWis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherWis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EtherWis::clone_ptr() const
{
    return std::make_shared<EtherWis>();
}

std::string EtherWis::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EtherWis::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EtherWis::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EtherWis::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool EtherWis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisDeviceTable" || name == "etherWisFarEndPathCurrentTable" || name == "etherWisPathCurrentTable" || name == "etherWisSectionCurrentTable")
        return true;
    return false;
}

EtherWis::Etherwisdevicetable::Etherwisdevicetable()
{
    yang_name = "etherWisDeviceTable"; yang_parent_name = "ETHER-WIS";
}

EtherWis::Etherwisdevicetable::~Etherwisdevicetable()
{
}

bool EtherWis::Etherwisdevicetable::has_data() const
{
    for (std::size_t index=0; index<etherwisdeviceentry.size(); index++)
    {
        if(etherwisdeviceentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherWis::Etherwisdevicetable::has_operation() const
{
    for (std::size_t index=0; index<etherwisdeviceentry.size(); index++)
    {
        if(etherwisdeviceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherWis::Etherwisdevicetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisDeviceTable";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwisdevicetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwisdevicetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<EtherWis::Etherwisdevicetable::Etherwisdeviceentry>();
        c->parent = this;
        etherwisdeviceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwisdevicetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwisdeviceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherWis::Etherwisdevicetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherWis::Etherwisdevicetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherWis::Etherwisdevicetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisDeviceEntry")
        return true;
    return false;
}

EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdeviceentry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwisdevicerxtestpatternerrors{YType::uint32, "etherWisDeviceRxTestPatternErrors"},
    etherwisdevicerxtestpatternmode{YType::enumeration, "etherWisDeviceRxTestPatternMode"},
    etherwisdevicetxtestpatternmode{YType::enumeration, "etherWisDeviceTxTestPatternMode"}
{
    yang_name = "etherWisDeviceEntry"; yang_parent_name = "etherWisDeviceTable";
}

EtherWis::Etherwisdevicetable::Etherwisdeviceentry::~Etherwisdeviceentry()
{
}

bool EtherWis::Etherwisdevicetable::Etherwisdeviceentry::has_data() const
{
    return ifindex.is_set
	|| etherwisdevicerxtestpatternerrors.is_set
	|| etherwisdevicerxtestpatternmode.is_set
	|| etherwisdevicetxtestpatternmode.is_set;
}

bool EtherWis::Etherwisdevicetable::Etherwisdeviceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwisdevicerxtestpatternerrors.yfilter)
	|| ydk::is_set(etherwisdevicerxtestpatternmode.yfilter)
	|| ydk::is_set(etherwisdevicetxtestpatternmode.yfilter);
}

std::string EtherWis::Etherwisdevicetable::Etherwisdeviceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisDeviceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwisdevicetable::Etherwisdeviceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/etherWisDeviceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwisdevicerxtestpatternerrors.is_set || is_set(etherwisdevicerxtestpatternerrors.yfilter)) leaf_name_data.push_back(etherwisdevicerxtestpatternerrors.get_name_leafdata());
    if (etherwisdevicerxtestpatternmode.is_set || is_set(etherwisdevicerxtestpatternmode.yfilter)) leaf_name_data.push_back(etherwisdevicerxtestpatternmode.get_name_leafdata());
    if (etherwisdevicetxtestpatternmode.is_set || is_set(etherwisdevicetxtestpatternmode.yfilter)) leaf_name_data.push_back(etherwisdevicetxtestpatternmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwisdevicetable::Etherwisdeviceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwisdevicetable::Etherwisdeviceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherWis::Etherwisdevicetable::Etherwisdeviceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void EtherWis::Etherwisdevicetable::Etherwisdeviceentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool EtherWis::Etherwisdevicetable::Etherwisdeviceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisDeviceRxTestPatternErrors" || name == "etherWisDeviceRxTestPatternMode" || name == "etherWisDeviceTxTestPatternMode")
        return true;
    return false;
}

EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrenttable()
{
    yang_name = "etherWisSectionCurrentTable"; yang_parent_name = "ETHER-WIS";
}

EtherWis::Etherwissectioncurrenttable::~Etherwissectioncurrenttable()
{
}

bool EtherWis::Etherwissectioncurrenttable::has_data() const
{
    for (std::size_t index=0; index<etherwissectioncurrententry.size(); index++)
    {
        if(etherwissectioncurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherWis::Etherwissectioncurrenttable::has_operation() const
{
    for (std::size_t index=0; index<etherwissectioncurrententry.size(); index++)
    {
        if(etherwissectioncurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherWis::Etherwissectioncurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisSectionCurrentTable";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwissectioncurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwissectioncurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry>();
        c->parent = this;
        etherwissectioncurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwissectioncurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwissectioncurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherWis::Etherwissectioncurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherWis::Etherwissectioncurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherWis::Etherwissectioncurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisSectionCurrentEntry")
        return true;
    return false;
}

EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::Etherwissectioncurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwissectioncurrentj0received{YType::str, "etherWisSectionCurrentJ0Received"},
    etherwissectioncurrentj0transmitted{YType::str, "etherWisSectionCurrentJ0Transmitted"}
{
    yang_name = "etherWisSectionCurrentEntry"; yang_parent_name = "etherWisSectionCurrentTable";
}

EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::~Etherwissectioncurrententry()
{
}

bool EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::has_data() const
{
    return ifindex.is_set
	|| etherwissectioncurrentj0received.is_set
	|| etherwissectioncurrentj0transmitted.is_set;
}

bool EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwissectioncurrentj0received.yfilter)
	|| ydk::is_set(etherwissectioncurrentj0transmitted.yfilter);
}

std::string EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisSectionCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/etherWisSectionCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwissectioncurrentj0received.is_set || is_set(etherwissectioncurrentj0received.yfilter)) leaf_name_data.push_back(etherwissectioncurrentj0received.get_name_leafdata());
    if (etherwissectioncurrentj0transmitted.is_set || is_set(etherwissectioncurrentj0transmitted.yfilter)) leaf_name_data.push_back(etherwissectioncurrentj0transmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisSectionCurrentJ0Received" || name == "etherWisSectionCurrentJ0Transmitted")
        return true;
    return false;
}

EtherWis::Etherwispathcurrenttable::Etherwispathcurrenttable()
{
    yang_name = "etherWisPathCurrentTable"; yang_parent_name = "ETHER-WIS";
}

EtherWis::Etherwispathcurrenttable::~Etherwispathcurrenttable()
{
}

bool EtherWis::Etherwispathcurrenttable::has_data() const
{
    for (std::size_t index=0; index<etherwispathcurrententry.size(); index++)
    {
        if(etherwispathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherWis::Etherwispathcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<etherwispathcurrententry.size(); index++)
    {
        if(etherwispathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherWis::Etherwispathcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisPathCurrentTable";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwispathcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwispathcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry>();
        c->parent = this;
        etherwispathcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwispathcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwispathcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherWis::Etherwispathcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherWis::Etherwispathcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherWis::Etherwispathcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisPathCurrentEntry")
        return true;
    return false;
}

EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::Etherwispathcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwispathcurrentj1received{YType::str, "etherWisPathCurrentJ1Received"},
    etherwispathcurrentj1transmitted{YType::str, "etherWisPathCurrentJ1Transmitted"},
    etherwispathcurrentstatus{YType::bits, "etherWisPathCurrentStatus"}
{
    yang_name = "etherWisPathCurrentEntry"; yang_parent_name = "etherWisPathCurrentTable";
}

EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::~Etherwispathcurrententry()
{
}

bool EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::has_data() const
{
    return ifindex.is_set
	|| etherwispathcurrentj1received.is_set
	|| etherwispathcurrentj1transmitted.is_set
	|| etherwispathcurrentstatus.is_set;
}

bool EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwispathcurrentj1received.yfilter)
	|| ydk::is_set(etherwispathcurrentj1transmitted.yfilter)
	|| ydk::is_set(etherwispathcurrentstatus.yfilter);
}

std::string EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisPathCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/etherWisPathCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwispathcurrentj1received.is_set || is_set(etherwispathcurrentj1received.yfilter)) leaf_name_data.push_back(etherwispathcurrentj1received.get_name_leafdata());
    if (etherwispathcurrentj1transmitted.is_set || is_set(etherwispathcurrentj1transmitted.yfilter)) leaf_name_data.push_back(etherwispathcurrentj1transmitted.get_name_leafdata());
    if (etherwispathcurrentstatus.is_set || is_set(etherwispathcurrentstatus.yfilter)) leaf_name_data.push_back(etherwispathcurrentstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisPathCurrentJ1Received" || name == "etherWisPathCurrentJ1Transmitted" || name == "etherWisPathCurrentStatus")
        return true;
    return false;
}

EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrenttable()
{
    yang_name = "etherWisFarEndPathCurrentTable"; yang_parent_name = "ETHER-WIS";
}

EtherWis::Etherwisfarendpathcurrenttable::~Etherwisfarendpathcurrenttable()
{
}

bool EtherWis::Etherwisfarendpathcurrenttable::has_data() const
{
    for (std::size_t index=0; index<etherwisfarendpathcurrententry.size(); index++)
    {
        if(etherwisfarendpathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherWis::Etherwisfarendpathcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<etherwisfarendpathcurrententry.size(); index++)
    {
        if(etherwisfarendpathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherWis::Etherwisfarendpathcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisFarEndPathCurrentTable";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwisfarendpathcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwisfarendpathcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry>();
        c->parent = this;
        etherwisfarendpathcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwisfarendpathcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwisfarendpathcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherWis::Etherwisfarendpathcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherWis::Etherwisfarendpathcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherWis::Etherwisfarendpathcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etherWisFarEndPathCurrentEntry")
        return true;
    return false;
}

EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::Etherwisfarendpathcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwisfarendpathcurrentstatus{YType::bits, "etherWisFarEndPathCurrentStatus"}
{
    yang_name = "etherWisFarEndPathCurrentEntry"; yang_parent_name = "etherWisFarEndPathCurrentTable";
}

EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::~Etherwisfarendpathcurrententry()
{
}

bool EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::has_data() const
{
    return ifindex.is_set
	|| etherwisfarendpathcurrentstatus.is_set;
}

bool EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(etherwisfarendpathcurrentstatus.yfilter);
}

std::string EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisFarEndPathCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/etherWisFarEndPathCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwisfarendpathcurrentstatus.is_set || is_set(etherwisfarendpathcurrentstatus.yfilter)) leaf_name_data.push_back(etherwisfarendpathcurrentstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "etherWisFarEndPathCurrentStatus")
        return true;
    return false;
}

const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode::none {1, "none"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode::squareWave {2, "squareWave"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode::prbs31 {3, "prbs31"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode::mixedFrequency {4, "mixedFrequency"};

const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicerxtestpatternmode::none {1, "none"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicerxtestpatternmode::prbs31 {3, "prbs31"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicerxtestpatternmode::mixedFrequency {4, "mixedFrequency"};


}
}

